//# GFG MEDIUM( Detect cycle in an undirected graph)


class Solution {
//     private:
//     bool isConnected(int src, vector<int> adj[],int vis[]){
//         vis[src]=1;
//         queue<pair<int,int>>q;
//         q.push({src,-1});
//         while(!q.empty()){
//           int node = q.front().first;
//           int parent=q.front().second;
//           q.pop();
//           for(auto adjNode:adj[node]){
//              if(!vis[adjNode]){
//                  q.push({adjNode,node});
//                  vis[adjNode]=1;
//              }
//              else if(parent!=adjNode){
//                  return true;
//              }
//           }
//         }
//         return false;
        
//     }
//   public:
//     // Function to detect cycle in an undirected graph.
//     bool isCycle(int V, vector<int> adj[]) {
        
        
//         // Code here
//         int vis[V]={0};
//         for(int i=0;i<V;i++){
//             if(!vis[i]){
//               if(isConnected(i,adj,vis))
//               return true;
//             //   else return false;
//             // return isConnected(i,adj,vis);
//             }
//         }
//         return false;
// }

private:
bool isConnected(int src,int parent,int vis[],vector<int>adj[]){
    vis[src]=1;
    // parent=src;
    for(auto it: adj[src]){
        if(!vis[it]){
            if(isConnected(it,src,vis,adj)==true) return true;
        }
        else if(it!=parent){
            return true;
        }
    }
    return false;
    
}

 public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        int vis[V]={0};
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(isConnected(i,-1,vis,adj)==true)
                return true;
            }
        }
        return false;


        




    }
};
