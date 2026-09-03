class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int variable=0;
        for(int i=0; i<nums.size(); i++){
            variable=variable ^ nums[i];
    
        }
        return variable;

    }
};