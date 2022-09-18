#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);      //solved using basic concept of non overlapping segment, juts focus on breaking conditions
    while(t--){
        long long int n,i,cnt=0,ans=0,prv=-1;
        scanf("%lld",&n);
        int a[n];
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        //non overlapping segment problem
        for(i=0;i<n;i++){
            if(a[i]>=prv)
                cnt++;
            else{                    //breaking condition
                ans=ans+(cnt*(cnt+1))/2;
                cnt=1;
            }

            if(i==(n-1))
                    ans=ans+(cnt*(cnt+1))/2;

            prv=a[i];
        }
        printf("%lld\n",ans);
        //adding this comment for learning purposes
    }
}
