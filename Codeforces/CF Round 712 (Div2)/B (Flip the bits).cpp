#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,i,cnt0=0,cnt1=0,cnd=1;
        scanf("%d",&n);
        bool flip=false;
        string a,b;
        cin>>a;
        cin>>b;
        for(i=0;i<n;i++){
            if(a[i]=='0')
                cnt0++;
            else cnt1++;
        }
        for(i=n-1;i>=0;i--){
            if(flip){
                if(a[i]=='0')
                    a[i]='1';
                else a[i]='0';
            }
            if(a[i]==b[i]){
                if(a[i]=='0')
                    cnt0--;
                else cnt1--;
            }
            else{
                if(cnt1==cnt0){
                    if(flip)
                        flip=false;
                    else flip=true;
                    if(a[i]=='0')
                        cnt1--;
                    else cnt0--;
                }
                else{
                    cnd=0;
                    break;
                }
            }
        }
        if(cnd==1) printf("YES\n");
        else printf("NO\n");
    }
}
