
static  char norm_fg[] = "#f2dca8";
static  char norm_bg[] = "#010201";
static  char norm_border[] = "#a99a75";
static  char sel_fg[] = "#f2dca8";
static  char sel_bg[] = "#010201";
static  char sel_border[] = "#f2dca8";
static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
};
