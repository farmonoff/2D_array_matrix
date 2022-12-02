#include<stdio.h>

int main() {

    int arr[4][4] = {};
    int sum = 0;

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("%d ", arr[i][j]);
            sum += arr[i][j];
        }
        printf("\n");
    }
    printf("summasi = %d\n", sum);

return 0;
}