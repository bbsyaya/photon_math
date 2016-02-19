//This file is not used, for function definitions refer photon_math.h
#include "photon_math.h"


int photon_math::add_nos(int a[], int size)
{
int ret_sum,i;
ret_sum = i = 0;
for(i=0;i<size;i++)
{
ret_sum += a[i];
}
return ret_sum;
}
