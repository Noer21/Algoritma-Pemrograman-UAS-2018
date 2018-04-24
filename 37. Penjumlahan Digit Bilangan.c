#include <stdio.h>

int main(){
    long unsigned in, out;

    scanf("%lu", &in);
    out = 0;
    while(in>0){
        out+=in%10;
        in/=10;
    }
    printf("%lu\n", out);
    return 0;

}
