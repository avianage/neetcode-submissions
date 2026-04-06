class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> freq;
        vector<int> output;

        for(int i: nums) freq[i]++;

        int ele;
        int idx;

        for (int i = 0;i < nums.size(); i++){
            int diff = target - nums[i];
            if (freq.count(diff) && (diff != nums[i] || freq[diff] > 1)){
                ele = diff;
                idx = i;
                output.push_back(i);
                break;
            }
        }

        for (int  i = 0; i < nums.size(); i++){
            if ((nums[i] == ele) && (i != idx)){
                output.push_back(i);
                break;
            }
        }

        return output;
    }
};