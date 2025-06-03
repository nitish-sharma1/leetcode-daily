class Solution {
public:

    int dfs(int box,vector<int>& status, vector<int>& candies, vector<vector<int>>& keys, vector<vector<int>>& containedBoxes, vector<int>& initialBoxes, vector<int>& vis,unordered_set<int>& foundBoxes ){
        if(vis[box]){
            return 0;
        }
        if(status[box]==0){
            foundBoxes.insert(box);
            return 0;
        }
        vis[box] =1;
        int collectedCandies = candies[box];

        for(auto insideBox : containedBoxes[box]){
            collectedCandies += dfs(insideBox,status,candies,keys,containedBoxes,initialBoxes,vis,foundBoxes);
        }

        for(auto keybox : keys[box] ){
            status[keybox] = 1;
            if(foundBoxes.count(keybox)){
                collectedCandies += dfs(keybox,status,candies,keys,containedBoxes,initialBoxes,vis,foundBoxes);
            }
        }
        return collectedCandies;

    }


    int maxCandies(vector<int>& status, vector<int>& candies, vector<vector<int>>& keys, vector<vector<int>>& containedBoxes, vector<int>& initialBoxes) {
        int candiesCollected  = 0 ;
        int n = status.size();
        vector<int> vis(n,0);
        unordered_set<int> foundBoxes;

        for(auto box : initialBoxes){
            candiesCollected += dfs(box,status,candies,keys,containedBoxes,initialBoxes,vis,foundBoxes);
        }
        return candiesCollected;
    }
};