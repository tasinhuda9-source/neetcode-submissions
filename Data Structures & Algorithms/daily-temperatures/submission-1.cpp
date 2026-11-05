

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> res(n, 0);   // answer array, default 0
        stack<int> st;           // stores INDICES, not temperatures

        for (int i = 0; i < n; i++) {
            while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
                int j = st.top();// store top karon pop korbo pore ar top change hobe
                st.pop(); // new top so loop abar reset hoilo
                res[j] = i - j; // ans 
            }
            st.push(i);
        }

        return res;
    }
};
