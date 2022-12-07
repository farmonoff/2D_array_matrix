#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    srand(time(0));

    int n, sum;
    printf("Ixtiyoriy son kiriting>>>"); scanf("%d", &n);
    int arr[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            arr[i][j] = 1 + rand() % 9;
            printf("%d ", arr[i][j]);
        }
        puts("");
    }
    puts("");

    for(int i = 0; i < n; i++){
        if(i <= n){
            sum = 0;
        } 
        for(int j = 0; j < n; j++){
            sum += arr[i][j];
        }
        printf("%d - qartorda %d\n", i + 1, sum);
    }

return 0;    
}