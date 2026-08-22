class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> arr1(26);
        vector<int> arr2(26);
        int n = s.length();
        if(n==t.length())
        {
            for(int i=0; i<n; i++)
            {
                arr1[s[i]-'a']++;
            }
            for(int i=0; i<n; i++)
            {
                arr2[t[i]-'a']++;
            }
            for(int i=0; i<26; i++)
            {
                if(arr1[i]!=arr2[i]) return false;
            }
            return true;
        }
        else return false;
    }
};
