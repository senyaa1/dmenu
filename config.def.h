/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */

static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */

static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */

/* Size of the window border */
static const unsigned int border_width = 5;

static const unsigned int alpha = 0xf0;
/* -fn option overrides fonts[0]; default X11 font or font set */

static char font[] = "monospace:size=10";
static const char *fonts[] = {
	font,
	"monospace:size=10",
};

static char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

static const char *symbol_1 = "<";
static const char *symbol_2 = ">";

static char normfgcolor[] = "#bbbbbb";
static char normbgcolor[] = "#222222";
static char selfgcolor[]  = "#eeeeee";
static char selbgcolor[]  = "#005577";

static char selfghighlight[]  = "#ffc978";
static char selbghighlight[]  = "#005577";
static char normfghighlight[]  = "#ffc978";
static char normbghighlight[]  = "#222222";

static char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { normfgcolor, normbgcolor },
	[SchemeSel]  = { selfgcolor,  selbgcolor  },
	[SchemeSelHighlight] = { selfghighlight, selbghighlight },
	[SchemeNormHighlight] = { normfghighlight, normbghighlight },
	[SchemeOut]  = { "#000000",   "#00ffff" },
};

static const unsigned int alphas[SchemeLast][2] = {
	[SchemeNorm] = { OPAQUE, alpha },
	[SchemeSel] = { OPAQUE, alpha },
	[SchemeOut] = { OPAQUE, alpha },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 0;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char startpipe[] = "#";
static const char worddelimiters[] = " ";

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
	{ "font",        STRING, &font },
	{ "normfgcolor", STRING, &normfgcolor },
	{ "normbgcolor", STRING, &normbgcolor },
	{ "selfgcolor",  STRING, &selfgcolor },
	{ "selbgcolor",  STRING, &selbgcolor },
	{ "selfghighlight",  STRING, &selfghighlight },
	{ "normfghighlight",  STRING, &normfghighlight },
	{ "selbghighlight",  STRING, &selbghighlight },
	{ "normbghighlight",  STRING, &normbghighlight },

	{ "prompt",      STRING, &prompt },
};
