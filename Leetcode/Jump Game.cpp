class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxpos=0,i,j,posreach;
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
