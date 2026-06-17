class Solution {
public:
    int findNumbers(vector<int>& nums) {

        int count = 0;

        for(int i = 0; i < nums.size(); i++) {
            int digits = to_string(nums[i]).length();

            if(digits % 2 == 0) {
                count++;
            }
        }

        return count;
    }
};