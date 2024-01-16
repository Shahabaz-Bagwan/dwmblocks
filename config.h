//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
  /*Icon*/  /*Command*/   /*Update Interval*/ /*Update Signal*/
  //{"", "cat /tmp/recordingicon 2>/dev/null",  0,  9},
  /* {"", "music",  0,  11}, */
  {"",  "memory", 10, 14},
  {"", "cpu",    10, 18}, 
  // {"", "moonphase",  18000,  17},
  // {"",  "forecast", 18000,  5},
  //{"",  "mailbox",  180,  12},
  //{"",  "nettraf",  1,  16},
  {"",  "volume", 0,  10},
  {"",  "microphone", 0,  12},
  {"",  "battery",  10, 3},
  {"",  "clock",  20, 1},
  //{"",  "internet", 5,  4},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// AUTOCMD BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
