class Solution {
public:

    vector<bool> checkIfPrerequisite(int numCourses, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {
        //step 1 adj banao 
         // step 2 toplogical sort likho
         // queries check karo

         vector<vector<int>> adj(numCourses);
         vector<int> indegree(numCourses,0);
         vector<bool> res;
       
         queue<int> q;

         for( auto course : prerequisites){
            int u = course[0];
            int v = course[1];
            adj[u].push_back(v);
            indegree[v]++;
         }

         for( int i =0 ;i < numCourses;i++){
            if(indegree[i]==0){
                q.push(i);
            }
         }
        unordered_set<int> st;
       map<int, unordered_set<int>> mp;
         while(!q.empty()){
            int u = q.front();
            q.pop();
            
   
            for( auto v : adj[u]){
                mp[v].insert(u);
                for( auto ngbr : mp[u]){
                    mp[v].insert(ngbr);
                }
                indegree[v]--;
                if(indegree[v]==0){
                    q.push(v);
                }
            }

         }
         
         for( auto q : queries){
            int u = q[0];
            int v = q[1];
            if(mp[v].count(u)>0){
                res.push_back(true);
            }
            else{
                res.push_back(false);
            }
         }
    return res;

        
    }
};