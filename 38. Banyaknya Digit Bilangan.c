#include <stdio.h>

int main(){
    long unsigned in, out;

    scanf("%lu", &in);
    out = 0;
    while(in>0){
        in/=10;
        out++;
    }
    printf("%lu\n", out);
    return 0;

}
