#include<stdio.h>

int main() {

    int arr[3][4] = {};

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            printf("sonlar %d %d = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    puts("");

    for(int i = 0; i < 3; i++){
        if(i == 1){
            break;
        }
        for(int j = 0; j < 4; j++){
            printf("%d ", arr[i][j]);
        }
    }


return 0;    
}