#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int j,n,i,mn=INT_MAX,ind;
        scanf("%d",&n);
        int a[n],ans[n];
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        //we now find the pair with the smallest difference and for that we fist sort the array and compare the adjacent elements
        sort(a,a+n);
        for(i=0;i<n-1;i++)
            mn=min(mn,a[i+1]-a[i]);
        for(i=0;i<n-1;i++){
            if(a[i+1]-a[i]==mn){
                ans[0]=a[i];
                ans[n-1]=a[i+1];
                //now we completely fill the elements in the ans array
                ind=1;
                for(j=i+2;j<n;j++){
                    ans[ind]=a[j];
                    ind++;
                }
                for(j=0;j<i;j++){
                    ans[ind]=a[j];
                    ind++;
                }
                break;
            }
        }
        for(i=0;i<n;i++)
            printf("%d ",ans[i]);
        printf("\n");
    }
}
