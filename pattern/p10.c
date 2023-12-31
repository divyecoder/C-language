#include<stdio.h>

void main(){
    int count = 0;
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= i; j++){
            count = count + 1;
            printf("%d",count);
        }
        printf("\n");
    }
}