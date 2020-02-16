#include<stdio.h>
void main()
{
    int arr[]={1,2,3,4,5,6,7,8,9} ;
    
    int *p=arr+1;
    int *q=arr+6;
    printf("%d\n", q-p);
    //edited by raghav

}
