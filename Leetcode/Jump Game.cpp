class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxpos=0,i,j,posreach;
        //any index is reachable if nums[i]!=0 , now if a 0 comes we have to get past it, we cannot land on it
        //so while travelling we note the maximum reachable index and this maxpos must be greater than
        // the index of any 0 element that comes in our way
        for(i=0;i<nums.size()-1;i++){
            if(nums[i]!=0){
                posreach=i+nums[i];
                if(posreach>maxpos)
                    maxpos=posreach;
            }
            else{
                if(maxpos==i)
                    return false;
            }
        }
        return true;
    }
};
