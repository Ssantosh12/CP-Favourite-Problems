#include <bits/stdc++.h>
using namespace std;

int main(){
    
    // Problem - insert 'a' in the given string to make it non-palindrome
    //thinking- 
    int t;
    scanf("%d",&t);
    while(t--){
        int i,j,cnta=0;
        string s,ans;
        cin>>s;
        for(i=0;i<s.size();i++){
            if(s[i]=='a')
                cnta++;
        }
        if(cnta==s.size())
            printf("NO\n");
        else{
            int cnd=1,left=0,right=s.size()-1;
            //check if it is a palindrome
            while(left<right){
                if(s[left]!=s[right]){
                    cnd=0;
                    break;
                }
                left++;
                right--;
            }
            if(cnd==1){
                ans=s;
                ans.push_back('a');
            }
            else{
                for(i=0;i<s.size()/2;i++){
                    ans.push_back(s[i]);
                }
                ans.push_back('a');
                for(i=s.size()/2;i<s.size();i++)
                    ans.push_back(s[i]);
            }
            printf("YES\n");
            cout<<ans<<"\n";
        }
    }
}
