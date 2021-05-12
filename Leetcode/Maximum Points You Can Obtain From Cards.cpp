class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum=0,size,i,total=0,mn;
      //since we choose from left end or right end each time, after choosing k elements in this way
      //the array will be reduced to a (n-k) size subarray
        //so, we have to find the subarray of size n-k having minimum sum to get (total -min sum) 
     
        for(i=0;i<cardPoints.size();i++)
            total=total+cardPoints[i];
        
        size=cardPoints.size()-k;
        for(i=0;i<size;i++)
            sum=sum+cardPoints[i];
        mn=sum;
        for(i=1;i<=cardPoints.size()-size;i++){
            sum=sum-cardPoints[i-1];
            sum=sum+cardPoints[i+(size-1)];
            if(sum<mn)
                mn=sum;
        }
        return total-mn;
    }
};
