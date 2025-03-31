class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
        vector<int> pairsum;
        int n = weights.size();
        for( int  i = 1 ; i < n ;i++){
            pairsum.push_back(weights[i] +weights[i-1]);
        }
        sort(pairsum.begin(),pairsum.end());

        long long minsum = 0;
        long long maxsum = 0;
        for(int i= 0 ; i < k-1 ; i++){
            minsum += pairsum[i];
            maxsum +=pairsum[n-2-i];
        }
       
        return maxsum -minsum;
        
    }
};