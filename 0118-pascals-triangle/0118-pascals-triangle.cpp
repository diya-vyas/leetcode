class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> ans;

        for (int N = 0; N < numRows; N++) {
            
            vector<int> row;

            long long val = 1;
            row.push_back(val);

            for (int k = 1; k <= N; k++) {
                val = val * (N - k + 1) / k;
                row.push_back(val);
            }

            ans.push_back(row);
        }

        return ans;
    }
};