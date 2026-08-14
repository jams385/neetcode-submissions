class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> count_map;

        for (const auto& num : nums){
            count_map[num]++;
        }

        vector<vector<int>> count_vec;

        for(const auto& [key, value] : count_map){
            count_vec.push_back({value, key});
        }

        sort(count_vec.begin(), count_vec.end());

        vector<int> result;

        for (int i = 0; i < k; i++){
            result.push_back(count_vec.back()[1]);
            count_vec.pop_back();
        }

        return result;
    }
};
