#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int n; 

void fill_rand_nums(int arr[][n]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            arr[i][j] = 10 + rand() % 90;
        }
    }
}

void output(int arr[][n]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%3d ", arr[i][j]);
        }
        printf("\n");
    }
    puts("");
}

void compare(int arr1[][n], int arr2[][n], int arr3[][n]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr1[i][j] >= arr2[i][j]){
                arr3 [i][j] = arr1[i][j];
            } else {
                arr3 [i][j] = arr2[i][j];
            }
        }
    }
}


int main() {
    srand(time(0));

    printf("n = ");scanf("%d", &n);
    int arr1[n][n];
    int arr2[n][n];
    int arr3[n][n];

    fill_rand_nums(arr1);
    output(arr1);
    fill_rand_nums(arr2);
    output(arr2);
    compare(arr1, arr2, arr3);
    output(arr3);

return 0;    
}