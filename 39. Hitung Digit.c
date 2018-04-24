#include <stdio.h>

int main(){
    int cek, temp, in, out;

    scanf("%d %d", &cek, &in);
    out = 0;
    while(in>0){
        temp = in%10;
        in/=10;
        if (cek == temp)
            out++;
    }
    printf("%d\n", out);
    return 0;

}
