class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0)
            return 1;

        double ans = myPow(x, n / 2);
        ans = ans * ans;

        if (n % 2 == 1)
            return x * ans;

        else if (n % 2 == -1)
            return ans / x;

        else
            return ans;
    }
};