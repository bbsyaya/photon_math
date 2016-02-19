#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;



class math_add {
    //int a[], size;
  public:
    int add_nos(int[],int);
};

int math_add::add_nos(int a[], int size)
{
int ret_sum,i;
ret_sum = i = 0;
for(i=0;i<size;i++)
{
ret_sum += a[i];
}

return ret_sum;

}

