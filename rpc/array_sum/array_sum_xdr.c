/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "array_sum.h"

bool_t
xdr_data (XDR *xdrs, data *objp)
{
	// if(objp->array == NULL)
	// {
	// 	printf("\nobjp is NULL\n");
	// 	printf("\nobjp is NULL\n");
	// 	xdrmem_create(xdrs,( caddr_t)objp,1000,XDR_DECODE);
	// }
	// else
	// {
	// 	printf("\nobjp is not NULL\n");
	// 	printf("\nobjp is not NULL\n");
	// 	xdrmem_create(xdrs,(caddr_t)objp,sizeof(data),XDR_ENCODE);
	// }
	// printf("\nTrue returned\n");
	// printf("\nTrue returned\n");
	// return TRUE;
	//return xdr_opaque(xdrs,(caddr_t)objp,sizeof(data)+sizeof(int)*objp->size);
	return xdr_array(
                 xdrs,
                 (char**)(&(objp->array)),
                 &(objp->size),
                 200,
                 sizeof(int),
                 (xdrproc_t)xdr_int) &&
								 xdr_array(
							                  xdrs,
							                  (char**)(&(objp->array2)),
							                  &(objp->size),
							                  200,
							                  sizeof(int),
							                  (xdrproc_t)xdr_int);
	// register int32_t *buf;
	//
	//  if (!xdr_pointer (xdrs, (char **)&objp->array, sizeof (int), (xdrproc_t) xdr_int))
	// 	 return FALSE;
	//  if (!xdr_int (xdrs, &objp->size))
	// 	 return FALSE;
	// return TRUE;
}