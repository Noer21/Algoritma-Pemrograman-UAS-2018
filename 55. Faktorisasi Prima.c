#include <stdio.h>
#include <math.h>

int main(){
   long long unsigned int in;
   int i, akar, cout;
   scanf("%llu", &in);
   akar = sqrt(in);
   for (i=2; i<akar; ++i){
        cout = 0;
        while(in%i==0){
            in/=i;
            ++cout;
        }
        if(cout!=0)
            printf("%d^%d\n", i, cout);
   }
   if(in>1)
            printf("%d^1\n", in);

   return 0;
}
