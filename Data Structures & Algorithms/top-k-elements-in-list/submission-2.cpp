class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mapp;
        for(int i = 0; i < nums.size(); i++)
        {
            mapp[nums[i]]++;
        }
        vector<vector<int>> count(nums.size() + 1);
        for(auto it = mapp.begin(); it != mapp.end(); it++)
        {
            count[it->second].push_back(it->first);
        }
        vector<int> ans;
        for(int i = nums.size(); i >= 1 && ans.size() < k; i--)
        {
            for(int num : count[i])
            {
                ans.push_back(num);
                if(ans.size() == k)
                    break;
            }
        }
        return ans;
    }
};
