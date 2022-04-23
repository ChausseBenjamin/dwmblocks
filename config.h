//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/    /*Command*/        /*Update Interval*/    /*Update Signal*/
    /* {"",        "dwmb-mail",       0,                     12}, */
    /* {"",        "dwmb-pacman",     0,                     9}, */
    /* {"",        "dwmb-dotfiles",   0,                     7}, */
 /* {"",        "dwmb-debarque",   0,                     17}, */
    /* {"",        "dwmb-todoist",    0,                     5}, */
    {"",        "dwmb-rss",        0,                     3},
    {"",        "dwmb-vpn",        0,                     2},
    {"",        "dwmb-layout",     0,                     4},
    {"",        "dwmb-battery",    0,                     1},
    {"",        "dwmb-date",       0,                     6},
    {"",        "dwmb-time",       0,                     8},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = "|";
static unsigned int delimLen = 5;
