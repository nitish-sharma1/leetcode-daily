class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        set<int> st;
        for( int num : nums){
            if(num >k){
                st.insert(num);
            }
            else if(num < k){
                return -1;
            }
        }
        return st.size();        
    }
};