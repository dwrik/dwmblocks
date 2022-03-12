/*
 * TODO
 * cpu usage
 * bluetooth
 */

/* Modify this file to change what commands output to your statusbar, and recompile using the make command. */

static const Block blocks[] = {
/*Icon*/	    /*Command*/		  /*Update Interval*/	 /*Update Signal*/
	{ " ",      "sb-brightness",	      0,		             11 },
	{ "",       "sb-volume",	          0,		             10 },
	{ "",       "sb-battery",           60,                0  },
	{ "",       "sb-memory",	          30,		             0  },
	{ "",       "sb-temp",              5,                 0  },
	{ "",       "sb-wifi",              5,                 0  },
	{ "",       "sb-datetime",          60,		             0  },
};

/* Sets delimeter between status commands. NULL character ('\0') means no delimeter. */
static char delim[] = "  ";
static unsigned int delimLen = 5;
