class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int negcount = 0;
        int poscount=0;
        for(int num : nums){
            if(num<0){
                negcount++;
            }
            else if(num > 0){
                poscount++;
            }
        }
        return max(negcount,poscount);
        
    }
};