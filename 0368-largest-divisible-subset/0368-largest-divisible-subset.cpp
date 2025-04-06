class Solution {
public:
   
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        
        if(nums.size()==1)
            return nums;
        //vector<int> ans;
        sort(nums.begin(),nums.end());
        // 1 2 4 8
        vector<int> dp(nums.size(),1); //0~i 的最大子集合元素
        vector<int> end_index(nums.size(),-1);//第i個元素的最後一個索引值
        int start_index = 0;
        for(int i=1;i<nums.size();i++){
            for(int j=0;j<i;j++){//0走到i 因為已經從小排到大
                if(nums[i]%nums[j]==0 && dp[j]>=dp[i]){//可以整除 
                    dp[i]++;
                    end_index[i] = j;//第i個元素結束的索引值
                }
            }
            //cout << "i:" << i << " dp=" << dp[i] << endl;
            if(dp[i] > dp[start_index])
                start_index = i;
        }
        //cout << start_index << endl;
        
        vector<int> ans(dp[start_index],0); //最長的子集合
        
        for(int i=0,index=start_index;i<ans.size();i++){
            ans[i] = nums[index];
            index = end_index[index];
        }
        
        return ans;
    }
};