#include<stdio.h>

int main(){

    int in, alas, i, j, k;

    scanf("%d", &in);
    alas = in*2 - 1;
    k=0;
    for(i=in; i > 0; i--){
        k++;
        for(j=1; j<=alas; j++){
            if(i==1){
                printf("*");
            }
            else{
                if(j==i || j==alas-i+1)
                    printf("*");
                else{
                    if(i==(in+1)/2 && j>i && j<alas-i+1)
                        printf("*");
                    else if(i<(in+1)/2){
                        if(j==i || j==alas-i+1 || j == in - i + 1 || j == in + i - 1)
                            printf("*");
                        else{
                            if(j == in+k){
                                printf("\n");
                                break;
                            }
                            else
                                printf(" ");
                        }
                    }
                    else{
                        if(j == in+k){
                            printf("\n");
                            break;
                        }
                        else
                            printf(" ");
                    }
                }
            }
        }
    }
    printf("\n");
    return 0;

}
