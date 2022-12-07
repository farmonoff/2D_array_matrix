#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int n;

void fill_rand_nums(int arr[][n]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            arr[i][j] = -20 + rand() % 41;
        }
    }
}

void output(int arr[][n]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%3d ", arr[i][j]);
        }
        puts("");
    }
    puts("");
}

void fill_array(int arr[][n], int A[], int B[]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] < 0){
                A[i] = arr[i][j];
            } else if(arr[i][j] > 0){
                B[i] = arr[i][j];
            }
        }
    }
}

int main() {
    srand(time(0));

    printf("n = "); scanf("%d", &n);
    int arr[n][n];
    int A[n];
    int B[n];

    fill_rand_nums(arr);
    output(arr);
    fill_array(arr, A, B);
    printf("A = {%d,}\nB = {%d,}", A[n], B[n]);

return 0;    
}