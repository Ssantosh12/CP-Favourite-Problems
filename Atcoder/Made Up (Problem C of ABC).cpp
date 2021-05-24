#include <bits/stdc++.h>
using namespace std;

int main(){
  //find no of (i,j) such that Ai=Bci;
  //we iterate through each element of array c, its each element takes us to any element of array B(diff ele of C can take us to same ele of B)
  //we just use map to see how many ele of A are equal to that ele of B, that increases cnt=cnt+mp[b[c[i]]];
  //NOTE: either use long long or int for all values
    long long int val,ele,i,j,n,cnt=0;
    scanf("%lld",&n);
    map<long long int,long long int> mp;
    long long int b[n];
    for(i=0;i<n;i++){
        scanf("%lld",&ele);
        mp[ele]++;
    }
    for(i=0;i<n;i++)
        scanf("%lld",&b[i]);
    for(i=0;i<n;i++){
        scanf("%lld",&ele);
        ele--;
        //val=b[ele];
        cnt=cnt+mp[b[ele]];
        //cnt=cnt+mp[val];cout<<cnt<<endl;
    }

    printf("%lld\n",cnt);
}
