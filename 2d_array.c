#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int n, m;

void fill_rand_nums(int arr[n][m]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            arr[i][j] = 1 + rand() % 99;
        }
    }
}

void output(int arr[n][m]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%2d ", arr[i][j]);
        }
        puts("");
    }
    puts("");
}

void search(int arr[n][m], int x){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
           if(x / m == i && x % m == j){
            printf("%d\n", arr[i][j - 1]);
           }
        }
    }       
}
    
int main() {
    srand(time(0));

    printf("n = "); scanf("%d", &n);    
    printf("m = "); scanf("%d", &m);

    int arr[n][m];
    int x;

    fill_rand_nums(arr);
    output(arr);
    printf("x = "); scanf("%d", &x);
    search(arr, x);
   

return 0;    
}