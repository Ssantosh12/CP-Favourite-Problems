#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long int d,D,p,q,rem,mul,ans;
        scanf("%lld%lld%lld%lld",&D,&d,&p,&q);
        mul=D/d;
        ans=d*(mul*p+q*((mul*(mul-1))/2));
        rem=D%d;
        ans=ans+rem*(p+mul*q);
        printf("%lld\n",ans);
    }
}
