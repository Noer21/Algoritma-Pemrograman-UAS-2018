#include<stdio.h>

int main(){

    int n, m, i, j, input;

    scanf("%d %d", &m, &n);

    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            scanf("%d", &input);
            printf("%d", input);
            if(j<m-2)
                printf(" ");
        }
        printf("\n");
    }

    return 0;

}
