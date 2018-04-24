#include <stdio.h>

int main(){
    int n, i, j, cout;
    long long int a, b, c;

    scanf("%d", &n);
    cout = 0;
    for (i = 0; i < n; i++){
        scanf("%lld%lld%lld", &a, &b, &c);
        if(a!=0 && b!=0 && c!=0 && a<=b && b<=c)
            cout++;
    }
    printf("%d\n", cout);
    return 0;

}
