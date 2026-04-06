class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> freq;
        for (auto i: nums){
            freq[i]++;
        }
        
        vector<pair<int,int>> vec(freq.begin(),freq.end());

        sort(vec.begin(),vec.end(),
            [](auto &a, auto &b){
                return a.second > b.second;
            }
        );
            
        vector<int> output;
        for (int i = 0; i < k; i++){
            output.push_back(vec[i].first);
        }
        return output;
    }
};
