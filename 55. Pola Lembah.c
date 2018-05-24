#include <stdio.h>

int main(){
    int in, temp, i, j;
    scanf("%d", &in);
    temp = in;
    for(i=in; i>0; i--){
        for(j=i; j>0; j--)
            printf("*");
        printf("\n");
    }
    for(i=2; i<=in; i++){
        for(j=i; j>0; j--)
            printf("*");
        printf("\n");
    }

    return 0;

}
