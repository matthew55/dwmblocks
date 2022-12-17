//Modify this file to change what commands output to your statusbar, and recompile using the make command.
// Example file: https://github.com/LukeSmithxyz/dwmblocks/blob/master/config.h
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",	"sb-price xmr \"Monero\" 🔒",			9000,	1},
	{"",	"sb-price lbc \"LBRY Token\" 📚",		9000,	2},
	{"",	"sb-price eth Ethereum 🍸",				9000,	3},
	{"",	"sb-price btc Bitcoin 💰",				9000,	4},
	{"",	"sb-doppler",							0,		5},
	{"",	"sb-forecast",							18000,	6},
	{"",	"sb-nettraf",							1,		7},
	{"",	"sb-volume",							0,		8},
	{"",	"sb-internet",							5,		9},
	{"",	"sb-pacpackages",						9000,	10},
	{"",	"sb-nightlight",						0,  	11},
	{"",	"sb-clock",								60,		12},
};


//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = "  ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
