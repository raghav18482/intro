#include<stdio.h>
void main()
{
    int pc=0,nc=0;int arr[5];
    for(int i=0;i<5;i++)
    {
        scanf("%d",arr+i);
    }
    
findcount(arr,&pc,&nc);
printf(" postive = %d\n",pc);
printf("negative = %d", nc);
}

void findcount(int ar[],int *p,int *n)
{
for(int i=0;i<5;i++)
{
    if(ar[i]>0)
    (*p)++;
    else
    {
        (*n)++;
    }
    
}
}

