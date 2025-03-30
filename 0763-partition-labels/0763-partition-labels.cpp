class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> res;
        unordered_map<char,int> last;
        int n = s.size();
        for( int i = n-1 ; i >=0 ; i--)
        {
            if(last.count(s[i]) ==0){
                last[s[i]]=i; //this will store the last index if the ch
            }
        } 
        int i=0;
        int j=0;
        int maxidx = 0;
        while(j<n){
            while(j<n && j<=maxidx){
                int ls = last[s[j]];
                maxidx = max(maxidx,ls);
                j++;
            }
            res.push_back(j-i);
            i=j;
            maxidx = j;
        }

        return res;

        
    }
};