class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size() , cnt1 = 0 , cnt2 = 0 , el1 = INT_MIN , el2 = INT_MIN;

        for(int i=0; i<n; i++) {
            if(cnt1 == 0 && nums[i] != el2) {
                cnt1 = 1;
                el1 = nums[i];
            }
            else if(cnt2 == 0 && nums[i] != el1) {
                cnt2 = 1;
                el2 = nums[i];
            }
            else if(nums[i] == el1) {
                cnt1++;
            }
            else if(nums[i] == el2) {
                cnt2++;
            }
            else{
                cnt1-- , cnt2--;
            }
        }

        int check1 = 0 , check2 = 0;

        for(int i=0; i<n; i++) {
            if(nums[i] == el1) check1++;
            else if(nums[i] == el2) check2++;
        }

        if(check1 > floor(n/3) && check2 > floor(n/3)) {
            return {el1 , el2};
        }
        else if(check1 > floor(n/3)) return {el1};
        else if(check2 > floor(n/3)) return {el2};
        else return {};
    }
};