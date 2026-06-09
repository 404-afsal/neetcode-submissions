class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix(nums.size(), 0);
        vector<int> suffix(nums.size(), 0);

        prefix[0] = 1;
        suffix[nums.size() - 1] = 1;

        for (int i = 1; i < nums.size(); i++)
        {
            prefix[i] = prefix[i-1] * nums[i-1];
        }

        for (int j = nums.size() - 2; j >= 0; j--)
        {
            suffix[j] = suffix[j+1] * nums[j+1];
        }

        vector<int> answer(nums.size(), 0);

        for (int k = 0; k < nums.size(); k++)
        {
            answer[k] = prefix[k]*suffix[k];
        }

        return answer;
    }
};
