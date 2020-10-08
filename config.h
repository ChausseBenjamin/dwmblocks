//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/    /*Command*/        /*Update Interval*/    /*Update Signal*/
    {"",        "dwmb-dotfiles",   0,                     7},
    {"",        "dwmb-date",       0,                     6},
 /* {"",        "dwmb-test",       0,                     5}, */
    {"",        "dwmb-layout",     0,                     4},
    {"",        "dwmb-news",       0,                     3},
    {"",        "dwmb-vpn",        0,                     2},
    {"",        "dwmb-bat",        0,                     1},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = "|";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
