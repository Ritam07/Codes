#include<stdio.h>
int main(){
    int r,c,i,j,(*parr)[2];
    printf("Enter number of rows and columns:");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    parr=arr;
    for(i=0;i<r;i++){
        for ( j = 0; j < c; j++)
        {
            printf("Array [%d] [%d]:",r,c);
            scanf("%d",&(parr+r)[c]);
        }
    }
    for(i=0;i<r;i++){
        for ( j = 0; j < c; j++)
        {
            printf("%d",&(parr+r)[c]);
        }
    }

}