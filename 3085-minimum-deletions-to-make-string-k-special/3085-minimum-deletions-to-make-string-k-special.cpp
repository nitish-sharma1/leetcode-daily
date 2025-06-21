class Solution {
public:
    int minimumDeletions(string word, int k) {
        vector<int> freq(26,0);
        for(char ch : word){
            freq[ch - 'a']++;
        }
        sort(freq.begin() , freq.end());
        int cumm = 0;
        int res = word.size();
        for(int i = 0 ; i < 26 ;i++){
         int freqi = freq[i];
            int deleted = cumm;
            for(int j=25 ; j>i ; j--){
                if(freq[j] - freq[i] <=k){
                    break;
                }
                deleted += freq[j] - freq[i] -k ; 
            }
            res = min (res , deleted);
            cumm +=freq[i];
        }
return res;
        
    }
};  