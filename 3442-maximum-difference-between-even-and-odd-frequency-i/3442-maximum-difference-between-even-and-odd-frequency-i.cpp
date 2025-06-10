class Solution {
public:
    int maxDifference(string s) {
        vector<int> freq(26,0);
        int odd= INT_MIN;
        int even = INT_MAX;
        for(char ch :s){
            freq[ch-'a']++;
        }
        for(int i=0;i<26;i++){
                if(freq[i]%2==0){
                    if(freq[i] !=0){
                       even = min(even,freq[i]);
                    }                    
                }
                else{
                    if(freq[i] !=0){
                        odd = max(odd,freq[i]);
                    }
                    
                }
        }
        return odd - even;
    }
};