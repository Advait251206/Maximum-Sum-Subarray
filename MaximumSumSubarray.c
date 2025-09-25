#include <stdio.h>
int main() 
{
    int n,constraint;
    printf("Enter size of array = ");
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++)
    {
        printf("Enter element %d = ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter constraint = ");
    scanf("%d",&constraint);
    if (n == 0) 
    {
        printf("\nNo subarray");
        return 0;
    }
    if (constraint==0)
    {
        printf("\nNo subarray possible");
        return 0;
    }
    int l=0,r=-1,sum=0,min=0,max=-1,start=0;
    for(int i=0;i<n;i++) 
    {
        sum+=a[i];
        while(sum>constraint&&start<=i) 
        {
            sum-=a[start++];
        }
        if(sum<=constraint&&sum>max) 
        {
            max=sum;
            l=start;
            r=i;
        }
    }
    if(r==-1 || max==0) 
    {
        printf("\nNo feasible subarray");
    } 
    else 
    {
        printf("\nThe Maximum Sum Subarray = ");
        for(int i=l;i<=r;i++) 
        {
            printf("%d ",a[i]);
        }
        printf("\nSum = %d",max);
    }
}