#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int arr[7][4];

    for(int i = 0; i < 7; i++){
        for(int j = 0; j < 4; j++){
            arr[i][j] = 10 + rand() % 50;
            printf("%d ", arr[i][j]);
        }
        puts("");
    }
    puts("");

    for(int i = 0; i < 7; i++){
        for(int j = 0; j < 4; j++){
            if(j % 2 == 0){
                printf("%d ", arr[i][j]);
            }
        }
        puts("");
    }
    puts("");

return 0;    
}