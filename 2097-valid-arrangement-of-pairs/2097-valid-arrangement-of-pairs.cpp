class Solution {
public:
    void dfs(int u , unordered_map<int , vector<int>> &adj,vector<int> &path){
       while(!adj[u].empty()){
        int next = adj[u].back();
        adj[u].pop_back();
        dfs(next,adj,path);
       }
       path.push_back(u);
    }
    vector<vector<int>> validArrangement(vector<vector<int>>& pairs) {
        //build a graph 
        unordered_map<int , vector<int>> adj;
        unordered_map<int,int> indegree;
        unordered_map<int,int> outdegree;

        //buluid indgree out degree
        for(auto edge : pairs){
            int u = edge[0];
            int v = edge[1];
            adj[u].push_back(v);
            indegree[v]++;
            outdegree[u]++;
        }

        //call dfs on start node
        int start = pairs[0][0];
        
        for( auto it : adj){
            int node = it.first;
            if(outdegree[node] - indegree[node] == 1){
                start = node;
              
                break;
            }
        } 

        vector<int> vis(100001,0);
        vector<int> path;
        dfs(start,adj,path);
        reverse(path.begin(),path.end());
       
        vector<vector<int>> ans;
        for( int i = 0 ; i < path.size()-1; i++){
            cout<<path[i]<<" "<<endl;
            ans.push_back({path[i],path[i+1]});
        }
        return ans;
    }
};