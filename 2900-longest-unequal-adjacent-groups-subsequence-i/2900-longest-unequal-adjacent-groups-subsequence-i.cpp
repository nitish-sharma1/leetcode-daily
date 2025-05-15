class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        vector<string> zero;
        vector<string> first;
        int z=0;
        int o=0;
        int n = groups.size();
        while(z < n && groups[z] !=0){
            z++;
        }
        while(o < n && groups[o] !=1){
            o++;
        }
        if(z<n){
            zero.push_back(words[z]);
        }
          if(o<n){
            first.push_back(words[o]);
        }
        int curr = 0 ;
        while(z<n){
            if(groups[z] != curr){
                zero.push_back(words[z]);
                curr = !curr;
            }
            z++;
        }
        curr = 1 ;
         while(o<n){
            if(groups[o] != curr){
                first.push_back(words[o]);
                curr = !curr;
            }
            o++;
        }
        return zero.size() >= first.size() ? zero : first;
    }
};