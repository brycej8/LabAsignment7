#include <stdio.h>

void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int a[], int n){
    
    int i, j, counter = 0;

    for (i = 0; i < n - 1; i++){

        for (j = 0; j < n - i - 1; j++){

            if (a[j] > a[j + 1]){
                swap(&a[j], &a[j + 1]);
                counter++;
            }
        }
        printf("pass #%d: %d\n", i+1, counter);
        counter = 0;
    }
}

int main(){
    int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    bubbleSort(arr, 9);
    return 0;
}