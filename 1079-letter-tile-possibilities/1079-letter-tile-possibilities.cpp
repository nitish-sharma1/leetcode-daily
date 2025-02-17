class Solution {
public:
    void solve (string & tiles, string & curr , unordered_set <string> & res , vector<int> &used , int n  ){
        res.insert(curr);
        for(int i = 0 ; i < n ; i++){
            if(!used[i]){
                used[i] =1;
                curr.push_back(tiles[i]);
                solve(tiles,curr,res,used,n);
                used[i]=0;
                curr.pop_back();
            }
        }
    }
    int numTilePossibilities(string tiles) {
        int n = tiles.size();
        unordered_set <string> res;
        vector<int> used(n,0);
        string curr = "";
        solve(tiles,curr,res ,used,n);

        return res.size() -1;
        
        }
};