class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_map<int,int> mp;
        int repeating_num = 0;
        int n = nums.size();
        int operation = 0;
        for(int num : nums){
            if(mp.count(num) >0){
                if(mp[num]==1){
                    repeating_num++;
                }
            }
            mp[num]++;

        }
        int i=0;
        while(repeating_num  && i<n){
            operation++;
            for(int j = 0 ;  j <3;j++){
                if(i>=n){
                    break;
                }
                mp[nums[i]]--;
                if(mp[nums[i]]==1){
                    repeating_num--;
                }
                i++;
            }

        }
        return operation;
    }
};