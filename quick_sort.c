#include <stdio.h>

int data[10] = {4, 1, 2, 3, 9, 7, 8, 6, 10, 5};

void quick_sort(int * arr, int start, int end){
    
    if(start >= end)
        return;

    int pivot = start;
    int i = start+1; 
    int j = end;
    int tmp;

    while(i <= j){

        while( i <= end && arr[i] <= arr[pivot]){
            i++;
        }

        while( j> start && arr[j] >= arr[pivot]){
            j--;
        }
        
        if(i > j){
            tmp = arr[j];
            arr[j] = arr[pivot];
            arr[pivot] = tmp;
        }
        else{
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
        }
    }

    quick_sort(arr,start,j-1);
    quick_sort(arr,j+1, end);
}


int main(void){
    printf("Hello World!\n");

    for(int i=0;i<10;i++){
        printf("%d ", data[i]);
    }
    printf("\n");

    quick_sort(data, 0, 9);

    for(int i=0;i<10;i++){
        printf("%d ", data[i]);
    }
    printf("\n");

}