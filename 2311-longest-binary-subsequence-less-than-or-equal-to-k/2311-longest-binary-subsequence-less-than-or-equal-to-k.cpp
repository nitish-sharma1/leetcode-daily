class Solution {
public:
    int n;

    int solve(const string &s, int k, int i) {
        if (i < 0) 
            return 0;

        int take = 0;
        int bit  = s[i] - '0';
        long long value = (bit == 1 ? (1LL << (n - i - 1)) : 0);

        if (value <= k) {
            take = 1 + solve(s, k - value, i - 1);
        }

        int skip = solve(s, k, i - 1);
        return max(take, skip);
    }

    int longestSubsequence(string &s, int k) {
        n = s.length();
        return solve(s, k, n-1);
    }
};

