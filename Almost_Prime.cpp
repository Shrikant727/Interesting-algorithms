//Original code by fuwutu on github
#include <iostream>

using namespace std;

int main()
{
   int n;
   int total=0;
   scanf("%d",&n);
   bool sieve[3000]={false};
   int pfactors[3000]={0};
   for(int i=2;i<=n;i++){
       if(!sieve[i]){
           for(int j=2*i;j<=n;j+=i){
               sieve[j]=true;
               pfactors[j]+=1;
           }
       }
       if (pfactors[i]==2){
               total+=1;
           }
   }
    printf("%d",total);
    return 0;
}
