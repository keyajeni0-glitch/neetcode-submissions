class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int, int> hasharr;
        for(int i=0; i<nums.size(); i++)
        {
            hasharr[nums[i]]++;
        }
        for(auto it = hasharr.begin(); it != hasharr.end(); ++it)
        {
            if(it->second>1) return true;
        }
        return false;
    }
};