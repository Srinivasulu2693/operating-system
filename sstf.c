#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[100],i,n,seek_time=0,initial,count=0;
    printf("Enter the number of Requests\n");
    scanf("%d",&n);
    printf("Enter the Requests sequence\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter initial head position\n");
    scanf("%d",&initial);
    while(count!=n)
    {
        int min=1000,d,index;
        for(i=0;i<n;i++)
        {
           d=abs(a[i]-initial);
           if(min>d)
           {
               min=d;
               index=i;
           }

        }
        seek_time=+min;
        initial=a[index];
        a[index]=1000;
        count++;
    }

    printf("Total seek_time is %d",seek_time);
    return 0;
}
