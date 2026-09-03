class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int j = 0;
        int maxCount = 0;
        for (int i=0 ;i<nums.size();i++){
            if (nums[i]==1){
                j++;
            }
        
            if(nums[i]==0){
                j=0;
            }
            maxCount = max(maxCount, j);
        

        }
        return maxCount;

        
    }
};