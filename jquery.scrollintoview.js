(function($){

//lazy evaluate the scrolling element (needs to be evaluated after the body element exists)
var html;

// default for this plugin, outerWidth/Height  and offset is to include padding and border but exclude margin. This adjusts the measurements if the options are set to something different
function propPx(el,opts, what){
	return	Math.round(
		(!opts.padding && -parseFloat(el.css('padding'+what) || 0)) +
		(!opts.border && -parseFloat(el.css('border'+what+'Width') || 0)) +
		(opts.margin && parseFloat(el.css('margin'+what) || 0))
	);
}

// find the effective size of the window; the clientHeight/Width less the size of the element. This gives the width/height of the rectangle that the top left corner of the element can go in and still
// leave room for the entire element
function constrainPx (el, opts, what){
	return document.documentElement['client'+what] - el['outer'+what]() -
		(what == 'Height' ?
			propPx(el,opts,'Top')+propPx(el,opts,'Bottom') :
			propPx(el,opts,'Left')+propPx(el,opts,'Right')
		);
}

$.fn.scrollIntoView = function(opts, easing, fn){
	// FF3 needs to scroll html; body.scrollHeight < html.scrollHeight
	// Opera9 needs to scroll html (body works but flashes); body < html
	// Chrome1 needs to scroll body; body >= html
	// Safari3 needs to scroll body; body >= html
	// IE7 in quirksmode needs to scroll body; body > html
	// IE7 in standards mode needs to scroll html; body < html
	html = html || ($('body')[0].scrollHeight >= $('html')[0].scrollHeight ? $('body')[0] : $('html')[0]);
	if (typeof opts != 'object') opts = {duration: opts, easing: easing, complete: fn}; 
	opts = $.extend({}, $.fn.scrollIntoView.defaults, $.metadata && this.metadata()['scrollIntoView'], opts);
	if (opts.complete){
		// the animate is done on the html element; the callback needs to be done on the target.
		var complete = opts.complete, self = this[0];
		opts.complete = function (){complete.apply(self, arguments);};
	}
	if (opts.margin) opts.border = true; // make sure the properties are logically consistent
	if (opts.border) opts.padding = true;
	var offset = this.offset(); // offset includes padding and border. We need to adjust
	offset.top -= propPx(this, opts, 'Top');
	offset.left -= propPx(this, opts, 'Left');
	var h = Math.max(0, constrainPx(this, opts, 'Height')), // if the size is negative then the element will not fit.  Just scroll so the top left corner is maximally visible 
		w = Math.max(0, constrainPx(this, opts, 'Width'));
		$(html).animate({
		scrollTop: Math.min(offset.top, Math.max(html.scrollTop, offset.top-h)),
		scrollLeft: Math.min(offset.left, Math.max(html.scrollLeft, offset.left-w))
	}, opts);
	return this;
};
$.fn.scrollIntoView.defaults = {
	padding: true,
	border: true,
	margin: false
};
})(jQuery);
