class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size(); //No of Rows
        int n = matrix[0].size(); // No of Col
        int x = 1; // if we found 0 on Row we make X as 0
        int y = 1;  // if we found any 0 in Col we make Y as 0
        
        for (int j = 0; j<n; j++){
            if(matrix[0][j] == 0)  x=0;//chechkin Row for an 0
        }

        for (int i = 0; i<m; i++){
            if(matrix[i][0]==0) y=0;
        }

        // for inner metrix
        for(int i=1; i<m; i++){
            for(int j=1; j<n; j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            
            }
        }

        //now checking marker as a 0 or not

        for(int j=1; j<n; j++){
            if(matrix[0][j]==0){
                for(int i=1; i<m; i++)
                matrix[i][j]=0;
            }
        }
        
        for(int i=1; i<m; i++){
            if(matrix[i][0]==0){
                for(int j=1; j<n; j++)
                matrix[i][j]=0;
            }
        }
        if(y==0)
        {
            for(int i=0; i<m; i++)
            {
                matrix[i][0]=0;
            }
        }
        if(x==0)
        {
            for(int j=0;j<n;j++)
            matrix[0][j]=0;
        }

    }
};