class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();

        int low = -1;
        int high = n;

        while (high - low > 1) {
            int mid = (low+high) / 2;

            if (nums[mid] >= nums[0])
                low = mid;
            else
                high = mid;
        }

        if (high == n)
            return nums[0];

        return nums[high];
    }
};