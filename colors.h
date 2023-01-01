
static  char norm_fg[] = "#b5e9d7";
static  char norm_bg[] = "#272222";
static  char norm_border[] = "#7ea396";
static  char sel_fg[] = "#b5e9d7";
static  char sel_bg[] = "#28769D";
static  char sel_border[] = "#b5e9d7";
static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
};

