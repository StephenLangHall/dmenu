/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Ubuntu Mono:style=Regular:pixelsize=20:antialias=true:autohint=true"
	//"bitocra:pixelsize=12:antialias=true:autohint=true"
	//"Spleen:size=9"
};

// comment out if light mode
#define DARKMODE 1

static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
#ifdef DARKMODE
	[SchemeNorm] = { "#ebdbb2", "#282828" },
	[SchemeSel]  = { "#ebdbb2", "#504945" }, // "#ebdbb2", "#98971a" },
	[SchemeOut]  = { "#ebdbb2", "#8ec07c" },
#else
	[SchemeNorm] = { "#282828", "#fbf1c7" },
	[SchemeSel]  = { "#282828", "#98971a" }, // "#ebdbb2", "#98971a" },
	[SchemeOut]  = { "#282828", "#8ec07c" },
#endif
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 15;
/* -bw option; border width */
static unsigned int border_width = 3;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
