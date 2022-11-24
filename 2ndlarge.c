#include<stdlib.h>
#include<stdio.h>
void main()
{
    int i,n,max,smax;
    printf("Enter the number of elelments:");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the elements of array one by one:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max=INT_MIN;
    smax=INT_MIN;
    for (i=0;i<n;i++){
        if(max<arr[i]){
            smax=max;
            max=arr[i];
        }
        else if(smax<arr[i]&&arr[i]!=max){
            smax=arr[i];
        }
    }
    printf("Second largest number is:%d",smax);
}