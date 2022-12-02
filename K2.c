#include<stdio.h>

int main() {

    int arr[3][4] = {};

    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    puts("");

    for(int i = 0; i < 3; i++){
        if(i % 2){
        for(int j = 0; j < 4; j++){
                printf("%d ", arr[i][j]);
            }
        }
    }
    puts("");

return 0;    
}