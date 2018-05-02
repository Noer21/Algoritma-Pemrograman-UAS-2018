#include<stdio.h>

int main(){

int in, i, j;

scanf("%d", &in);
    for(i=1; i<=in; i++){
        for(j=1; j<=in*2; j++){
            if(j>i && j<in*2-i+1)
                printf(".");
            else
                printf("*");
        }
    printf("\n");
    }

    return 0;
}
