/*
    (C) 1995-98 AROS - The Amiga Replacement OS
    $Id$

    Desc: ANSI C function strncpy()
    Lang: english
*/

/*****************************************************************************

    NAME */
#include <string.h>

	char * strncpy (

/*  SYNOPSIS */
	char	   * dest,
	const char * src,
	size_t	     n)

/*  FUNCTION
	Copy a string. Works like an assignment "dest=src;". At most
	n characters are copied.

    INPUTS
	dest - The string is copied into this variable. Make sure it is
		large enough.
	src - This is the new contents of dest.
	n - How many characters to copy at most. If the string src is
		smaller than that, only strlen(str)+1 bytes are copied.

    RESULT
	dest.

    NOTES
	No check is beeing made that dest is large enough for src.

    EXAMPLE

    BUGS

    SEE ALSO
	strncpy(), memcpy(), memmove()

    INTERNALS

    HISTORY
	29.07.1996 digulla created

******************************************************************************/
{
    char * ptr = dest;

    while (n-- && (*ptr = *src))
    {
	ptr ++;
	src ++;
    }

    while (n--)
	*ptr++ = '\0';

    return dest;
} /* strncpy */
