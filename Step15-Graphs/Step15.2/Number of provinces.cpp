//#LEETCODE problem Q547(MEDIUM)

class Solution {
//     private:
//     void dfs(int node,vector<int>adj[],vector<int>&vis){
//         vis[node]=1;
//         for(auto it: adj[node]){
//             if(!vis[it]){
//                 dfs(it,adj,vis);
//             }
//         }
//     }
// public:
//     int findCircleNum(vector<vector<int>> isConnected) {
//         int n=isConnected.size();
        
//         // creating adjacency list from matrix 
//         vector<int>adj[n];
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 if(isConnected[i][j]==1 && i!=j){
//                   adj[i].push_back(j);
//                 adj[j].push_back(i);   
//                 }
               
//             }
//         }
        
//         // int vis[n]={0};
//         vector<int>vis(n,0);
//         int count=0;
//         for(int i=0;i<n;i++){
//             if(!vis[i]){
//                 count++;
//                 dfs(i,adj,vis);
//             }
//         }
//       return count;  
    
    
    
    
    
    
    
    
     private:
    void dfs(int node,vector<vector<int>>adj,vector<int>&vis){
        vis[node]=1;
       for(int i=0;i<adj.size();i++){
           if(!vis[i]&&adj[node][i]==1){
                dfs(i,adj,vis);
           }
       }
    }
public:
    int findCircleNum(vector<vector<int>> isConnected) {
        int n=isConnected.size();
        
        // creating adjacency list from matrix 
//         vector<int>adj[n];
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 if(isConnected[i][j]==1 && i!=j){
//                   adj[i].push_back(j);
//                 adj[j].push_back(i);   
//                 }
               
//             }
//         }
        
        // int vis[n]={0};
        vector<int>vis(n,0);
        int count=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                count++;
                dfs(i,isConnected,vis);
            }
        }
      return count;  
    }
};


<--END-->

#GFG Problem (MEDIUM)

class Solution {
    private:
    void dfs(int node,vector<int>adjLs[],int vis[]){
        vis[node]=1;
        for(auto it: adjLs[node]){
            if(!vis[it])dfs(it,adjLs,vis);
        }
    }
  public:
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        
        vector<int>adjLs[V];
        // converting adjacency matrix to adjacency list
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(adj[i][j]==1 && i!=j){
                    adjLs[i].push_back(j);
                    adjLs[j].push_back(i);
                }
            }
        }
        
        int vis[V]={0};
        int count=0;
        for(int i=0;i<V;i++){
            if(!vis[i]){
                count++;
                dfs(i,adjLs,vis);
                
            }
        }
        
      return count;  
        
    }
};
