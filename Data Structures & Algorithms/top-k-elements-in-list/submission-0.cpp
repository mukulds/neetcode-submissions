class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;

        for (auto x : nums) {
            m[x]++;
        }

        vector<pair<int,int>> sorted;

        for (auto y : m) {
            sorted.push_back(y);
        }

        sort(sorted.begin(), sorted.end(), [](auto a, auto b) {
            return a.second > b.second;
        });

        vector<int> ans;

        int i = 0;
        while (k > 0) {
            ans.push_back(sorted[i].first);
            i++;
            k--;
        }

        return ans;
    }
};