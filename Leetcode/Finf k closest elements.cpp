class Solution {
public:
  
  //   NOTE: focus on 'while loop conditions' -> which condition is given first, which cnd needs to be really there etc.
  
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int i,left,right,mid,ele;
        //finding 1st posn of element in the array which is greater than or equal to x
        left=0; right=arr.size()-1;
        while(left!=right){
            mid=(left+right)/2;
            if(arr[mid]<x)
                left=mid+1;
            else right=mid;
        }
        //now we start choosing elements based their distance from x
        vector<int> vc;
        left--;
        while(k>0){   // -> here what cnd we are taking matters 
            if(left>=0&&right<=(arr.size()-1)){
                if(abs(x-arr[left])>abs(x-arr[right])){
                    vc.push_back(arr[right]);
                    right++;
                }
                else { vc.push_back(arr[left]); left--;}
            }
            else if(left>=0){
                vc.push_back(arr[left]);
                left--;
            }
            else{
                vc.push_back(arr[right]);
                right++;
            }
            k--;
        }
        sort(vc.begin(),vc.end());
        
        return vc;
    }
};
