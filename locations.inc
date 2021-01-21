<?php
$locations = getBuiltInLocations();

function searchLocation($name) {
  global $locations;
  $count = count($locations) / 4;
  for ($i = 0; $i < $count; $i++) {
    if ($locations[$i * 4] == $name) {
      return array($locations[$i * 4 + 1] * 100,
                   $locations[$i * 4 + 2] * 100,
                   $locations[$i * 4 + 3]);
    }
  }
  return "";
}

function fillLocationList($selectedName) {
  global $locations;
  $count = count($locations) / 4;
  for ($i = 0; $i < $count; $i++) {
    $name = $locations[$i * 4];
    if ($name == $selectedName)
      echo "<option value=\"$name\" selected>";
    else
      echo "<option value=\"$name\">";
    echo "$name</option>\n";
  }
}

function vyhledani($selectedName) {
  global $locations;
  $count = count($locations) / 4;
  for ($i = 0; $i < $count; $i++) {
    $name = $locations[$i * 4];
    if ($name == $selectedName) {
      return array($locations[$i * 4 + 1],
                   $locations[$i * 4 + 2],
                   $locations[$i * 4 + 3]);
    }
  }
  return "";
}

function getBuiltInLocations() {
  return array(
   "Aach",             47.50,   8.51,  1,         /* 418 */
   "Aachen",           50.47, 6.05,   1,          /*   1 */
   "Abidjan",                     5.11,    -4.01,  0,     /* 718 */
   "Abilene, TX",                32.27,   -99.44, -6,     /* 901 */
   "Abu Dhabi",                  24.20,   54.34,   4,     /* 942 */
   "Acapulco",                   17.05, -100.08,  -6,     /* 943 */
   "Accra",                       5.20,    -0.09,  0,     /* 736 */
   "Addis Abeba",       9.09,   38.46,  3,        /* 602 */
   "Adelsheim",        49.24,   9.23,  1,         /* 419 */
   "Aden, Jemen",      12.47,   45.02,  3,        /* 603 */
   "Agana, Guam",                13.29,  144.45,  10,     /* 944 */
   "Agen",             44.12,   0.37,  1,         /* 512 */
   "Ahrweiler", 50.33,   7.08,   1,   /* 1133 */
   "Aix-en-Provence",  43.32,   5.26,  1,         /* 513 */
   "Aix-les-Bains",    45.42,   5.45,  1,         /* 514 */
   "Akron, OH",                  41.05,   -81.31, -5,     /* 861 */
   "Al-Manamah, Bharain",        26.13,   50.33,   3,     /* 945 */
   "Albany, NY",                 42.39,   -73.45, -5,     /* 836 */
   "Albuquerque, NM",            35.05,  -106.39, -7,     /* 833 */
   "Alburquerque",     39.13, -7.00,    1,        /* 282 */
   "Alexandria, Egypt",31.11,   29.56,  2,        /* 571 */
   "Alexandria, Greece",         40.38,   22.31,   2,     /* 1025 */
   "Algiers",                    36.30,     3.00,  1,     /* 646 */
   "Äli Bayramli, Aserbaidschan",39.56,   48.55,   4,     /* 1031 */
   "Alicante",         38.21, -0.29,    1,        /* 283 */
   "Allentown, PA",    40.36,  -75.29, -5,        /* 620 */
   "Altensteig",       48.35, 8.37,   1,          /*   2 */
   "Altlandsberg",     52.33,  13.43,  1,         /* 420 */
   "Altonna, Pennsylvania",      40.31,   -78.24, -5,     /* 877 */
   "Amarillo, TX",               35.12,  -101.50, -6,     /* 902 */
   "Amberg",           49.27, 11.52,  1,          /*   3 */
   "Amersfoort",       52.09, 5.24,   1,          /* 137 */
   "Amiens, France",             49.54,    2.18,     1,   /* 1055 */
   "Amman",           31.42, 35.53,     2,        /* 384 */
   "Amsterdam",        52.22, 4.54,   1,          /* 138 */
   "Anchorage, AK",    61.13, -149.53, -9,        /* 572 */
   "Ancona",           43.38, 13.30,    1,        /* 259 */
   "Andorra, Spain",             40.58,   -0.28,   1,     /* 946 */
   "Angermünde",       53.01,  14.00,  1,         /* 421 */
   "Angers, France",             47.28,   -0.33,     1,   /* 1056 */
   "Ankara",           39.56, 32.52,    2,        /* 301 */
   "Anklam",           53.51,  13.41,  1,         /* 422 */
   "Ann Arbor, MI",    42.18,  -83.45, -5,        /* 573 */
   "Annaberg",         57.31,  13.26,  1,         /* 423 */
   "Annecy",           45.54,   6.07,  1,         /* 515 */
   "Ansbach",          49.17,  10.34,  1,         /* 424 */
   "Antananarivo",              -18.31,    47.18,  3,     /* 778 */
   "Antibes",          43.35,   7.07,  1,         /* 516 */
   "Antwerpen",        51.13, 4.25,   1,          /* 128 */
   "Apolda",           51.01,  11.31,  1,         /* 425 */
   "Appenweier",                 48.32,    7.58,     1,   /* 1038 */ 
   "Ar-Rijad (Riyadh)", 24.38, 46.43,     3,        /* 385 */
   "Arad",            46.11, 21.20,     2,        /* 322 */
   "Arcachon",         44.37,  -1.12,  1,         /* 517 */
   "Arlon",            49.41, 5.49,   1,          /* 129 */
   "Arnheim",          52.01, 5.53,   1,          /* 139 */
   "Arnstadt",         50.50,  10.57,  1,         /* 426 */
   "Aschaffenburg",  49.59,   9.09,  1,  /* 1132 */
   "Aschersleben",     51.45,  11.27,  1,         /* 427 */
   "Ashland, KY",                38.29,   -82.38, -5,     /* 769 */
   "Ashlville, NC",              35.36,   -82.33, -5,     /* 851 */
   "Asmara, Eritrea",            15.01,   38.30,   3,     /* 947 */
   "Asti",             44.54, 8.12,     1,        /* 260 */
   "Asuncion",        -25.16, -57.40,   -4,       /* 370 */
   "Athen",            37.58, 23.43,    2,        /* 295 */
   "Atlanta (Ga., US)",33.45,  -84.23,  -5,       /* 191 */
   "Atlantic City, NJ",          39.22,   -74.26, -5,     /* 828 */
   "Auckland",                  -36.53,   174.45, 12,     /* 848 */
   "Augsburg",         48.23, 10.53,  1,          /*   4 */
   "Augusta, GA",      33.29,  -81.57, -5,        /* 574 */
   "Augusta, Georgia",           33.28,   -81.58, -5,     /* 732 */
   "Augusta, Maine",             44.19,   -69.46, -5,     /* 779 */
   "Aurich",           53.28, 7.29,   1,          /*   5 */
   "Austin, TX",                 30.16,   -97.45, -6,     /* 903 */
   "Bützow",           53.50,  11.59,  1,         /* 454 */
   "Bacau",           46.34, 26.55,     2,        /* 323 */
   "Bad Berka",        50.54,  11.17,  1,         /* 428 */
   "Bad Cannstatt",    48.48,   9.12,  1,         /* 429 */
   "Bad Freienwalde",  52.47,  14.01,  1,         /* 430 */
   "Bad Gottleuba",    50.51,  13.56,  1,         /* 431 */
   "Bad Kissingen",    50.12, 10.04,  1,          /*   6 */
   "Bad Kreuznach",    49.52, 7.51,   1,          /*   7 */
   "Bad Krozingen",    47.55,   7.43,  1,         /* 432 */
   "Bad Mergenheim",   49.30,   9.46,  1,         /* 433 */
   "Bad Mingolsheim",  49.14,   8.39,  1,         /* 434 */
   "Bad Nauheim",      50.22, 8.44,   1,          /*   8 */
   "Bad Rappenau",     49.19,   9.06,  1,         /* 435 */
   "Bad Salzungen",    50.48,  10.13,  1,         /* 436 */
   "Bad Wilznack",     52.57,  11.57,  1,         /* 437 */
   "Bad Wimpfen",      49.14,   9.09,  1,         /* 438 */
   "Baden-Baden",      48.46, 8.14,   1,          /*   9 */
   "Baden, Austria",     48.00, 16.14,  1,        /* 640 */
   "Baden, Switzerland",    47.29,  8.18,  1,        /* 634 */
   "Baghdad, Iraq",    33.21,   44.25,  3,        /* 575 */
   "Baiersdorf",       49.39,  11.01,  1,         /* 439 */
   "Bakersfield, CA",            35.23,  -119.01, -8,     /* 656 */
   "Baku, Aserbaidschan",        40.21,   49.49,   4,     /* 948 */
   "Ballenstedt",      51.43,  11.14,  1,         /* 440 */
   "Baltimore, MD",    39.17,  -76.37,  -5,       /* 192 */
   "Bamako",                     12.24,    -7.35,  0,     /* 782 */
   "Bamberg",          49.53, 10.53,  1,          /*  10 */
   "Bangkok",         13.35, 100.29,    7,        /* 379 */
   "Bangor, Maine",              44.48,   -68.46, -5,     /* 780 */
   "Bangui",                      4.14,    18.22,  1,     /* 712 */
   "Banjul",                     13.17,   -16.23,  0,     /* 731 */
   "Barby",            51.58,  11.53,  1,         /* 441 */
   "Barcelona",        41.23, 2.11,     1,        /* 284 */
   "Basel",            47.38, 7.40,   1,          /* 113 */
   "Baton Rouge, Louisiana",     30.27,   -91.11, -6,     /* 776 */
   "Battle Creek, MI",           42.19,   -85.11, -5,     /* 793 */
   "Bautzen",          51.11,  14.26,  1,         /* 442 */
   "Bay City, MI",               43.36,   -83.53, -5,     /* 794 */
   "Bayonne",          43.29,  -1.29,  1,         /* 518 */
   "Bayreuth",         49.57, 11.35,  1,          /*  11 */
   "Beaumont, TX",               30.05,   -94.06, -6,     /* 904 */
   "Beelitz",          52.14,  12.58,  1,         /* 443 */
   "Beersheba",                  31.15,    34.48,  2,     /* 952 */
   "Beeskow",          52.10,  14.14,  1,         /* 444 */
   "Beirut",          33.20, 35.23,     2,        /* 386 */
   "Belfast",          54.35, -5.55,  0,          /* 182 */
   "Belfort",          47.38,   6.52,  1,         /* 519 */
   "Belgrad",         44.50, 20.30,     1,        /* 357 */
   "Belleville",                 44.10,   -77.23, -5,     /* 682 */
   "Bellingham, WA",             48.46,  -122.29, -8,     /* 931 */
   "Belmonte",         40.22, -7.22,    0,        /* 292 */
   "Belts, Moldova",             47.45,   27.55,   2,     /* 1021 */
   "Bendery, Moldova",           46.50,   29.28,   2,     /* 1022 */
   "Benfeld",          48.22,   7.36,  1,         /* 520 */
   "Bentonville, Arkansas",36.22, -94.13,  -6,       /* 193 */
   "Berdicev, Ukraine",          49.54,   28.36,     2,   /* 1105 */
   "Beregovoye, Ukraine",        44.54,   33.37,     2,   /* 1122 */
   "Bergen, The Netherlands",    51.37,    6.04,   1,     /* 949 */
   "Berkeley, CA",               37.52,  -122.16, -8,     /* 657 */
   "Berlin",           52.31, 13.23,  1,          /*  12 */
   "Bern",             46.57, 7.26,   1,          /* 114 */
   "Bernau",           47.48,  12.22,  1,         /* 445 */
   "Bernburg",         51.48,  11.44,  1,         /* 446 */
   "Bershad, Ukraine",           48.22,   29.32,     2,   /* 1106 */
   "Besancon",         47.15,   6.02,  1,         /* 521 */
   "Bethlehem, Pennsylvania",    40.37,   -75.23, -5,     /* 878 */
   "Biarritz",         43.29,  -1.34,  1,         /* 522 */
   "Biel (Bienne)",      47.10,  7.12,  1,        /* 635 */
   "Bielefeld",        52.01, 8.31,   1,          /*  13 */
   "Biesenthal",       52.46,  13.37,  1,         /* 447 */
   "Billings, Montana",          45.47,  -108.30, -7,     /* 815 */
   "Biloxi, Mississippi",        30.24,   -88.53, -6,     /* 805 */
   "Binghamton, NY",             42.06,   -86.49, -5,     /* 837 */
   "Birmingham",       52.30, -1.50,  0,          /* 171 */
   "Birmingham, AL",   33.31,  -86.49, -6,        /* 576 */
   "Birobidzan",       48.48, 132.57, 9,          /* 158 */
   "Bischeim, France",           48.37,    7.45,     1,   /* 1057 */
   "Bischkek, Kirgistan",        43.01,   74.58,   6,     /* 950 */
   "Bismark, N. Dakota",         46.48,  -100.47, -7,     /* 858 */
   "Blackpool",        53.50,  -3.03,  0,         /* 481 */
   "Bleicherode",      51.26,  10.34,  1,         /* 448 */
   "Bloomington, IL",            40.29,   -89.00, -6,     /* 744 */
   "Boca Raton, FL",   26.21,  -80.05, -5,        /* 604 */
   "Bogota",         4.36,  -74.05,    -5,        /* 403 */
   "Boise, Idaho",               43.37,  -116.12, -7,     /* 742 */
   "Boizenburg",       53.22,  10.43,  1,         /* 449 */
   "Bologna",          44.29, 11.20,    1,        /* 261 */
   "Bombay, India (GMT+5)",18.58,  72.50,  5,        /* 577 */
   "Bombay, India (GMT+6)",18.58,  72.50,  6,        /* 578 */
   "Bonn",             50.44, 7.06,   1,          /*  14 */
   "Boras",           57.43, 12.55,     1,        /* 309 */
   "Bordeuax",         44.50,  -0.34,  1,         /* 523 */
   "Borna",            51.19,  13.11,  1,         /* 450 */
   "Boston, MA",       42.21,  -71.04,  -5,       /* 194 */
   "Botosani",        47.45, 26.40,     2,        /* 324 */
   "Boulay-Moselle",   49.11,   6.30,  1,         /* 524 */
   "Boulogne-Sur-Mer", 50.43,   1.37,  1,         /* 525 */
   "Bournemouth",      50.43,  -1.54,  0,         /* 482 */
   "Bowling Green, KY",          37.00,   -86.27, -5,     /* 770 */
   "Brüel",            53.44,  11.43,  1,         /* 452 */
   "Brünn",           49.12, 16.37,     1,        /* 342 */
   "Brüssel",          50.50, 4.20,   1,          /* 130 */
   "Bradford",         53.48, -1.45,  0,          /* 172 */
   "Brandenburg",      52.24, 12.32,  1,          /*  15 */
   "Brandon",                    49.51,   -99.57, -6,     /* 674 */
   "Brantford",                  43.09,   -80.16, -5,     /* 683 */
   "Brasilia",                  -15.10,  -47.54,  -3,     /* 951 */
   "Brasov",          45.39, 25.37,     2,        /* 325 */
   "Bratislava",      48.09, 17.07,     1,        /* 351 */
   "Brattleboro, VT",            42.51,   -72.34, -5,     /* 924 */
   "Braunschweig",     52.16, 10.31,  1,          /*  16 */
   "Brazzaville",                -4.08,    15.08,  1,     /* 716 */
   "Breisach",         48.01,   7.40,  1,         /* 451 */
   "Bremen",           53.04, 8.49,   1,          /*  17 */
   "Bremerhaven",      53.33, 8.34,   1,          /*  18 */
   "Bremgarten",       47.21, 8.21,   1,          /* 115 */
   "Brest, Fr.",       48.24,  -4.29,  1,         /* 526 */
   "Bridgeport",                 41.11,   -73.11, -5,     /* 717 */
   "Bridgetown (Barbados)",      13.05,  -59.28,  -4,     /* 952 */
   "Brighton",         50.50,  -0.08,  0,         /* 483 */
   "Brisbane",       -27.28, 153.02,   10,        /* 392 */
   "Bristol",          51.27, -2.35,  0,          /* 173 */
   "Brno, cz",                       49.12,   16.35,   1,     /* 953 */
   "Brockton, MA",               42.05,   -71.01, -5,     /* 783 */
   "Broken Hill, Australia",    -31.52,  141.10,  10,     /* 954 */
   "Brownsville, TX",            25.54,   -97.30, -6,     /* 905 */
   "Buchara",          39.46,   64.25,  5,        /* 605 */
   "Budapest",        47.30, 19.05,     1,        /* 340 */
   "Buenos Aires",    -34.36, -58.27,   -3,       /* 373 */
   "Buffalo",          42.54,  -78.53,  -5,       /* 195 */
   "Buffalo, NY",                42.53,   -78.52, -5,     /* 838 */
   "Bujumbura",                  -3.13,    29.11,  2,     /* 655 */
   "Bukarest",        44.26, 26.06,     2,        /* 326 */
   "Bukavu, Zaire",              -2.33,   28.39,   2,     /* 955 */
   "Burg",             52.16,  11.51,  1,         /* 453 */
   "Burlington (VT, US)", 44.29,  -73.13,  -5,       /* 196 */
   "Burlington",                 43.20,   -79.48, -5,     /* 684 */
   "Bursa",            40.11, 29.04,    2,        /* 302 */
   "Bussum",           52.16, 5.10,   1,          /* 140 */
   "Butte, Montana",             46.01,  -112.32, -7,     /* 816 */
   "Caen",             49.11,  -0.21,  1,         /* 527 */
   "Cahul, Moldova",             45.54,   28.12,   2,     /* 1023 */
   "Calabasas, AZ",       31.28, -110.58, -7, /* 1137 */
   "Calabasas, CA",       34.09, -118.38, -8,
   "Calbe",            51.54,  11.46,  1,         /* 455 */
   "Calgary",                    51.03,  -114.03, -7,     /* 669 */
   "Cali",           3.27,  -76.31,    -5,        /* 404 */
   "Caluire et Cuire", 45.48,   4.51,  1,         /* 528 */
   "Calvörde",         52.23,  11.17,  1,         /* 456 */
   "Calw",             48.43, 8.44,   1,          /*  19 */
   "Cambridge",        52.13,   0.08,  0,         /* 484 */
   "Cambridge, MA",              42.22,   -71.06, -5,     /* 784 */
   "Camdon, NJ",                 39.57,   -75.07, -5,     /* 829 */
   "Canberra",       -35.17, 149.08,   10,        /* 393 */
   "Cannes",           43.33,   7.01,  1,         /* 529 */
   "Canton, Ohio",     40.48,  -81.22,  -5,       /* 197 */
   "Capetown, South Africa",-33.55, 18.22, 2,        /* 621 */
   "Caputh",           52.21,  13.00,  1,         /* 457 */
   "Caracas, Venezuela",  10.30, -66.56, -4,         /* 415 */
   "Carpentras",       44.03,   5.03,  1,         /* 530 */
   "Carson City, NV",            39.10,  -119.46, -8,     /* 823 */
   "Cartagena, Spain",    37.36, -0.59,  1,
   "Casablanca, Marokko", 33.39,   -7.35,  0,        /* 579 */
   "Cavaillon",        43.50,   5.02,  1,         /* 531 */
   "Cayenne (French - Guyana)",   4.47,   52.28,  -3,     /* 957 */
   "Cebu, Phillipines",          10.11,  123.45,   8,     /* 958 */
   "Cedar Grove, NJ (1)", 40.51, -74.14,  -5, /* 1134 */
   "Cedar Grove, NJ (2)", 39.58, -74.10,  -5, /* 1135 */
   "Cedar Rapids, IA",           41.58,   -91.40, -6,     /* 759 */
   "Celle",            52.37, 10.05,  1,          /*  20 */
   "Central Islip, NY",          40.47,   -73.12, -5,     /* 839 */
   "Chalkis, Greece",            38.28,   23.36,   2,     /* 1026 */
   "Chalons-Sur-Marne",48.57,   4.22,  1,         /* 532 */
   "Chalons-Sur-Saone",46.47,   4.51,  1,         /* 533 */
   "Chambery, France",           45.34,    5.65,     1,   /* 1058 */
   "Champaign, IL",              40.07,   -88.15, -6,     /* 745 */
   "Chapel Hill, NC",  35.55,  -79.04, -5,        /* 622 */
   "Charkow, Ukraine",           49.55,   36.10,     2,   /* 1111 */
   "Charleroi",        50.25, 4.26,   1,          /* 131 */
   "Charleston (S.C., US)",32.48, -79.57,  -5,       /* 198 */
   "Charleston, West Virginia",  38.21,   -81.38, -5,     /* 937 */
   "Charlotte (N.C., US)", 35.14,  -80.50,  -5,   /* 199 */
   "Charlottesville, Virginia",    38.02, -78.29, -5, /* 1127 */
   "Chattanooga (Tenn., US)",    35.03,   -85.19, -6,     /* 899 */
   "Chemnitz",         50.50, 12.55,  1,          /*  21 */
   "Chernigov, Ukraine",         50.50,   24.08,     2,   /* 1107 */
   "Cherson, Ukraine, cz",           46.39,   32.36,     2,   /* 1112 */
   "České Budějovice",            58.58, 14.28,     1, 
   "Cheyenne, Wyoming",          41.08,  -104.49, -7,     /* 947 */
   "Chicago",          41.53,  -87.38,  -6,       /* 200 */
   "Chomutov, cz",            50.28, 13.25,     1, 
   "Churchill",                  58.45,   -94.10, -6,     /* 675 */
   "Cincinnati, OH",   39.06,  -84.38,  -5,       /* 201 */
   "Clermont-Ferrand", 45.47,   3.05,  1,         /* 534 */
   "Cleveland (Ohio, US)",41.30,  -81.41,  -5,       /* 202 */
   "Cluj",            46.47, 23.36,     2,        /* 327 */
   "Coesfeld",         51.56,   7.10,  1,         /* 458 */
   "Colmar",           58.05,   7.22,  1,         /* 535 */
   "Columbia, Missouri",         38.57,   -92.20, -6,     /* 809 */
   "Columbia, SC",               34.00,   -81.02, -5,     /* 891 */
   "Columbus, Georgia",          32.28,   -84.59, -5,     /* 733 */
   "Columbus, OH",     39.57,  -83.00,  -5,       /* 203 */
   "Conakry",                     9.19,    13.10,  0,     /* 737 */
   "Concord, New Hampshire",     43.12,   -71.32, -5,     /* 825 */
   "Constanta",       44.11, 28.39,     2,        /* 328 */
   "Cordoba, Argentinia",       -31.09,  -64.15,  -3,     /* 960 */
   "Cordoba, Spain",             57.52,   -4.50,   1,     /* 959 */
   "Cordova, Alaska, U.S.A.",    60.33, -145.45,  -9,     /* 961 */
   "Corpus Christi, TX",         27.48,   -97.24, -6,     /* 906 */
   "Coswig",           51.53,  12.26,  1,         /* 459 */
   "Cottbus",          51.45, 14.19,  1,          /*  22 */
   "Coventry",         52.25,  -1.30,  0,         /* 485 */
   "Crivitz",          53.35,  11.38,  1,         /* 460 */
   "Crossen",          50.45, 12.29,  1,          /* 152 */
   "Croydon",          51.23,  -0.06,  0,         /* 486 */
   "Czernowitz, Ukraine",48.17,25.58,    2,   /* 1108 */
   "Dömitz",           53.08,  11.14,  1,         /* 466 */
   "Düsseldorf",       51.12, 6.47,   1,          /*  29 */
   "Dachau",           48.15, 11.27,  1,          /*  23 */
   "Dakar",                      14.23,   -17.16,  0,     /* 889 */
   "Dakar, Senegal",             14.47,  -16.57,   0,     /* 963 */
   "Dalian, China",              38.55,  121.39,   8,     /* 962 */
   "Dallas, TX",       32.47,  -96.48,  -6,       /* 204 */
   "Damaskus",        33.08, 36.26,     3,        /* 383 */
   "Daressalam",                 -6.31,    39.11,  3,     /* 898 */
   "Dargun",           53.54,  12.51,  1,         /* 461 */
   "Darmstadt",        49.53, 8.40,   1,          /*  24 */
   "Davenport, IA",              41.31,   -90.35, -6,     /* 760 */
   "Davos",              46.48,  9.50,  1,        /* 636 */
   "Dawson",                     64.04,  -139.26, -8,     /* 707 */
   "Dayton, OH",                 39.46,   -84.12, -5,     /* 863 */
   "Daytona Beach, FL",          29.13,   -81.01, -5,     /* 721 */
   "Deauville, France",          49.22,    0.04,     1,   /* 1059 */
   "Decatur, IL",                39.51,   -88.57, -6,     /* 746 */
   "Decin",                      50.48,   14.13,     1,   /* 1035 */
   "Deggendorf",       48.51,  12.59,  1,         /* 462 */
   "Delitzsch",        51.31,  12.20,  1,         /* 463 */
   "Demmin",           53.54,  13.02,  1,         /* 464 */
   "Den Haag",         52.06, 4.18,   1,          /* 141 */
   "Denver (Colo., US)", 39.43, -105.01,  -7,       /* 205 */
   "Denzlingen",                 48.04,    7.52,     1,   /* 1039 */
   "Desmoines, IA",    41.35,  -93.37, -6,        /* 581 */
   "Dessau",           51.50, 12.14,  1,          /*  25 */
   "Detroit, MI",      42.20,  -83.03,  -5,       /* 206 */
   "Dhaka, Bangladesh",          23.29,   90.24,   6,     /* 964 */
   "Dieburg",          49.54,   8.50,  1,         /* 465 */
   "Dieuze, France",             48.49,    6.43,     1,   /* 1060 */
   "Dijon",            47.19,   5.01,  1,         /* 536 */
   "Djakarta, Indonesia", -6.10,  106.48,  7,        /* 580 */
   "Dnepropetrovsk, Ukraine",    48.27,   35.02,     2,   /* 1109 */
   "Dodge City (Kans., US)",     37.45,  -100.01, -6,     /* 765 */
   "Donetsk, Ukraine",           48.00,   37.48,     2,   /* 1110 */
   "Dorohoi",         47.57, 26.24,     2,        /* 329 */
   "Dortmund",         51.31, 7.28,   1,          /*  26 */
   "Drama, Greece",              41.09,   24.10,   2,     /* 1027 */
   "Dresden",          51.03, 13.44,  1,          /*  27 */
   "Dubayy",           25.18,   55.18,  4,        /* 582 */
   "Dublin",           53.20, -6.15,  0,          /* 183 */
   "Dubrovnik",       42.38, 18.07,     1,        /* 360 */
   "Dubuque, IA",                42.30,   -90.40, -6,     /* 761 */
   "Duisburg",         51.25, 6.46,   1,          /*  28 */
   "Duluth, Minnesota",          46.47,   -92.06, -6,     /* 801 */
   "Dunkerque, France",          51.03,    2.22,     1,   /* 1061 */
   "Durban, South Africa",      -29.52,   30.54,   2,     /* 965 */
   "Durham, NC",                 36.00,   -78.55, -5,     /* 853 */
   "Durlach",          49.00,   8.28,  1,         /* 467 */
   "Durres, Albania",  41.19,   19.26,  1,        /* 597 */
   "Dushanbe, Tadschikistan",    38.36,   69.06,   6,     /* 966 */
   "Eastbourne",       50.46,   0.17,  0,         /* 487 */
   "Eau Claire (Wis., US)",      44.49,   -91.30, -6,     /* 940 */
   "Edinburgh",        55.57, -3.13,  0,          /* 174 */
   "Edmondton",                  53.33,  -113.29, -7,     /* 670 */
   "Eilat",            29.33, 34.57,  2,          /* 185 */
   "Eindhoven",        51.26, 5.28,   1,          /* 142 */
   "El Paso, TX",                31.46,  -106.29, -6,     /* 907 */
   "Elbeuf, France",             49.17,    1.00,     1,   /* 1062 */
   "Elizabeth, N.J, US",  40.40, -74.11, -5,         /* 417 */
   "Emmendingen",      48.07, 7.50,   1,          /*  30 */
   "Encinitas, CA",       33.02, -117.17, -8, /* 1136 */
   "Enid, Oklahoma",             36.24,   -97.53, -6,     /* 872 */
   "Enschede",         52.12, 6.53,   1,          /* 143 */
   "Epernay, France",            49.03,    3.57,     1,   /* 1063 */
   "Epinal, France",             48.11,    6.27,     1,   /* 1064 */
   "Er Riad",                    24.39,   46.42,   3,     /* 967 */
   "Erfurt",           50.58, 11.01,  1,          /*  31 */
   "Erie, Pennsylvania",         42.07,   -80.05, -5,     /* 879 */
   "Esch-sur-Alzette",49.30, 5.59,      1,        /* 306 */
   "Essen/Ruhr",       51.28, 7.01,   1,          /*  32 */
   "Essexville, MI",   43.37,  -83.50,  -5,       /* 207 */
   "Ettenheim",                  48.15,    7.49,     1,   /* 1040 */
   "Eugene (Oreg, US)",          44.03,  -123.06, -8,     /* 875 */
   "Eureka, CA",                 40.48,  -124.10, -8,     /* 658 */
   "Evansville, Indiana",        37.58,   -87.34, -6,     /* 752 */
   "Evian-Les-Bains",  46.23,   6.35,  1,         /* 537 */
   "Exeter",           50.43,  -3.31,  0,         /* 488 */
   "Fürth",            49.28, 10.59,  1,          /*  36 */
   "Fairbanks, AK",    64.51, -147.43, -10,       /* 208 */
   "Fall River, MA",             41.42,   -71.09, -5,     /* 785 */
   "Fargo, N. Dakota",           46.53,   -96.47, -7,     /* 859 */
   "Ferrara",          44.50, 11.35,    1,        /* 262 */
   "Firenze, Italy",             43.46,   11.14,   1,     /* 968 */
   "Flagstaff, Arizona",  35.12, -111.39,  -7,       /* 209 */
   "Flint, MI",                  43.01,   -83.42, -5,     /* 795 */
   "Florenz",          43.46, 11.15,    1,        /* 263 */
   "Florina",                    40.47,   21.25,   2,     /* 1019 */
   "Forbach, France",            49.11,    6.54,     1,   /* 1065 */
   "Fort Lauderdale, FL", 26.07,  -80.08, -5,        /* 583 */
   "Frankfurt/Main",   50.07, 8.40,   1,          /*  33 */
   "Frankfurt/Oder",   52.20, 14.33,  1,          /*  34 */
   "Fredericton",                45.58,   -66.39, -4,     /* 676 */
   "Freetown, Sierra Leone",      8.30,  -13.13,   0,     /* 969 */
   "Freiburg i. Br.",  47.59, 7.51,   1,          /*  35 */
   "Fresno, CA",                 36.44,  -119.47, -8,     /* 659 */
   "Frýdek Místek",            49.41, 18.21,     1, 
   "Ft Smith, Arkansas",         35.23,   -94.26, -6,     /* 650 */
   "Ft Worth, TX",               32.45,   -97.20, -6,     /* 908 */
   "Ft. Walton Beach, FL",30.24,  -86.31, -5,        /* 623 */
   "Ft. Wayne, Indiana",         41.04,   -85.08, -6,     /* 753 */
   "Fulda",            50.33, 9.41,   1,          /*  37 */
   "Göteborg",        57.43, 11.58,     1,        /* 310 */
   "Göttingen",        51.32, 9.55,   1,          /*  40 */
   "Gaborone",                  -24.27,    25.33,  2,     /* 653 */
   "Gadsten, AL",                34.01,   -86.01, -6,     /* 641 */
   "Gainesville, FL",            29.39,   -82.19, -5,     /* 722 */
   "Galanta",         48.12, 17.43,     1,        /* 352 */
   "Galati",          45.26, 28.03,     2,        /* 330 */
   "Gallup, NM",                 35.31,  -108.44, -7,     /* 834 */
   "Galveston, TX",              29.18,   -94.48, -6,     /* 909 */
   "Gap, France",                44.34,    6.05,     1,   /* 1054 */
   "Gary, Indiana",              41.37,   -87.20, -6,     /* 754 */
   "Gateshead",        54.58, -1.37,  0,          /* 175 */
   "Gelsenkirchen",    51.31, 7.07,   1,          /*  38 */
   "Geneve",           46.12, 6.09,   1,          /* 116 */
   "Ženeva",           46.12, 6.09,   1,          /* 116 */
   "Gent",             51.03, 3.43,   1,          /* 132 */
   "Genua",            44.25, 8.57,     1,        /* 264 */
   "Georgetown, Gambia",         13.13,  -14.45,   0,     /* 970 */
   "Gießen",           50.35, 8.40,   1,          /*  39 */
   "Givat Zev, Israel",   31.51, 35.09,  2,
   "Glasgow",          55.53, -4.15,  0,          /* 176 */
   "Gondar, Ethiopia", 12.36,   37.30,  3,        /* 606 */
   "Grabow",           53.16, 11.34,  1,          /*  41 */
   "Grand Junction",             39.04,  -108.34, -7,     /* 714 */
   "Grand Rapids, MI",           42.58,   -85.40, -5,     /* 796 */
   "Grasse",           43.40,   6.55,  1,         /* 538 */
   "Graz",             47.05, 15.27,  1,          /* 123 */
   "Great Falls, Montana",       47.30,  -111.18, -7,     /* 817 */
   "Green Bay (Wis., US)",       44.31,   -88.01, -6,     /* 941 */
   "Greensboro, NC",             36.04,   -79.47, -5,     /* 854 */
   "Greenville, SC",             34.51,   -82.24, -5,     /* 892 */
   "Greenwich Meridian",   0.00,    0.00,  0,        /* 624 */
   "Grenoble",         45.10,   5.43,  1,         /* 539 */
   "Grimsby",          53.35,  -0.05,  0,         /* 489 */
   "Groningen",        53.13, 6.33,   1,          /* 144 */
   "Guangzhou (Canton)", 23.06, 113.16, 8,        /* 374 */
   "Guatemala City",             14.35,  -90.40,  -6,     /* 971 */
   "Guelph",                     43.33,   -80.15, -5,     /* 685 */
   "Guildford",        51.14,  -0.35,  0,         /* 490 */
   "Gulfport, Mississippi",      30.22,   -89.06, -6,     /* 806 */
   "Hagen (Westf)",    51.22, 7.28,   1,          /*  42 */
   "Hagenow", 53.26,   11.11,   1,  /* 1128 */
   "Haguenau",         48.49,   7.47,  1,         /* 540 */
   "Haifa",            32.22, 34.56,  2,          /* 186 */
   "Halifax, N.S., Can.", 44.39, -63.36, -4,      /* 396 */
   "Halle/Saale",      51.29, 11.58,  1,          /*  43 */
   "Hamburg",          53.33, 9.59,   1,          /*  44 */
   "Hameln",           52.06, 9.21,   1,          /*  45 */
   "Hamilton",                   43.15,   -79.53, -5,     /* 686 */
   "Hamilton, OH",               39.24,   -84.34, -5,     /* 864 */
   "Hannover",         52.24, 9.44,   1,          /*  46 */
   "Hanoi",                      21.04,   105.50,  7,     /* 926 */
   "Harare",                    -17.30,    31.02,  2,     /* 951 */
   "Harlow",           51.47,   0.08,  0,         /* 491 */
   "Harrisburg, Pennsylvania",   40.16,   -76.53, -5,     /* 880 */
   "Harrogate",        54.00,  -1.33,  0,         /* 492 */
   "Harrow, United Kingdom",     51.35,   -0.22,     0,   /* 1052 */
   "Hartford (Conn., US)",41.46,  -72.41,  -5,       /* 210 */
   "Hartmanice, Šumava",            49.10, 13.27,     1, 
   "Havana",         23.08, -82.22,    -5,        /* 391 */
   "Havelberg",        52.50, 12.04,  1,          /*  47 */
   "Hebron",           31.32, 35.06,  2,          /* 187 */
   "Heidelberg",       49.25, 8.43,   1,          /*  48 */
   "Helena, Montana",            46.36,  -112.02, -7,     /* 818 */
   "Helsinki",        60.10, 24.58,     2,        /* 316 */
   "Hemel Hempstead",  51.46,  -0.28,  0,         /* 493 */
   "Herford",          52.06, 8.40,   1,          /*  49 */
   "Hermosillo, Mexico",         29.11, -110.59,  -6,     /* 972 */
   "Hessisch Oldendorf",52.10, 9.15,   1,          /*  50 */
   "Hildesheim",       52.09, 9.57,   1,          /*  51 */
   "Hilo",                       19.44,  -155.05, 10,     /* 738 */
   "Hilversum",        52.14, 5.10,   1,          /* 145 */
   "Hof",              50.18, 11.55,  1,          /*  52 */
   "Hollywood",        26.00,  -80.09,  -5,       /* 211 */
   "Holyoke, MA",                42.12,   -72.37, -5,     /* 786 */
   "Hongkong",        25.15, 114.10,    8,        /* 375 */
   "Honolulu",       21.19, -157.50,   -10,       /* 406 */
   "Houston, TX",      29.46,  -95.22,  -6,       /* 212 */
   "Hove",             50.49,  -0.10,  0,         /* 494 */
   "Hradec Králové, cz",            50.13, 15.50,     1, 
   "Hull",                       45.26,   -75.43, -5,     /* 701 */
   "Huntington, West Virginia",  38.25,   -82.27, -5,     /* 938 */
   "Huntsville, AL",             34.44,   -86.35, -6,     /* 642 */
   "Iasi",            47.10, 27.35,     2,        /* 331 */
   "Idar-Oberstein",   49.42, 7.19,   1,          /*  53 */
   "Indianapolis, Indiana", -19.02,  -47.55,  -6,    /* 213 */
   "Ingwiller, France",          48.52,    7.29,     1,   /* 1066 */
   "Innsbruck",        47.16, 11.24,  1,          /* 124 */
   "Iowa City, IA",              41.40,   -91.32, -6,     /* 762 */
   "Irkutsk",          52.16, 104.20, 8,          /* 159 */
   "Istanbul",         41.01, 28.58,    2,        /* 303 */
   "Izmir",            38.25, 27.09,    2,        /* 304 */
   "Jackson, MI",                42.15,   -84.24, -5,     /* 797 */
   "Jackson, Mississippi",       32.18,   -90.11, -6,     /* 807 */
   "Jacksonsville, FL",30.20,  -81.40, -5,        /* 584 */
   "Jakarta, Indonesia",         -6.17,  106.39,   7,     /* 973 */
   "Jekaterinburg",    56.50,   60.30,  5,        /* 607 */
   "Jersey City, NJ",            40.44,   -74.04, -5,     /* 830 */
   "Jerusalem",        31.24, 35.00,  2,          /* 189 */
   "Jihlava, cz",            49.24, 15.35,     1, 
   "Johannesburg",    -26.15, 28.00,    2,        /* 305 */
   "Johnstown, Pennsylvania",    40.20,   -78.55, -5,     /* 881 */
   "Joplin, Missouri",           37.05,   -94.30, -6,     /* 810 */
   "Juneau, AK",                 58.18,  -134.25, -10,    /* 644 */
   "Köln",             50.56, 6.59,   1,          /*  60 */
   "Kolín nad Rýnem",             50.56, 6.59,   1,          /*  60 */
   "Königs Wusterhausen",        52.18,   13.37,     1,   /* 1048 */
   "Königsberg",       54.43,  20.30,  2,         /* 476 */
   "Kaifeng, China",   34.48,  114.26,  8,        /* 608 */
   "Kairo",           29.40, 31.01,     2,        /* 382 */
   "Kaiserslautern",   49.26, 7.46,   1,          /*  54 */
   "Kalamazoo, MI",              42.17,   -85.35, -5,     /* 798 */
   "Kampala",                     0.12,    32.21,  3,     /* 920 */
   "Kanarische Inseln",          28.28,  -15.03,   0,     /* 956 */
   "Kansas City (Kans., US)", 39.07, -94.39, -6,     /* 214 */
   "Kansas City, Missouri",      39.05,   -94.35, -6,     /* 811 */
   "Kapstadt (Capetown)", -33.55, 18.22,  2,         /* 414 */
   "Karachi",          24.52,   67.03,  5,        /* 585 */
   "Karlovy Vary, cz",               50.11,   12.52,     1,   /* 1036 */
   "Karlsbad, cz",        50.11, 12.52,     1,        /* 343 */
   "Karlsruhe",        49.03, 8.24,   1,          /*  55 */
   "Kassel",           51.19, 9.29,   1,          /*  56 */
   "Katmandu, Nepal",            27.40,   85.28,   6,     /* 974 */
   "Kaunas",           54.54,  23.54,  2,         /* 475 */
   "Kehl",                       48.35,    7.50,     1,   /* 1041 */
   "Kenosha (Wis., US)",         42.36,   -87.50, -6,     /* 942 */
   "Kenzingen",                  48.11,    7.46,     1,   /* 1042 */
   "Key West, FL",               24.34,   -81.48, -5,     /* 723 */
   "Khabarovsk, Russia",         48.04,  134.38,  10,     /* 975 */
   "Khartoum",                   15.20,    32.13,  2,     /* 897 */
   "Khartoum, Sudan",            15.14,   32.34,   2,     /* 976 */
   "Kiel",             54.20, 10.08,  1,          /*  57 */
   "Kiew",             50.26, 30.31,  2,          /* 160 */
   "Kigali",                     -1.34,     3.02,  2,     /* 888 */
   "Kilkis, Greece",             41.00,   22.54,   2,     /* 1028 */
   "Kingston",                   44.14,   -76.29, -5,     /* 687 */
   "Kinshasa",                   -4.11,    15.11,  1,     /* 950 */
   "Kishinew, Moldova",          47.00,   28.50,   2,     /* 1020 */
   "Kitchener",                  43.27,   -80.29, -5,     /* 688 */
   "Kleinmachnow",     52.24, 13.15,  1,          /*  58 */
   "Knokke",           51.21, 3.17,   1,          /* 133 */
   "Knoxville (Tenn., US)",      35.58,   -83.55, -6,     /* 900 */
   "Koblenz",          50.21, 7.35,   1,          /*  59 */
   "Konstanz",            47.04,  9.10,  1,
   "Kopenhagen",      55.40, 12.35,     1,        /* 308 */
   "Korfu",            39.36, 19.56,    2,        /* 296 */
   "Korosten, Ukraine",          50.57,   28.38,     2,   /* 1113 */
   "Kosice",          48.43, 21.15,     1,        /* 353 */
   "Krakau",           50.03, 19.58,  1,          /* 153 */
   "Krakov",           50.03, 19.58,  1,          /* 153 */
   "Krasnojarsk",      56.00,   92.59,  7,        /* 609 */
   "Krefeld",          51.20, 6.34,   1,          /*  61 */
   "Kremenchug, Ukraine",        49.04,   33.25,     2,   /* 1114 */
   "Kuala Lumpur, Malaysia",3.09, 101.43,  8,        /* 586 */
   "Kuwait, Kuwait",   29.30,   47.45,  3,        /* 587 */
   "Lörrach",          47.37, 7.40,   1,          /*  63 */
   "Lübeck",           53.52, 10.40,  1,          /*  64 */
   "La Chaux-De-Fonds",  47.06,  6.50,  1,        /* 637 */
   "La Ciotat, France",          43.10,    5.36,     1,   /* 1068 */
   "La Paz, Argentinia",        -30.45,  -59.40,  -3,     /* 977 */
   "La Plata, Argentinia",      -34.58,  -57.58,  -3,     /* 978 */
   "La Rochelle",      46.10,  -1.10,  1,         /* 541 */
   "La Salle",                   45.26,   -73.40, -5,     /* 702 */
   "La Seyne-Sur-Mer", 43.06,   5.53,  1,         /* 542 */
   "Laayoune",                   27.06,   -13.07,  1,     /* 936 */
   "Lafayette, Indiana",         40.25,   -86.54, -6,     /* 755 */
   "Lagos",                       6.16,     3.17,  1,     /* 850 */
   "Lagos, Nigeria",    6.27,    3.24,  1,        /* 588 */
   "Lahr",                       48.20,    7.52,     1,   /* 1043 */
   "Lancaster, Pennsylvania",    40.02,   -76.18, -5,     /* 882 */
   "Landau an der Isar", 48.40,  12.43,  1,         /* 469 */
   "Landau",           49.12,   8.07,  1,         /* 468 */
   "Lansing, MI",                42.44,   -84.33, -5,     /* 799 */
   "Laredo, TX",                 27.30,   -99.31, -6,     /* 910 */
   "Larissa, Greece",            39.38,   22.25,   2,     /* 1029 */
   "Las Vegas, NV",    36.11, -115.08, -8,        /* 589 */
   "Lausanne",         46.31, 6.38,   1,          /* 167 */
   "Laval",                      45.13,   -73.45, -5,     /* 703 */
   "Lawrence, MA",               42.42,   -71.10, -5,     /* 787 */
   "Le Havre",         49.30,   0.08,  1,         /* 543 */
   "Le Mans, France",            48.00,    0.12,     1,   /* 1069 */
   "Leeds",            53.50, -1.35,  0,          /* 177 */
   "Leicester",        52.38,  -1.05,  0,         /* 495 */
   "Leiden",           52.09, 4.30,   1,          /* 146 */
   "Leipzig",          51.19, 12.20,  1,          /*  62 */
   "Lemberg, Lwow, Ukraine",     49.50,   24.02,     2,   /* 1115 */
   "Lethbridge",                 49.42,  -112.50, -7,     /* 671 */
   "Lexington, KY",              38.03,   -84.30, -5,     /* 771 */
   "Lhasa",                      29.41,    92.12,  8,     /* 917 */
   "Liberec, cz",         50.46, 15.03,     1,        /* 344 */
   "Libourne, France",           44.55,   -0.14,     1,   /* 1070 */
   "Libreville",                  0.14,     9.15,  1,     /* 730 */
   "Lihue",                      21.59,  -159.23, 10,     /* 739 */
   "Lille",            50.38,   3.04,  1,         /* 544 */
   "Lilongwe",                  -13.35,    33.29,  2,     /* 781 */
   "Lima",           -12.03, -77.03,   -5,        /* 390 */
   "Lima, OH",                   40.45,   -84.06, -5,     /* 865 */
   "Limerick, Ireland",          52.42,   -8.40,   0,     /* 979 */
   "Limoges",          45.50,   1.16,  1,         /* 545 */
   "Lincoln, Nebraska",          40.49,   -96.42, -6,     /* 822 */
   "Linz",             48.18, 14.18,  1,          /* 125 */
   "Lissabon",         38.43, -9.08,    0,        /* 293 */
   "Little Rock",      34.44,  -92.15,  -6,       /* 215 */
   "Liége",            50.38, 5.34,   1,          /* 134 */
   "Liverpool",        53.25, -2.55,  0,          /* 178 */
   "Livorno",          43.33, 10.19,    1,        /* 265 */
   "Ljubljana",       46.03, 14.31,     1,        /* 366 */
   "Lodz",             51.46, 19.13,  1,          /* 154 */
   "Logan, Utah",                41.44,  -111.50, -7,     /* 921 */
   "Lome",                        6.06,     1.13,  0,     /* 918 */
   "London",           51.30, -0.10,  0,          /* 179 */
   "Londýn",           51.30, -0.10,  0,          /* 179 */
   "London, Ontario",            42.59,   -81.14, -5,     /* 689 */
   "Long Beach, CA",             33.46,  -118.11, -8,     /* 660 */
   "Lorain, OH",                 41.28,   -82.11, -5,     /* 866 */
   "Los Angeles (LA)", 34.03, -118.15,  -8,       /* 216 */
   "Louisville (Ky., US)",38.16,  -85.45,  -5,       /* 217 */
   "Lowell, MA",                 42.38,   -71.19, -5,     /* 788 */
   "Luanda",                     -8.30,    13.09,  1,     /* 647 */
   "Lubbock, TX",                33.35,  -101.51, -6,     /* 911 */
   "Ludwigshafen",     49.29, 8.26,   1,          /*  65 */
   "Ludwigslust",      53.19, 11.30,  1,          /*  66 */
   "Lugano",             46.01,  8.58,  1,        /* 639 */
   "Lugoj, Romania",   45.41,   21.54,  2,        /* 599 */
   "Lund",            55.42, 13.11,     1,        /* 311 */
   "Luneville, France",          48.36,    6.30,     1,   /* 1071 */
   "Lusaka",                    -15.17,    28.10,  2,     /* 949 */
   "Lushnje, Albania", 40.56,   19.42,  1,        /* 598 */
   "Luton",            51.53,  -0.25,  0,         /* 496 */
   "Luxemburg",       49.36, 6.09,      1,        /* 307 */
   "Luzern",             47.03,  8.18,  1,        /* 638 */
   "Lyon",             45.45,   4.51,  1,         /* 546 */
   "Mönchengladbach",  51.12, 6.28,   1,          /*  72 */
   "Mülhausen im Täle",48.34,   9.39,  1,         /* 551 */
   "München",          48.08, 11.34,  1,          /*  73 */
   "Mnichov",          48.08, 11.34,  1,          /*  73 */
   "Münsingen",        46.53, 7.34,   1,          /* 117 */
   "Münster",                    51.57,     7.37,    1,   /* 1125 */
   "Maastricht",       50.52, 5.43,   1,          /* 147 */
   "Macao, China",               22.13,  113.36,   8,     /* 980 */
   "Macon, Georgia",             32.50,   -83.38, -5,     /* 734 */
   "Madison (Wis., US)", 43.05,  -89.22,  -6,       /* 218 */
   "Madrid",           40.24, -3.41,    1,        /* 285 */
   "Magdeburg",        52.07, 11.38,  1,          /*  67 */
   "Mailand",          45.28, 9.12,     1,        /* 268 */
   "Mainz",            50.01, 8.16,   1,          /*  68 */
   "Malaga",           36.43, -4.25,    1,        /* 286 */
   "Mallorca",         39.30, 3.00,     1,        /* 287 */
   "Malmö",           55.36, 13.00,     1,        /* 312 */
   "Managua, Nikaragva",         12.09,  -86.19,  -6,     /* 981 */
   "Manaus",                     -2.53,  -60.07,  -4,     /* 982 */
   "Manchester",       53.30, -2.15,  0,          /* 180 */
   "Manchester, New Hampshire",  42.59,   -71.28, -5,     /* 826 */
   "Manila",                     14.37,   121.00,  8,     /* 887 */
   "Mannheim",         49.29, 8.29,   1,          /*  69 */
   "Mantova",          45.09, 10.48,    1,        /* 266 */
   "Maputo",                    -25.35,    32.21,  2,     /* 820 */
   "Maracaibo, Venezuela",       10.31,  -71.58,  -4,     /* 983 */
   "Marbella",         36.31, -4.53,    1,        /* 288 */
   "Marburg",          50.49, 8.46,   1,          /*  70 */
   "Marignane, France",          43.25,    5.13,     1,   /* 1072 */
   "Markkleeberg",               51.17,   12.23,     1,   /* 1053 */
   "Marseille",        43.18, 5.24,   1,          /* 168 */
   "Marshall, TX",               32.33,   -94.23, -6,     /* 912 */
   "Maseru",                    -29.11,    27.17,  2,     /* 773 */
   "Mauritius",       -20.17,   57.33,  4,        /* 590 */
   "Mbabane, Swasiland",        -26.04,   31.09,   2,     /* 984 */
   "Mbale, Uganda",     1.04,   34.11,  3,        /* 610 */
   "Medellin",       6.15,  -75.35,    -5,        /* 405 */
   "Melbourne",      -37.49, 144.58,   10,        /* 394 */
   "Melun, France",              48.32,    2.40,     1,   /* 1073 */
   "Memphis (Tenn., US)",35.08,  -90.03, -6,     /* 219 */
   "Menton",           43.47,   7.30,  1,         /* 548 */
   "Meran",            46.40, 11.09,    1,        /* 267 */
   "Merlebach, France",          49.09,    6.48,     1,   /* 1074 */
   "Metz",             49.08,   6.10,  1,         /* 549 */
   "Mexico City",     19.27, -99.16,    -6,       /* 372 */
   "Miami Beach, FL",  25.47,  -80.08,  -5,       /* 221 */
   "Miami, FL",        25.46,  -80.12,  -5,       /* 220 */
   "Milwaukee (Wis., US)",43.02,  -87.55,  -6,       /* 222 */
   "Minden",           52.17, 8.55,   1,          /*  71 */
   "Minneapolis, Minnesota",44.59,  -93.13,  -6,       /* 223 */
   "Minot, N. Dakota",           48.14,  -101.18, -7,     /* 860 */
   "Minsk",            53.54,  27.34,  2,         /* 477 */
   "Mississauga",                43.33,   -79.35, -5,     /* 690 */
   "Mladá Boleslav, cz",            50.25, 14.54,     1, 
   "Mobile",           30.42,  -88.05,  -6,       /* 224 */
   "Mâcon, Fr.",       46.18,   4.50,  1,         /* 547 */
   "Modena",           44.40, 10.55,    1,        /* 269 */
   "Mogadishu",                   2.01,    45.13,  3,     /* 890 */
   "Moline, IL",                 41.31,   -90.31, -6,     /* 747 */
   "Moncton",                    46.05,   -64.47, -4,     /* 677 */
   "Monrovia",                    6.12,   -10.28,  0,     /* 774 */
   "Mons",             50.27, 3.56,   1,          /* 135 */
   "Monsey, NY",       41.07,  -74.04, -5,        /* 625 */
   "Montauban, France",          44.01,    1.21,     1,   /* 1075 */
   "Montbeliard, France",        47.31,    6.48,     1,   /* 1076 */
   "Monte Carlo, Monaco",        43.44,    7.25,   1,     /* 985 */
   "Monterrey, Mexico",          25.40, -109.19,  -6,     /* 986 */
   "Montevideo",       -34.53, -56.11, -3,        /* 413 */
   "Montgomery, AL",             32.23,   -86.19, -6,     /* 643 */
   "Monticello",       41.39,  -74.42,  -5,       /* 225 */
   "Montpelier, VT",             44.16,   -72.33, -5,     /* 925 */
   "Montpellier",      43.36,   3.53,  1,         /* 550 */
   "Montreal, Fr.",    47.32, 4.02,   1,          /* 166 */
   "Montreal, Quebec, Can.", 45.31, -73.34,-5,    /* 397 */
   "Moose Jaw",                  50.24,  -105.32, -6,     /* 709 */
   "Moskau",           55.45, 37.35,  3,          /* 161 */
   "Most, cz",            50.30, 13.38,     1, 
   "Mukacevo, Ukraine",          48.27,   22.43,     2,   /* 1116 */
   "Mukov, cz",            50.30, 13.50,     1, 
   "Muncie, Indiana",            40.11,   -85.23, -6,     /* 756 */
   "N'Djamena",                  12.06,    14.35,  1,     /* 713 */
   "Nîmes",            43.50,   4.21,  1,         /* 553 */
   "Nürnberg",         49.27, 11.04,  1,          /*  79 */
   "Nagold",           48.33, 8.43,   1,          /*  74 */
   "Nairobi",           -1.17, 36.49,   3,        /* 408 */
   "Nancy",            48.41,   6.12,  1,         /* 552 */
   "Nandi, Simbabwe",           -20.59,   31.47,   2,     /* 988 */
   "Nantes, France",             47.14,   -1.29,   1,     /* 989 */
   "Naples (Fla., US)",26.08,  -81.48,  -5,       /* 226 */
   "Nashville (Tenn., US)", 36.09, -86.48, -6,    /* 227 */
   "Nassau, Germany",            50.19,    7.48,   1,     /* 987 */
   "Natchez, Mississippi",       31.34,   -91.23, -6,     /* 808 */
   "Neapel",           40.51, 14.17,    1,        /* 270 */
   "Netanya",          32.20, 34.51,  2,          /* 188 */
   "Neu Dehli (GMT+5)", 28.18, 77.28,     5,        /* 380 */
   "Neu Dehli (GMT+6)", 28.18, 77.28,     6,        /* 381 */
   "Neu Fahrland",               52.27,    13.03,    1,    /* 1126 */
   "Neumünster",       54.04, 9.59,   1,          /*  75 */
   "Neuruppin",        52.55, 12.48,  1,          /*  76 */
   "Neustadt/Weinstraße", 49.21, 8.08,   1,          /*  77 */
   "Neustrelitz",      53.21, 13.04,  1,          /*  78 */
   "New Bedfort, MA",  41.38,  -70.56, -5,        /* 611 */
   "New Brunswick",    40.29,  -74.27,  -5,       /* 228 */
   "New Haven (Conn., US)", 41.18, -72.56, -5,    /* 229 */
   "New Orleans, Louisiana",29.58,  -90.07,  -6,     /* 230 */
   "New York, Brooklyn",40.42,  -74.00,  -5,       /* 232 */
   "New York, NY",     40.43,  -74.01,  -5,       /* 231 */
   "Newark (N.J., US)",40.44,  -74.10,  -5,       /* 233 */
   "Newcastle",        54.12,  -5.45,  0,         /* 497 */
   "Newport (R.I., US)", 41.13, -71.18, -5,       /* 234 */
   "Niagra Falls, NY",           43.06,   -79.03, -5,     /* 840 */
   "Niamey",                     13.19,     2.03,  1,     /* 849 */
   "Nice",             43.42, 7.15,   1,          /* 169 */
   "Nicosia, Cyprus",  34.47,   33.29,  2,        /* 612 */
   "Nikolayev, Ukraine",         49.31,   23.58,     2,   /* 1117 */
   "Nizhniy Novgorod",           56.20,   44.10,   4,     /* 991 */
   "Nizza Monferrato", 44.46,   8.21,  1,         /* 554 */
   "Nome, AK",                   64.30,  -165.25, -10,    /* 645 */
   "Nordhausen", 51.30,    10.47,  1,  /* 1131 */
   "Norfolk, Virginia",          36.51,   -76.17, -5,     /* 927 */
   "North Bay",                  46.19,   -79.28, -5,     /* 691 */
   "Norwich",          52.38,   1.18,  0,         /* 498 */
   "Nottingham",       52.58,  -1.10,  0,         /* 499 */
   "Nouakchott",                 18.05,   -15.35,  0,     /* 792 */
   "Noumea, New Caledonia",     -22.07,  166.30,  11,     /* 990 */
   "Novi Sad",        45.15, 19.50,     1,        /* 358 */
   "Nowgorod",         58.35,   31.14,  3,        /* 613 */
   "Oakland, CA",                37.48,  -122.16, -8,     /* 661 */
   "Oberkirch",                  48.31,    8.05,     1,   /* 1044 */
   "Obernai, France",            48.28,    7.29,     1,   /* 1077 */
   "Odense, Denmark",            55.26,  -10.18,   1,     /* 992 */
   "Oderberg",                   52.52,   14.02,     1,   /* 1049 */
   "Odessa",           46.28, 30.44,  3,          /* 162 */
   "Offenbach",        50.08, 8.47,   1,          /*  80 */
   "Offenburg",                  48.28,    7.57,     1,   /* 1045 */
   "Ogden, Utah",                41.14,  -111.58, -7,     /* 922 */
   "Oklahoma City",              35.28,   -97.31, -6,     /* 873 */
   "Oldenburg in Holstein",54.17, 10.52, 1,          /*  82 */
   "Oldenburg",        53.08, 8.13,   1,          /*  81 */
   "Olomouc, cz",         49.36, 17.16,     1,        /* 345 */
   "Omaha, Nebraska",  41.16,  -95.57,  -6,       /* 235 */
   "Omsk",             54.57,   73.21,  6,        /* 614 */
   "Oradea",          47.03, 21.57,     2,        /* 332 */
   "Oranienburg",                52.45,   13.14,     1,   /* 1050 */
   "Orlando, FL",      28.32,  -81.23,  -5,       /* 236 */
   "Orléans, Fr.",     47.55,   1.54,  1,         /* 555 */
   "Osaka, Japan",               34.45,  135.28,   9,     /* 993 */
   "Oshawa",                     43.54,   -78.52, -5,     /* 692 */
   "Oslo",            59.55, 10.45,     1,        /* 314 */
   "Osnabrück",        52.16, 8.02,   1,          /*  83 */
   "Ostende",          51.13, 2.55,   1,          /* 136 */
   "Ostrava, cz",         49.50, 18.17,     1,        /* 346 */
   "Ottawa",         45.25, -75.72,    -5,        /* 398 */
   "Ouagadougou",                12.12,    -1.24,  0,     /* 654 */
   "Oxford",           51.46,  -1.15,  0,         /* 500 */
   "Paderborn",        51.43, 8.45,   1,          /*  84 */
   "Padova",           45.25, 11.53,    1,        /* 271 */
   "Paducah, KY",                37.05,   -88.36, -5,     /* 772 */
   "Panama, Panama",    8.58,  -79.31, -5,        /* 591 */
   "Paramaribo, Surinam",         5.46,  -55.15,  -3,     /* 994 */
   "Pardubice, cz",         50.3,  15.46,  1,     /* 994 */
   "Parchim",          53.25,  11.51,  1,         /* 470 */
   "Paris",            48.52, 2.20,   1,          /* 170 */
   "Paříž",            48.52, 2.20,   1,          /* 170 */
   "Parma",            44.48, 10.20,    1,        /* 272 */
   "Pasadena, CA",               34.09,  -118.09, -8,     /* 662 */
   "Paterson, NJ",               40.55,   -74.10, -5,     /* 831 */
   "Pau, France",                43.18,   -0.22,     1,   /* 1078 */
   "Pazardjik",       42.12, 24.20,     2,        /* 318 */
   "Peking (Beijing)",39.55, 116.25,    8,        /* 376 */
   "Pensacola, FL",              30.25,   -87.13, -5,     /* 725 */
   "Peoria, IL",       40.42,  -89.36, -6,        /* 592 */
   "Perigueux, France",          45.11,    0.43,     1,   /* 1079 */
   "Perleberg",        53.04, 11.51,  1,          /*  85 */
   "Perm",             57.55,   56.03,  5,        /* 616 */
   "Perpignan",        42.41,   2.53,  1,         /* 556 */
   "Perth",                     -31.50,   116.10,  8,     /* 651 */
   "Perugia",          43.08, 12.22,    1,        /* 273 */
   "Peterborough",               44.19,   -78.19, -5,     /* 694 */
   "Pforzheim",        48.54, 8.42,   1,          /*  86 */
   "Phalsbourg, France",         48.46,    7.16,     1,   /* 1080 */
   "Philadelphia, Pennsylvania",39.57,  -75.07,  -5, /* 237 */
   "Phnom Penh, Kambodscha",     11.32,  104.47,   7,     /* 995*/
   "Phoenix, Arizona", 33.27, -112.05,  -7,       /* 238 */
   "Piatra Neamt",    46.56, 26.22,     2,        /* 333 */
   "Pierre, South Dakota",       44.22,  -100.21, -6,     /* 894 */
   "Piestany",        48.36, 17.50,     1,        /* 354 */
   "Pilsen",          49.45, 13.23,     1,        /* 347 */
   "Pisa",             43.43, 10.23,    1,        /* 274 */
   "Pittsburgh, Pennsylvania",40.26,  -80.00,  -5,   /* 239 */
   "Pittsfield, MA",             42.27,   -73.15, -5,     /* 789 */
   "Pjongjang (P´yongyang)",39.01, 125.45, 9,        /* 387 */
   "Plano, TX",        33.02,  -96.42, -6,        /* 615 */
   "Plovdiv",         42.09, 24.45,     2,        /* 319 */
   "Plymouth",         50.23,  -4.10,  0,         /* 501 */
   "Plzeň",          49.44, 13.22,     1,        /* 347 */
   "Pocatello, Idaho",           42.52,  -112.27, -7,     /* 743 */
   "Poitiers, France",           46.35,    0.20,     1,   /* 1081 */
   "Port Arthur, TX",            29.53,   -93.56, -6,     /* 913 */
   "Port Au Prince, Haiti",      18.34,  -72.21,  -5,     /* 996 */
   "Port Louis, Mauritius",     -20.09,   57.30,   4,     /* 997 */
   "Port Moresby, Papua-Neuguinea",-9.26,  147.00,  10,     /* 998 */
   "Port Said, Egypt",           30.54,   32.05,   2,     /* 999 */
   "Portland (Maine, US)", 43.39, -70.17, -5,     /* 240 */
   "Portland (Oreg, US)", 45.33, -112.36, -8,     /* 241 */
   "Porto Novo",                  6.18,     2.28,  1,     /* 652 */
   "Porto",            41.11, -8.36,    0,        /* 294 */
   "Portsmouth",       50.48,  -1.05,  0,         /* 502 */
   "Portsmouth, New Hampshire",  43.04,   -70.45, -5,     /* 827 */
   "Portsmouth, Virginia",       36.50,   -76.17, -5,     /* 928 */
   "Potsdam",          52.24, 13.04,  1,          /*  87 */
   "Praha",            50.05, 14.25,     1,        /* 348 */
   "Praha, Staronová synagoga",            50.09, 14.41,     1,        /* 348 */
   "Prdel, cz",            49.18, 13.12,     1, 
   "Presov",          49.00, 21.15,     1,        /* 355 */
   "Pretoria, South Africa",    -25.38,   28.20,   2,     /* 1000 */
   "Prince Rupert, British Columbia",54.19,-130.19, -8,     /* 672 */
   "Pritzwalk",        53.09, 12.10,  1,          /*  88 */
   "Providence, RI",   41.50,  -71.25,  -5,       /* 242 */
   "Provo, Utah",                40.14,  -111.39, -7,     /* 923 */
   "Pueblo",                     38.16,  -104.37, -7,     /* 715 */
   "Puta, Aserbaidschan",        40.18,   49.41,   4,     /* 1032 */ 
   "Quebec",         46.49, -71.14,    -5,        /* 399 */
   "Quito",                      -0.17,   -78.32, -5,     /* 720 */
   "Röbel",   53.22,    12.36, 1,   /* 1130 */
   "Raananna, Israel", 32.11,   35.52,  2,        /* 626 */
   "Rabat",                      34.01,    -6.31,  1,     /* 819 */
   "Rachki, Ukraine",            49.30,   29.54,     2,   /* 1118 */
   "Racine (Wis., US)",          42.44,   -87.47, -6,     /* 944 */
   "Radauti",         47.51, 25.55,     2,        /* 334 */
   "Raleigh, NC",      35.47,  -78.39, -5,        /* 593 */
   "Ramat Gan, Israel",32.05,   34.49,  2,        /* 627 */
   "Ramsgate",         51.20,   1.25,  0,         /* 503 */
   "Rangun (GMT+6)",    16.47, 96.10,   6,        /* 410 */
   "Rangun (GMT+7)",    16.47, 96.10,   7,        /* 411 */
   "Rapid City, South Dakota",   44.05,  -103.13, -6,     /* 895 */
   "Rathenow",         52.36, 12.20,  1,          /*  89 */
   "Reading",          51.28,  -0.59,  0,         /* 504 */
   "Reading, Pennsylvania",      40.20,   -75.56, -5,     /* 883 */
   "Recklinghausen",   51.36, 7.13,   1,          /*  90 */
   "Redmond, WA",      47.24, -122.04, -8,        /* 594 */
   "Regensburg",       49.01, 12.06,  1,          /*  91 */
   "Regina",                     50.27,  -104.37, -6,     /* 710 */
   "Rehovot",          31.54,  34.49,  2,         /* 474 */
   "Reims",            49.15,   4.02,  1,         /* 557 */
   "Reims, France",              49.15,    4.02,     1,   /* 1082 */
   "Rennes, France",             48.05,   -1.41,     1,   /* 1083 */
   "Reno, NV",                   39.31,  -119.49, -8,     /* 824 */
   "Reykjavik",                  64.09,   -21.39,  0,     /* 741 */
   "Rhodos",           36.10, 28.00,    2,        /* 297 */
   "Richmond, Virginia",         37.32,   -77.26, -5,     /* 929 */
   "Riga",             56.57,  24.06,  2,         /* 478 */
   "Rijeka",          45.20, 14.27,     1,        /* 361 */
   "Rinteln",          52.11, 9.04,   1,          /*  92 */
   "Rio de Janeiro",   -22.54, -43.15, -3,        /* 412 */
   "Roanne, France",             46.02,    4.04,     1,   /* 1084 */
   "Roanooke, Virginia",         37.16,   -79.57, -5,     /* 930 */
   "Rochester",        51.24,   0.30,  0,         /* 505 */
   "Rochester, Minnesota",       44.01,   -92.28, -6,     /* 802 */
   "Rochester, NY",              43.10,   -77.36, -5,     /* 841 */
   "Rockford, IL",               42.16,   -89.06, -6,     /* 749 */
   "Rom",              41.54, 12.29,    1,        /* 275 */
   "Rostock",          54.05, 12.07,  1,          /*  93 */
   "Rothenburg an der Oder",52.01, 15.25, 1,         /* 570 */
   "Rothenburg ob der Tauber",49.23,10.10,1,         /* 568 */
   "Rothenburg",       51.20,   14.58, 1,         /* 569 */
   "Rotterdam",        51.55, 4.28,   1,          /* 148 */
   "Rouen",            49.26,   1.05,  1,         /* 558 */
   "Ruse",            43.50, 25.57,     2,        /* 320 */
   "Rust, Germany",              48.16,    7.43,     1,   /* 1046 */
   "Saarbrücken",      49.14, 6.59,   1,          /*  94 */
   "Sacramento, CA",   38.35, -121.30, -8,        /* 595 */
   "Safad, Israel",    32.58,   35.30,  2,        /* 628 */
   "Saginaw, MI",                43.26,   -83.56, -5,     /* 800 */
   "Saint-Avold, France",        49.06,    6.42,     1,   /* 1085 */
   "Saint-Die, France",          48.17,    6.57,     1,   /* 1086 */
   "Saint-Etienne, France",      45.26,    4.24,     1,   /* 1087 */
   "Saint-Fons, France",         45.42,    4.52,     1,   /* 1088 */
   "Saint-Laurent-du-Var, France (1)",45.23,5.44,    1,   /* 1067 */
   "Saint-Laurent-du-Var, France (2)",43.40,7.11,    1,   /* 1089 */
   "Saint-Louis, Fr.", 47.35,   7.34,  1,         /* 559 */
   "Saint-Quentin, France",      49.51,    3.17,     1,   /* 1090 */
   "Saint Anne's",     53.45,  -3.02,  0,         /* 506 */
   "Salem (Oreg, US)",           44.56,  -123.02, -8,     /* 876 */
   "Salina (Kans., US)",         38.51,   -97.37, -6,     /* 766 */
   "Saloniki",         40.39, 23.01,    2,        /* 298 */
   "Salt Lake City, Utah",40.46, -111.53,  -7,       /* 243 */
   "Salzburg",         47.48, 13.02,  1,          /* 126 */
   "Salzgitter",       52.10, 10.25,  1,          /*  95 */
   "San Angelo, TX",             31.28,  -100.26, -6,     /* 914 */
   "San Antonio, TX",  29.28,  -98.31,  -6,       /* 244 */
   "San Bernardino, CA",         34.07,  -117.28, -8,     /* 663 */
   "San Diego",        32.43, -117.09,  -8,       /* 245 */
   "San Francisco",    37.48, -122.24,  -8,       /* 246 */
   "San Jose, CA",               37.20,  -121.53, -8,     /* 664 */
   "San Juan (P.R.)",  18.28, -66.07, -4,         /* 416 */
   "San Salvador, El Salvador",  13.59,  -89.11,  -6,     /* 1001 */
   "Sana, Jemen",      15.11,   44.01,  3,        /* 617 */
   "Sankt Gallen",     47.25, 9.23,   1,          /* 118 */
   "Santa Barbara, CA",          34.25,  -119.42, -8,     /* 665 */
   "Santa Cruz, CA",             36.58,  -122.01, -8,     /* 666 */
   "Santa Fe (N.Mex., US)", 35.42, -106.57, -7,   /* 247 */
   "Santa Fe, NM",               35.41,  -105.56, -7,     /* 835 */
   "Santiago de Chile", -33.27, -70.40, -4,       /* 407 */
   "Santo Domingo, Dominican Republic",18.30,-69.56,-4,     /* 1002 */
   "Sao Paulo",       -23.32, -46.37,   -3,       /* 371 */
   "Sarajevo",        43.52, 18.25,     1,        /* 365 */
   "Sarasota, FL",               27.20,   -82.33, -5,     /* 727 */
   "Sarrebourg, France",         48.44,    7.03,     1,   /* 1091 */
   "Sarreguemines, France",      49.06,    7.03,     1,   /* 1092 */
   "Saskatoon",                  52.08,  -106.40, -6,     /* 711 */
   "Satu Mare",       47.48, 22.53,     2,        /* 335 */
   "Sault St Marie",             46.30,   -84.20, -5,     /* 696 */
   "Savannah, Georgia",          32.05,   -81.06, -5,     /* 735 */
   "Saverne, France",            48.44,    7.22,     1,   /* 1093 */
   "Scarsdale, NY",    40.59,  -73.49, -5,        /* 629 */
   "Schenectady, NY",            42.49,   -73.56, -5,     /* 842 */
   "Schwedt/Oder",               53.03,   14.17,     1,   /* 1051 */
   "Schwerin",         53.38, 11.25,  1,          /*  96 */
   "Scranton, Pennsylvania",     41.25,   -75.40, -5,     /* 884 */
   "Seattle, WA",      47.36, -122.20,  -8,       /* 248 */
   "Sedan, France",              49.42,    4.57,     1,   /* 1094 */
   "Selestat, France",           48.16,    7.27,     1,   /* 1095 */
   "Sens",             48.12,   3.17,  1,         /* 560 */
   "Seoul (Soul)",    37.33, 126.58,    9,        /* 388 */
   "Sevilla",          37.23, -5.59,    1,        /* 289 */
   "Shanghai",        31.14, 121.28,    8,        /* 377 */
   "Sheboygan (Wis., US)",       43.45,   -87.43, -6,     /* 945 */
   "Shechem, Israel",  32.13,   35.15,  2,        /* 630 */
   "Sheffield",        53.23, -1.30,  0,          /* 181 */
   "Shenyang",        41.48, 123.27,    8,        /* 378 */
   "Sherbrooke",                 45.24,   -71.51, -5,     /* 705 */
   "Sheridan, Wyoming",          44.48,  -106.57, -7,     /* 948 */
   "Shkoder, Albania", 42.05,   19.30,  1,        /* 600 */
   "Shreveport, Louisiana",      32.31,   -93.45, -6,     /* 777 */
   "Siena",            43.19, 11.21,    1,        /* 276 */
   "Sighetul Marmatiei", 47.56, 23.54,     2,        /* 336 */
   "Silver Spring",    39.02,  -77.03,  -5,       /* 249 */
   "Simferopol, Ukraine",        44.57,   34.06,     2,   /* 1119 */
   "Singapur",        11.22, 103.48,    8,        /* 389 */
   "Sioux City, IA",             42.30,   -96.25, -6,     /* 763 */
   "Sioux Falls, South Dakota",  43.33,   -96.44, -6,     /* 896 */
   "Siyäzän, Aserbaidschan",     41.04,   49.06,   4,     /* 1034 */
   "Skokie, IL",       42.02,  -87.46, -6,        /* 618 */
   "Skopje",          41.59, 21.26,     1,        /* 364 */
   "Slavuta, Ukraine",           50.18,   26.52,     2,   /* 1120 */
   "Sobernheim",       49.47, 7.38,   1,          /*  97 */
   "Sofia",           42.41, 23.19,     2,        /* 321 */
   "Solihull",         52.25,  -1.45,  0,         /* 507 */
   "Somerville, MA",             42.23,   -71.06, -5,     /* 790 */
   "Sopron",          47.41, 16.36,     1,        /* 341 */
   "South Bend, Indiana",        41.41,   -86.15, -6,     /* 757 */
   "Southend-on-SEA",  51.33,   0.43,  0,         /* 508 */
   "Southport",        53.39,  -3.01,  0,         /* 509 */
   "Spartanburg, SC",            34.57,   -81.56, -5,     /* 893 */
   "Spiazzo",          46.07, 10.40,    1,        /* 277 */
   "Split",           43.31, 16.27,     1,        /* 362 */
   "Spokane, WA",                47.40,  -117.26, -8,     /* 932 */
   "Springfield (Mass., US)",42.07,  -72.36,  -5,    /* 250 */
   "Springfield, IL",            39.48,   -89.39, -6,     /* 750 */
   "Springfield, Missouri",      37.13,   -93.18, -6,     /* 814 */
   "Springfield, OH",            39.57,   -83.48, -5,     /* 867 */
   "St Catherines",              43.10,   -79.15, -5,     /* 695 */
   "St John's",                  47.34,   -52.43, -4,     /* 679 */
   "St John",                    45.16,   -66.04, -4,     /* 678 */
   "St. Cloud, Minnesota",       45.34,   -94.10, -6,     /* 803 */
   "St. Joseph, Missouri",       39.46,   -94.51, -6,     /* 812 */
   "St. Louis",        38.38,  -90.11,  -6,       /* 252 */
   "St. Louis, Missouri",        38.38,   -90.12, -6,     /* 813 */
   "St. Paul, Minnesota",        44.57,   -93.06, -6,     /* 804 */
   "St. Petersburg",   59.55, 30.15,  3,          /* 163 */
   "St. Petersburg, FL",         27.47,   -82.38, -5,     /* 726 */
   "Stamford, CA",     41.03,  -73.33,  -5,       /* 251 */
   "Stendal",          52.36, 11.51,  1,          /*  98 */
   "Stockholm",       59.20, 18.03,     1,        /* 313 */
   "Stockton, CA",               37.58,  -121.17, -8,     /* 667 */
   "Strasbourg",       48.35,   7.45,  1,         /* 473 */
   "Straubing",        48.53, 12.34,  1,          /*  99 */
   "Strausberg",       52.35, 13.53,  1,          /* 100 */
   "Stuebenville, OH",           40.22,   -80.37, -5,     /* 868 */
   "Stuttgart",        48.46, 9.11,   1,          /* 101 */
   "Subotica",        46.06, 19.39,     1,        /* 359 */
   "Suceava",         47.39, 26.19,     2,        /* 337 */
   "Sudbury",                    46.29,   -80.59, -5,     /* 697 */
   "Suez, Egypt",                29.58,   32.33,   2,     /* 1003 */
   "Suhl",             50.37,  10.41,  1,         /* 471 */
   "Sumqayit, Aserbaidschan",    40.36,   49.45,   4,     /* 1033 */  
   "Sunderland",       54.45,  -1.23,  0,         /* 510 */
   "Superior (Wis., US)",        46.43,   -92.06, -6,     /* 946 */
   "Sydney",         -33.52, 151.13,   10,        /* 395 */
   "Sydney, Canada",             46.08,   -60.12, -4,     /* 681 */
   "Syracuse, NY",               43.03,   -76.09, -5,     /* 843 */
   "Szeged, Hungary",            46.19,   20.05,   1,     /* 1004 */
   "Tübingen",         48.31, 9.02,   1,          /* 103 */
   "Tacoma, WA",                 47.15,  -122.26, -8,     /* 933 */
   "Tahiti, Polynesia",         -18.18, -149.26, -10,     /* 1005 */
   "Taipei",            25.03, 121.30,  8,        /* 409 */
   "Tallahassee, FL",            30.27,   -84.27, -5,     /* 728 */
   "Tallinn",          59.25,  24.45,  2,         /* 479 */
   "Tampa, FL",        27.57,  -82.27,  -5,       /* 253 */
   "Taraclia, Moldova",          45.54,   28.41,   2,     /* 1024 */
   "Tarbes, France",             43.14,    0.05,     1,   /* 1096 */
   "Tarnów",           52.47, 14.58,  1,          /* 155 */
   "Taschkent",        41.20, 69.18,  6,          /* 164 */
   "Tblisi",           41.43, 44.49,  3,          /* 165 */
   "Teaneck, NJ",      40.53,  -74.01, -5,        /* 631 */
   "Tegucigalpa, Honduras",      14.17,  -87.24,  -6,     /* 1006 */
   "Teheran (GMT+3)", 35.40, 51.26,     3,        /* 367 */
   "Teheran (GMT+4)", 35.40, 51.26,     4,        /* 368 */
   "Tel Aviv",         32.04, 34.46,  2,          /* 190 */
   "Tenerife, Spain",  28.02,   16.34,  1,        /* 596 */
   "Teplice",         50.39, 13.48,     1,        /* 349 */
   "Terre Houte, Indiana",       39.28,   -87.24, -6,     /* 758 */
   "Teverya, Israel",  32.47,   35.32,  2,        /* 632 */
   "Texarkana, TX",              33.26,   -94.03, -6,     /* 915 */
   "Thessaloniki, Greece",       40.38,   22.58,   2,     /* 1030 */
   "Thessalonikia, Greece",      40.39,   23.01,   2,     /* 1007 */
   "Thimbu, Bhutan",             27.28,   89.38,   6,     /* 1008 */
   "Thionville, France",         49.22,    6.10,     1,   /* 1097 */
   "Thunder Bay",                48.23,   -89.15, -5,     /* 698 */
   "Tiberias, Israel",           32.47,   35.30,   2,     /* 1010 */
   "Tijuana, Mexico",            32.30, -117.02,  -6,     /* 1011 */
   "Tilburg",          51.34, 5.05,   1,          /* 149 */
   "Timisoara",       45.45, 21.13,     2,        /* 338 */
   "Tinton Falls, NJ",           40.17,   -74.06,    -5,  /* 1123 */
   "Tirana, Albania",            41.21,   19.49,   1,     /* 1009 */
   "Tirana, Albania",  41.20,   19.50,  1,        /* 601 */
   "Tirgu Mures",     46.33, 24.33,     2,        /* 339 */
   "Tokyo",           35.42, 139.46,    9,        /* 369 */
   "Toledo, OH",                 41.39,   -83.33, -5,     /* 869 */
   "Topeka (KS, US)",  39.03,  -95.41,  -6,       /* 254 */
   "Toronto",        43.39, -79.23,    -5,        /* 400 */
   "Torremolinos",     36.37, -4.30,    1,        /* 290 */
   "Toul, France",               48.41,    5.54,     1,   /* 1098 */
   "Toulon",           43.07,   5.56,  1,         /* 561 */
   "Toulon, France",             43.07,    5.56,     1,   /* 1099 */
   "Toulouse",         43.36,   1.26,  1,         /* 562 */
   "Tours",            47.23,   0.41,  1,         /* 563 */
   "Towson, MD", 39.17,  -76.37,  -5,     /* 1018 */
   "Tralee",           52.16, -9.42,  0,          /* 184 */
   "Trenton, NJ",                40.13,   -74.48, -5,     /* 832 */
   "Trier",            49.45, 6.38,   1,          /* 102 */
   "Trieste",          45.40, 13.46,    1,        /* 278 */
   "Trikala",          39.34, 21.46,    2,        /* 299 */
   "Tripoli",                    32.50,    13.13,  1,     /* 775 */
   "Trnava",          48.23, 17.35,     1,        /* 356 */
   "Trois Riveres",              46.21,   -72.33, -5,     /* 706 */
   "Trondheim",       63.25, 10.25,     1,        /* 315 */
   "Troy, NY",                   42.44,   -73.41, -5,     /* 844 */
   "Troyes",           48.18,   4.05,  1,         /* 564 */
   "Tucson",           32.13, -110.58,  -7,       /* 255 */
   "Tulsa, Oklahoma",            36.09,   -96.00, -6,     /* 874 */
   "Tunis",                      36.30,    10.08,  1,     /* 919 */
   "Turin",            45.04, 7.40,     1,        /* 279 */
   "Turku",           60.27, 22.17,     2,        /* 317 */
   "Ulan Bator, Mongolia",       47.27,  106.24,   8,     /* 1012 */
   "Urbana, IL",                 40.07,   -88.12, -6,     /* 751 */
   "Ústí nad Labem",  50.40, 14.02,     1,        /* 350 */
   "Utica, NY",                  43.06,   -75.14, -5,     /* 845 */
   "Utrecht",          52.05, 5.08,   1,          /* 150 */
   "Vaduz, Liechtenstein",       47.08,    9.32,   1,     /* 1013 */
   "Valence, France",            44.56,    4.54,     1,   /* 1100 */
   "Valencia",         39.28, -0.22,    1,        /* 291 */
   "Valenciennes, France",       50.21,    3.32,     1,   /* 1101 */
   "Vancouver",      49.16, -123.07,   -8,        /* 401 */
   "Venedig",          45.27, 12.21,    1,        /* 280 */
   "Venissieux, France",         54.41,    4.53,     1,   /* 1102 */
   "Verdun, France",             49.10,    5.23,     1,   /* 1103 */
   "Verl",  51.53,   8.31,   1,   /* 1129 */
   "Verona",           45.27, 11.00,    1,        /* 281 */
   "Versailles, Fr.",  48.48,   2.08,  1,         /* 565 */
   "Vevey",            46.28, 6.51,   1,          /* 119 */
   "Vichy, France",              46.08,    3.26,     1,   /* 1104 */
   "Victoria, British Columbia",   48.26,  -123.22, -8,     /* 673 */
   "Victoria, Hongkong",         22.10,   114.18,  8,     /* 740 */
   "Vientiane, Laos",            17.53,  102.38,   7,     /* 1014 */
   "Vilnius",          54.41,  25.19,  2,         /* 480 */
   "Vista Alegre, Spain (37,54 N, 4,09 W)", 37.54, -4.09, 1,
   "Vista Alegre, Spain (38,18 N, 3,04 W)", 38.18, -3.04, 1,
   "Vittel",           48.12,   5.57,  1,         /* 566 */
   "Volos",            39.21, 22.56,    2,        /* 300 */
   "W. Palm Beach, FL",          26.43,   -80.03, -5,     /* 729 */
   "Wörlitz",          51.50, 12.25,  1,          /* 110 */
   "Würzburg",         49.48, 9.56,   1,          /* 112 */
   "Waco, TX",                   31.33,   -97.08, -6,     /* 916 */
   "Waldkirch",                  48.05,    7.57,     1,   /* 1047 */
   "Walla Walla, WA",            46.04,  -118.20, -8,     /* 934 */
   "Warendorf",                  51.57,     7.59,    1,   /* 1124 */
   "Warschau",         52.15, 21.00,  1,          /* 156 */
   "Washington, DC",   38.54,  -77.01,  -5,       /* 256 */
   "Wasselonne",       48.38,   7.27,  1,         /* 567 */
   "Waterloo, IA",               42.30,   -92.20, -6,     /* 764 */
   "Watford",          51.40,  -0.25,  0,         /* 511 */
   "Weiden in der Oberpfalz",49.41,12.10,1,          /* 104 */
   "Wellington, New Zealand",   -41.18,  174.59,  12,     /* 1015 */
   "Wheeling, West Virginia",    40.04,   -80.43, -5,     /* 939 */
   "White Plains, NY",           41.02,   -73.46, -5,     /* 846 */
   "Whitehorse",                 60.43,  -135.03, -8,     /* 708 */
   "Wichita (Kans., US)",        37.42,   -97.20, -6,     /* 768 */
   "Wichita, TX",      37.41,  -97.20,  -6,       /* 257 */
   "Wien",             48.13, 16.20,  1,          /* 127 */
   "Vídeň",             48.13, 16.20,  1,          /* 127 */
   "Wiesbaden",        50.05, 8.14,   1,          /* 105 */
   "WilkesEBarre, Pennsylvania", 41.15,   -75.53, -5,     /* 885 */
   "Wilmington, Delaware",       39.45,   -75.33, -5,     /* 719 */
   "Wilmington, NC",             34.14,   -77.57, -5,     /* 856 */
   "Windhoek",                  -22.20,    17.04,  2,     /* 821 */
   "Windsor",                    42.19,   -83.02, -5,     /* 700 */
   "Winnipeg",       49.53, -97.09,    -6,        /* 402 */
   "Winston Salem, NC",          36.06,   -80.15, -5,     /* 857 */
   "Winterthur",       47.30, 8.43,   1,          /* 120 */
   "Wismar",           53.53, 11.28,  1,          /* 106 */
   "Wittenberg",       51.52, 12.39,  1,          /* 107 */
   "Wittenberge",      53.00, 11.44,  1,          /* 108 */
   "Wittstock",        53.10, 12.29,  1,          /* 109 */
   "Woodbourne",       41.46,  -74.35, -5,        /* 633 */
   "Worcester, MA",              42.16,   -71.48, -5,     /* 791 */
   "Worms",            49.38,   8.22,  1,         /* 472 */
   "Woronesch, Russia",51.42,   39.15,  3,        /* 619 */
   "Wroczlaw (Breslau)", 51.06, 17.00,  1,          /* 157 */
   "Wuppertal",        51.16, 7.11,   1,          /* 111 */
   "Yakima, WA",                 46.36,  -120.31, -8,     /* 935 */
   "Yaounde",                     3.31,    11.19,  1,     /* 668 */
   "Yellowknife",                62.27,  -114.23, -7,     /* 680 */
   "Yellowstone Lake", 44.25, -110.22,  -7,       /* 258 */
   "Yerevan, Armenia",           39.56,   44.45,   4,     /* 1016 */
   "Yonkers, NY",                40.56,   -73.54, -5,     /* 847 */
   "York, Pennsylvania",         39.58,   -76.44, -5,     /* 886 */
   "Youngstown, OH",             41.06,   -80.39, -5,     /* 870 */
   "Yuma, Arizona",              32.43,  -114.37, -7,     /* 649 */
   "Zürich",           47.23, 8.32,   1,          /* 122 */
   "Zagreb",          45.48, 15.58,     1,        /* 363 */
   "Zanesville, OH",             39.56,   -82.31, -5,     /* 871 */
   "Zefat, Israel",              32.57,   35.30,   2,     /* 1017 */
   "Zhitomir, Ukraine",          50.15,   28.40,     2,   /* 1121 */
   "Žilina, sk",                     49.14,   18.46,     1,   /* 1037 */
   "Zlín, cz",            49.14, 17.40,     1, 
   "Zug",              47.10, 8.31,   1,          /* 121 */
   "Zwolle",           52.30, 6.05,   1);         /* 151 */
}
?>