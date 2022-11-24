#include<stdio.h>
int main()
{
    int i,n,j,A[100],swap;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf ("Enter the elements of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
        
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;
        j++)
        {
            if(A[j]>A[j+1])
            {
                swap=A[j];
                A[j]=A[j+1];
                A[j+1]=swap;
            }
        }
    }
    printf("\nArray after swapping:");
    for(i=0;i<n;i++);
    printf("%d",A[i]);
}