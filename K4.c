#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    srand(time(0));

    int n;
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
        for(int j = 0; j < n; j++){
            printf("%d ", arr[j][i]);
        }
        puts("");
    }

return 0;    
}