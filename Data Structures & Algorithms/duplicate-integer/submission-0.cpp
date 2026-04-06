class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int, int> m1;
        for (int i = 0; i < nums.size(); i++){
            if (m1[nums[i]] == 1){
                return true;
            }
            else{
                m1[nums[i]] = 1;
            }
        }
        return false;
    }
};