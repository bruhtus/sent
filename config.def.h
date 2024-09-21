/* See LICENSE file for copyright and license details. */

static char *fontfallbacks[] = {
	"dejavu sans",
	"roboto",
	"ubuntu",
};
#define NUMFONTSCALES 42
#define FONTSZ(x) ((int)(10.0 * powf(1.1288, (x)))) /* x in [0, NUMFONTSCALES-1] */

static const char *colors[] = {
	"#b9b9b9", /* foreground color */
	"#121212", /* background color */
};

static const float linespacing = 1.4;

/* how much screen estate is to be used at max for the content */
static const float usablewidth = 0.75;
static const float usableheight = 0.75;

static Mousekey mshortcuts[] = {
	/* button         function        argument */
	{ Button1,        advance,        {.i = +1} },
	{ Button3,        advance,        {.i = -1} },
	{ Button4,        advance,        {.i = -1} },
	{ Button5,        advance,        {.i = +1} },
};

static Shortcut shortcuts[] = {
	/* keysym         function        argument */
	{ XK_Escape,      quit,           {0} },
	{ XK_q,           quit,           {0} },
	{ XK_Right,       advance,        {.i = +1} },
	{ XK_Left,        advance,        {.i = -1} },
	{ XK_Return,      advance,        {.i = +1} },
	{ XK_space,       advance,        {.i = +1} },
	{ XK_BackSpace,   advance,        {.i = -1} },
	{ XK_l,           advance,        {.i = +1} },
	{ XK_h,           advance,        {.i = -1} },
	{ XK_u,           advance,        {.i = +5} },
	{ XK_d,           advance,        {.i = -5} },
	{ XK_j,           advance,        {.i = +1} },
	{ XK_k,           advance,        {.i = -1} },
	{ XK_Down,        advance,        {.i = +1} },
	{ XK_Up,          advance,        {.i = -1} },
	{ XK_Next,        advance,        {.i = +1} },
	{ XK_Prior,       advance,        {.i = -1} },
	{ XK_n,           advance,        {.i = +1} },
	{ XK_p,           advance,        {.i = -1} },
	{ XK_r,           reload,         {0} },
	{ XK_x,           toggle_cursor,  {0} },
	{ XK_g,           pdf,            {0} },
	{ XK_a,           first_slide,    {0} },
	{ XK_e,           last_slide,     {0} },
};

static Filter filters[] = {
	{ "\\.ff$", "cat" },
	{ "\\.ff.bz2$", "bunzip2" },
	{ "\\.[a-z0-9]+$", "2ff" },
};

static const unsigned int slide_nb_margin = 10;
static const char *slide_nb_fnt[] = { "fixed:size=16", NULL };
