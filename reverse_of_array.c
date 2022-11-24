#include<stdio.h>
void main()
{
    int i,n,j;
    printf("Enter the number of elelments:");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the elements of array one by one:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (i=0,j=n-1;i<j;i++,j--){
       arr[i]=arr[i]^arr[j];
       arr[j]=arr[i]^arr[j];
       arr[i]=arr[j]^arr[j];
    }
    printf("The reverse of array is:\n");
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}