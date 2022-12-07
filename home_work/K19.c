#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int n;

void fill_rand_nums(int arr[][n]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            arr[i][j] = -9 + rand() % 21;
        }
    }
}

void output(int arr[][n]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%2d ", arr[i][j]);
        }
        printf("\n");
    }
    puts("");
}

void change(int arr[][n]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] > 0){
                printf("%2c ", '+');
            } else if(arr[i][j] < 0){
                printf("%2c ", '-');
            } else {
                printf("%2d ", 0);
            }
        }
        puts("");
    }
    puts("");
}

int main() {
    srand(time(0));

    printf("n = "); scanf("%d", &n);

    int arr[n][n];

    fill_rand_nums(arr);
    output(arr);
    change(arr);

return 0;    
}