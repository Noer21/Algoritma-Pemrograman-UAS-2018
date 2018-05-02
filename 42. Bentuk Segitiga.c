#include<stdio.h>

int main(){

    int a, b, i;
    scanf("%d", &a);

    for(i=a; i>0; i--){
        for(b=i; b>0; b--)
            printf("*");
        printf("\n");
    }

    return 0;
}
