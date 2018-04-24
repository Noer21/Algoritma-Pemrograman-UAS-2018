#include <stdio.h>

int main(){
    int n, i;
    long long unsigned in, out;

    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%llu", &in);
        out = 0;
        while (in != 0){
            out*=10;
            out+=in%10;
            in/=10;
        }
        printf("%llu\n", out);
    }

    return 0;

}
