class Solution {
public:
    int majorityElement(vector<int>& nums) {
        std::unordered_map<int, int> hashMap;
        int n = nums.size() ;
        for (int i = 0 ;i < nums.size(); i++) {
                hashMap[nums[i]]++;
            if (hashMap[nums[i]] > n/2){
                return nums[i] ;
            }
        }
        return{};
    }
};