#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,i,cnt=0;
        scanf("%d",&n);
        string s;
        cin>>s;
        for(i=0;i<n;i++){
            if(s[i]=='0')
            cnt++;
        }
        if(cnt>1&&s.size()&1&&s[s.size()/2]=='0')
             printf("ALICE\n");
        else if(cnt==0)
            printf("DRAW\n");
        else printf("BOB\n");
    }
}
