/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "array_sum.h"

data *
array_sum_1_svc(data *argp, struct svc_req *rqstp)
{
	static data  result;
	int i;
	/*
	 * insert server code here
	 */
	 printf("\n sizse = %d\n",argp->size);
	 result.size = argp->size;
	 result.array = (int*)(malloc(sizeof(int)*result.size));
	 result.array2 = (int*)(malloc(sizeof(int)*result.size));
	 for(i=0;i<argp->size;i++)
	 {
		result.array[i] = argp->array[i];
		result.array2[i] = argp->array2[i];
		printf("%d ",result.array[i]);
		printf("%d ",result.array2[i]);
	 }
	 printf("\n");
	return &result;
}