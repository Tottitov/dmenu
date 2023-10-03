/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom */
static int caret_width = 2;                 /* -cw option; set default caret width */
static int fuzzy = 1;                       /* -F  option; if 0, dmenu doesn't use fuzzy matching */
/* -fn option overrides fonts[0]; default X11 font or font set */
static char *fonts[] =
{
	"monospace:size=16"
	"NotoColorEmoji:pixelsize=16:antialias=true:autohint=true"
};
static char *prompt = NULL;      /* -p  option; prompt to the left of input field */


static char *colors[][2] = {
	/*               fg         bg       */
	[SchemeNorm] = { "#bbbbbb", "#222222" },
	[SchemeSel]  = { "#eeeeee", "#005577" },
	[SchemeOut]  = { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
/* -g option; if nonzero, dmenu uses a grid comprised of columns and lines */
static unsigned int columns    = 0;
static unsigned int lineheight = 24;         /* -h option; minimum height of a menu line     */
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";


