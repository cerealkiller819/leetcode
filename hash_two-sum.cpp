class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> hashMap;
        for (int i = 0; i < nums.size(); i++) {
            int other = target - nums[i] ;
            if (hashMap.find(other)!=hashMap.end()){
                return {hashMap[other],i};
            }
            else{
                hashMap[nums[i]]= i ;
            }
        }
        return{};
    }
};