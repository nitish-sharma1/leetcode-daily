class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        set<int> st;
         vector<int> ans;
         int n = digits.size();
        for(int i = 0 ; i < n ; i++){
            if(digits[i] != 0){
                for(int j=0 ; j<n ; j++){
                    if(i!=j){
                        for(int k = 0 ; k<n;k++){
                            if(k!=j && k!=i){
                                int num = (digits[i] * 10 +digits[j])*10 +digits[k];
                                if(num%2 == 0){
                                    st.insert(num);
                                }
                            }
                        }
                    }
                }
            }
              
        }
        for( auto it : st){
                ans.push_back(it);
            }
            sort(ans.begin(),ans.end());
            return ans;
    }
};