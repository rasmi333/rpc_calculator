/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "calculator.h"

bool_t
xdr_numbers (XDR *xdrs, numbers *objp)
{
	register int32_t *buf;

	 if (!xdr_float (xdrs, &objp->a))
		 return FALSE;
	 if (!xdr_float (xdrs, &objp->b))
		 return FALSE;
	 if (!xdr_char (xdrs, &objp->sign))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_numbers1 (XDR *xdrs, numbers1 *objp)
{
	register int32_t *buf;

	 if (!xdr_float (xdrs, &objp->aa))
		 return FALSE;
	 if (!xdr_float (xdrs, &objp->bb))
		 return FALSE;
	 if (!xdr_char (xdrs, &objp->sign))
		 return FALSE;
	return TRUE;
}
