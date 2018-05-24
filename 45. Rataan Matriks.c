#include<stdio.h>

int main(){

    int jml, n, m, i, j, k, input, sum;
    float rata;

    scanf("%d %d %d", &jml, &n, &m);

    for(i=0; i<jml; i++){
        sum = 0;
        for(j=0; j<n; j++){
            for(k=0; k<m; k++){
                scanf("%d", &input);
                sum += input;
            }
        }
        rata = 1.0*sum/m/n;
        printf("Rataan matriks ke-%d: %.2f\n", i+1, rata);
    }


    return 0;

}
