//#LEETCODE problem 200 (VVI)

class Solution {
    private:
     void bfs(vector<vector<char>> &grid,vector<vector<int>>& vis,int i,int j){
        vis[i][j]=1;
        queue<pair<int,int>>q;
        q.push({i,j});
         int n=grid.size();
        int m= grid[0].size();
        while(!q.empty()){
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            // int delrow[]={-1,0,1};
            // int delcol[]={0,,0};
            // for(int delrow=-1;delrow<=1;delrow=de){
            //     for(int delcol=-1;delcol<=1;delcol++){
          vector<pair<int,int>>dir{{0,1},{0,-1},{1,0},{-1,-0}} ;
            for(int i=0;i<4;i++){ 
                    int nrow=row+dir[i].first;
                    int ncol=col+dir[i].second;
                    if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]=='1'
                    && !vis[nrow][ncol] ){
                      vis[nrow][ncol]=1;
                      q.push({nrow,ncol});
                    }
                }
            }
        
        
    }
    
void dfs(vector<vector<char>> &grid,vector<vector<int>>& vis,int i,int j)
{       int n=grid.size();
        int m= grid[0].size();
        vis[i][j]=1; 
    if(i+1<n && !vis[i+1][j] && grid[i+1][j]=='1'  ){
        dfs(grid,vis,i+1,j);
    }
 if(i-1>=0 && !vis[i-1][j] && grid[i-1][j]=='1' ){
        dfs(grid,vis,i-1,j);
    }
 if(j-1>=0 && !vis[i][j-1] && grid[i][j-1]=='1'  ){
        dfs(grid,vis,i,j-1);
    }
  if(j+1<m && !vis[i][j+1] && grid[i][j+1]=='1'  ){
        dfs(grid,vis,i,j+1);
    }
    
}
    
    
      // void dfs(vector<vector<char>>& grid,int i , int j, int n, int m, vector<vector<bool>>& a){
      //   a[i][j]=true;
      //   if(i>0 && grid[i-1][j]=='1' && !a[i-1][j])dfs(grid,i-1,j,n,m,a);
      //   if(i<n-1 && grid[i+1][j]=='1' && !a[i+1][j] )dfs(grid,i+1,j,n,m,a);
      //   if(j>0 && grid[i][j-1]=='1' && !a[i][j-1])dfs(grid,i,j-1,n,m,a);
      //   if(j<m-1 && grid[i][j+1]=='1' && !a[i][j+1]) dfs(grid,i,j+1,n,m,a);
    // }
public:
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int cnt=0;
           for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
              if(!vis[i][j] && grid[i][j]=='1'){
                  cnt++;
                  // bfs(grid,vis,i,j);
        dfs(grid,vis,i,j);

              }
          }
      }
     return cnt;  
    }
    
};

//<--END-->
  
//GFG Solution
  class Solution {
    private:
    void bfs(vector<vector<char>> &grid,vector<vector<int>>& vis,int i,int j){
        vis[i][j]=1;
        queue<pair<int,int>>q;
        q.push({i,j});
         int n=grid.size();
        int m= grid[0].size();
        while(!q.empty()){
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            
            for(int delrow=-1;delrow<=1;delrow++){
                for(int delcol=-1;delcol<=1;delcol++){
                    int nrow=row+delrow;
                    int ncol=col+delcol;
                    if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]=='1'
                    && !vis[nrow][ncol] ){
                      vis[nrow][ncol]=1;
                      q.push({nrow,ncol});
                    }
                }
            }
        }
        
    }
  public:
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int n=grid.size();
        int m= grid[0].size();
      vector<vector<int>>vis(n,vector<int>(m,0));
      int cnt =0;
      for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
              if(!vis[i][j] && grid[i][j]=='1'){
                  cnt++;
                  bfs(grid,vis,i,j);
              }
          }
      }
     return cnt;  
    }





// private:
//     void bfs(int row, int col, vector<vector<int>>& vis, vector<vector<char>>& grid){
//         vis[row][col] = 1;
//         queue<pair<int, int>> q;
//         q.push({row, col});
//         int n = grid.size();
//         int m = grid[0].size();
        
//         while(!q.empty()){
//             int row = q.front().first;
//             int col = q.front().second;
//             q.pop();
            
//             // traverse in neighbour and mark them if its a land.
//             for(int delrow = -1; delrow<=1; delrow++){
//                 for(int delcol = -1; delcol<=1; delcol++){
//                     int nrow = row+delrow;
//                     int ncol = col+delcol;
//                     if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]== '1' && !vis[nrow][ncol]){
//                         vis[nrow][ncol] = 1;
//                         q.push({nrow, ncol});
//                     }
//                 }
//             }
//         }
//     }
//   public:
//     // Function to find the number of islands.
//     int numIslands(vector<vector<char>>& grid) {
//         // Code here, 3 july 2023
//         int n = grid.size();
//         int m = grid[0].size();
//         vector<vector<int>> vis(n, vector<int> (m, 0));
//         int cnt = 0;
//         for(int row=0; row<n; row++){
//             for(int col=0; col<m; col++){
//                 if(grid[row][col]== '1' && !vis[row][col]){
//                     cnt++;
//                     bfs(row, col, vis, grid);
//                 }
//             }
//         }
//         return cnt;
//     }
};

