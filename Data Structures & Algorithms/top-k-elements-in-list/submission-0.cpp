class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;

        for(auto x:nums)
        {
            mp[x]++;
        }

        vector<pair<int,int>> c;

        for(auto x:mp)
        {
            c.push_back({x.second,x.first});
        }

        sort(c.rbegin(),c.rend());

        vector<int> ans;

        for(int i=0;i<k;i++)
        {
            ans.push_back(c[i].second);
        }

        return ans;
    }
};