class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size() , prefixSum = 0 , cnt = 0;

        map<int ,int> mp;
        mp[prefixSum] = 1;

        for(int i=0; i<n; i++) {
            prefixSum += nums[i];
            int remove = prefixSum - k;
            cnt += mp[remove];
            mp[prefixSum] += 1;
        }

        return cnt;
    }
};