class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 0;
        int high = 1000000000;
        while (high - low > 1) {
            int mid = low + (high - low) / 2;

            long long hours = 0;

            for (int x : piles) {
                hours += (x + mid - 1) / mid;
            }

            if (hours <= h)
                high = mid;
            else
                low = mid;
        }

        return high;
    }
};