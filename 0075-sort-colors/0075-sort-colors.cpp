class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> cnt(3,0);
        for(int num : nums){
            cnt[num]++;
        }
        int i=0;
        int j=0;
        while(i<3){
            while(cnt[i]--){
                nums[j]=i;
                j++;
            }
            i++;
        }

    }
};