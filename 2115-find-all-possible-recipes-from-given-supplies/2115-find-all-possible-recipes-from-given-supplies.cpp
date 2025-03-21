class Solution {
public:
    vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) {

        int n =recipes.size();
        unordered_set<string> st;
        for(string s : supplies){
            st.insert(s);
        }
        unordered_map<string,vector<int>> adj;
        vector<int> indegree(n,0);
        for( int i = 0 ; i <n ; i++){
            auto ingredient = ingredients[i];
            for( auto item : ingredient){
                if(st.count(item) == 0){
                    adj[item].push_back(i);
                    indegree[i]++;
                }
            }
        }
        queue<int> q;
        for(int i = 0  ; i <n ; i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        vector<string> res;
        while(!q.empty()){
            int idx = q.front();
            q.pop();
            string recipe = recipes[idx];
            res.push_back(recipe);
            for( int v : adj[recipe]){
                indegree[v]--;
                if(indegree[v]==0){
                    q.push(v);
                }
            }
        }
        return res;
    }
};