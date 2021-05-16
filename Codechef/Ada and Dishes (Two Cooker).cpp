#include <bits/stdc++.h>
using namespace std;

int main(){
  
  //  a little similar to CSES Apple Division problem but simpler than that
   //build two towers representing cumulative sum of times such that they rich minimum height after putting each food item's time in those towers
     int t;
     scanf("%d",&t);
     while(t--){
       int ind,n,i,suma=0,sumb=0;
       scanf("%d",&n);
       int a[n];
       for(i=0;i<n;i++)
       scanf("%d",&a[i]);
       sort(a,a+n);
       ind=n-1;
       while(ind>=0){
           if(suma>sumb){
             sumb=sumb+a[ind];
             ind--;
           }
           else{
            suma=suma+a[ind];
            ind--;
            }
         }
         printf("%d\n",max(suma,sumb));
     }
}
