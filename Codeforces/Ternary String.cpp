#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int left=0,right=0,i,mn=200000;
        bool cnd=false;
        map<char,int> mp;
        string s;
        cin>>s;
        while(right<s.size()){
            mp[s[right]]++;
            if(mp.size()==3){
                cnd=true;
                while(mp.size()==3){
                    mp[s[left]]--;
                    if(mp[s[left]]==0)
                        mp.erase(s[left]);
                    left++;
                }
                mn=min(mn,right-left+2);
            }
            right++;
        }
        if(cnd)
            printf("%d\n",mn);
        else printf("0\n");

    }
}


