class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> Map;
        vector<int> key(26);
        for (auto& str : strs)
        {
            fill(key.begin(), key.end(), 0);
            for (int i = 0; i < str.size(); i++)
            {
                key[str[i] - 'a']++;
            }
            string key_str;
            for (int i = 0; i < key.size(); i++)
            {
                key_str += to_string(key[i]) + '#';
            }
            Map[key_str].push_back(str);
        }

        vector<vector<string>> result;
        for (auto& p : Map)
        {
            result.push_back(p.second);
        }

        return result;
    }
};
