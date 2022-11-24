#include<stdio.h>

void display(int arr[],int n){
    //TRAVERSAL
    for (int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

void indDeletion(int arr[], int size, int index){
    //DELETION
    for(int i=index;i<size;i++){
        arr[i]=arr[i+1];
    }
    
   
}

int main(){
    int arr[100] = {7, 8, 12, 27, 88};
    int size=5,element =45, index;
    printf("Enter the index of thr elemnt to be deleted:");
    scanf("%d",&index);
    display(arr, size);
    indDeletion(arr, size, index);
    size-=1;
    display(arr, size);
}