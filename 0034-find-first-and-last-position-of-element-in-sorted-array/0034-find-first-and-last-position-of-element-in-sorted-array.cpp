class Solution {
public:

    int firstOccurrence(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        int answer = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                answer = mid;
                high = mid - 1;  // Search left
            }
            else if (nums[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return answer;
    }

    int lastOccurrence(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        int answer = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                answer = mid;
                low = mid + 1;  // Search right
            }
            else if (nums[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return answer;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int first = firstOccurrence(nums, target);
        int last = lastOccurrence(nums, target);

        return {first, last};
    }
};