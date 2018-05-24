#include<stdio.h>

int main(){

    int n, i, j;
    char a, b, c;
    scanf("%d\n%c%c%c", &n, &a, &b, &c);

    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++)
            if(i==n && j<i)
                printf("%c", b);
            else if(j==1)
                printf("%c", a);
            else if(j==i)
                printf("%c", c);
            else
                printf(" ");
        printf("\n");
    }

    return 0;

}



