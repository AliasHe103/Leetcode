class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;
        for (int i = 0; i < nums.size(); i++) {
            auto m = hash.find(target - nums[i]);
            if (m != hash.end()) {
                return { m->second,i };
            }
            else {
                hash[nums[i]] = i;
            }
        }
        return {};
    }
};
