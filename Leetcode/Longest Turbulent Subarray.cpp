class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) { //just focus on the breaking constions, it is a non overlapping subarray problem
        int i,need=-1,cnt=1,mx=1;
        for(i=1;i<arr.size();i++){
            if(arr[i]<arr[i-1]){
                if(cnt==1){
                    cnt++;
                    need=1;
                }
                else{
                    if(need==0){
                        cnt++;
                        need=1;
                    }
                    else{
                        mx=max(cnt,mx);
                        need=1;
                        cnt=2;
                    }
                }
            }
            else if(arr[i]>arr[i-1]){
                 if(cnt==1){
                    cnt++;
                    need=0;
                }
                else{
                    if(need==1){
                        cnt++;
                        need=0;
                    }
                    else{
                        mx=max(cnt,mx);
                        need=0;
                        cnt=2;
                    }
                }
            }
            else{
                mx=max(mx,cnt);
                cnt=1;
            }
            if(i==(arr.size()-1))
                mx=max(cnt,mx);
        }
        return mx;
    }
};
