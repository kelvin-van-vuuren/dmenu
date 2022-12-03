/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
static const unsigned int alpha = 0xe0;
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static char font[] = "monospace:size=10";
static const char *fonts[] = {
	font,
	"monospace:size=10"
};
static char *prompt       = NULL;      /* -p  option; prompt to the left of input field */

static char normfgcolor[] = "#bbbbbb";
static char normbgcolor[] = "#222222";
static char selfgcolor[]  = "#eeeeee";
static char selbgcolor[]  = "#005577";
static char highlightnormbgcolor[]  = "#222222";
static char highlightnormfgcolor[]  = "#ffc978";
static char highlightselbgcolor[]  = "#005577";
static char highlightselfgcolor[]  = "#ffc978";

static char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { normfgcolor, normbgcolor },
	[SchemeSel]  = { selfgcolor,  selbgcolor  },
	[SchemeNormHighlight] = { highlightnormfgcolor, highlightnormbgcolor },
	[SchemeSelHighlight] = { highlightselfgcolor, highlightselbgcolor },
	[SchemeOut]  = { "#000000",   "#00ffff" },
};

static const unsigned int alphas[SchemeLast][2] = {
	[SchemeNorm] = { OPAQUE, alpha },
	[SchemeSel] = { OPAQUE, alpha },
	[SchemeSelHighlight] = { OPAQUE, alpha },
	[SchemeNormHighlight] = { OPAQUE, alpha },
	[SchemeOut] = { OPAQUE, alpha },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 5;


/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
	{ "font",                 STRING, &font },
	{ "normfgcolor",          STRING, &normfgcolor },
	{ "normbgcolor",          STRING, &normbgcolor },
	{ "selfgcolor",           STRING, &selfgcolor },
	{ "selbgcolor",           STRING, &selbgcolor },
	{ "highlightnormfgcolor", STRING, &highlightnormfgcolor },
	{ "highlightnormbgcolor", STRING, &highlightnormbgcolor },
	{ "highlightselfgcolor",  STRING, &highlightselfgcolor },
	{ "highlightselbgcolor",  STRING, &highlightselbgcolor },
	{ "prompt",               STRING, &prompt },
};
