#include<stdio.h>

int main(){
    int i, n, a;

    scanf("%d", &n);
    for(i =0; i<n; i++){
        scanf("%d", &a);
        if(a < 1000)
            printf("LEBIH KECIL\n");
        else
            printf("LEBIH BESAR ATAU SAMA DENGAN\n");
    }
    return 0;
}
