#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int diff,a,b,cnt=0;
        scanf("%d%d",&a,&b);
        //similar to CSES- Coin Piles problem
        //first we make both a and b equal by reducing 'diff' times 2 from bigger and 'diff' times 1 from smaller
        //after , we check how many 3's can we take from them( reducing 3 from both gives 2 weapons and even after this they remain equal)
        if(a>b){
            diff=a-b;
            if(diff<=b){
                cnt=diff;
                b=b-diff;
                a=a-(2*diff);
                cnt=cnt+2*(a/3);
                if(a%3==2)
                    cnt++;
            }
            else
                cnt=b;
        }
        else{
            diff=b-a;
            if(diff<=a){
                cnt=diff;
                a=a-diff;
                b=b-(2*diff);
                cnt=cnt+2*(a/3);
                if(a%3==2)
                    cnt++;
            }
            else
                cnt=a;
        }
        printf("%d\n",cnt);
    }
}
