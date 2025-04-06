#include <algorithm>
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //T(C(N)==O(C(N)) and S(C(N)==O(1)) as it requires Non memory space allocation iteratively
        for(int i =m,j=0;j<n;i++){//Iterating through n and m's sizes
            nums1[i]=nums2[j];j++;//Swapping Array Elements and Incrementing Indx val
        }sort(nums1.begin(),nums1.end());}};//Sorting Nums's Initial and Ending Elements