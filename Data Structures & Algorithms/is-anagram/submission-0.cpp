class Solution {
public:
    bool isAnagram(string s, string t) {
        // If sizes are different, they cannot be anagrams
        if(s.size() != t.size())
        {
            return false;
        }

        unordered_map<char, int> maps[2];

        // Mark freq of chars in s
        for (char c : s)
        {
            maps[0][c]++;
        }

        for (char c : t)
        {
            if (!maps[0].count(c))
            {
                // 'c' not exist in t
                return false;
            }
            if (maps[1][c] >= maps[0][c])
            {
                // t already have same freq of 'c' from s
                return false;
            }
            maps[1][c]++;
        }
    return true;
    }
};
