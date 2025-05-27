class Solution {
public:
    int differenceOfSums(int n, int m) {
        int total = n * (n+1)/2;
        int tn = n/m;
        int sn = m *tn*(tn+1)/2;
        int nondiv = total -sn;
        return nondiv - sn;
        
    }
};