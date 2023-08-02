//Modify this file to change what commands output to your statusbar, and recompile using the make command.
// Example file: https://github.com/LukeSmithxyz/dwmblocks/blob/master/config.h
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",	"sb-doppler",							0,		5},
	{"",	"sb-forecast",							18000,	6},
	{"",	"sb-battery",							60,		7},
	{"",	"sb-disk",								60,		15},
	{"",	"sb-volume",							0,		8},
	{"",	"sb-internet",							5,		9},
	{"",	"sb-pacpackages",						9000,	10},
	{"",	"sb-mailbox",							180,	11},
	{"",	"sb-nightlight",						0,  	12},
	{"",	"sb-clock",								60,		13},
	{"",	"sb-bookmarks",							0,		14},
};


//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = "  ";

// Sets delimiters around the full statusbar. NULL character ('\0') means no delimeter.
static char leftpad[]  = " ";
static char rightpad[] = " ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
