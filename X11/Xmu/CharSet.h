/* @(#)58	1.3  com/XTOP/X11/Xmu/CharSet.h, gos, gos320 5/22/91 10:48:14 */
/*
 *   COMPONENT_NAME: XSAMPLE
 *
 *   FUNCTIONS: none
 *
 *   ORIGINS: 16,27,40,42
 *
 *
 *   (C) COPYRIGHT International Business Machines Corp. 1988,1991
 *   All Rights Reserved
 *   Licensed Materials - Property of IBM
 *   US Government Users Restricted Rights - Use, duplication or
 *   disclosure restricted by GSA ADP Schedule Contract with IBM Corp.
 */

/*
 * $XConsortium: CharSet.h,v 1.2 89/09/22 15:33:14 jim Exp $
 *
 * Copyright 1988 by the Massachusetts Institute of Technology
 *
 * Permission to use, copy, modify, and distribute this software and its
 * documentation for any purpose and without fee is hereby granted, provided 
 * that the above copyright notice appear in all copies and that both that 
 * copyright notice and this permission notice appear in supporting 
 * documentation, and that the name of M.I.T. not be used in advertising
 * or publicity pertaining to distribution of the software without specific, 
 * written prior permission. M.I.T. makes no representations about the 
 * suitability of this software for any purpose.  It is provided "as is"
 * without express or implied warranty.
 *
 * The X Window System is a Trademark of MIT.
 *
 * The interfaces described by this header file are for miscellaneous utilities
 * and are not part of the Xlib standard.
 */

#ifndef _XMU_CHARSET_H_
#define _XMU_CHARSET_H_

extern void XmuCopyISOLatin1Lowered();
extern void XmuCopyISOLatin1Uppered();
extern int XmuCompareISOLatin1();
#endif /* _XMU_CHARSET_H_ */
