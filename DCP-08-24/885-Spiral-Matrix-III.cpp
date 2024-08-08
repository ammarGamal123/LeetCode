class Solution {
public:
  vector<vector<int>> spiralMatrixIII(int rows, int cols,
                                    int rStart, int cStart) {
    vector <vector<int>> ans;

   vector <vector<int>> dir {{0 , 1} , {1 , 0} ,
                             {0 , -1} , {-1 , 0}
    };

    int r = rStart , c = cStart;
    int i = 0;
    int steps = 1;
    while (ans.size() < rows * cols){
        for (int x = 0; x < 2; x++) {
            int dr = dir[i][0], dc = dir[i][1];
            for (int iter = 0; iter < steps; iter++) {
                if (0 <= r && r < rows && 0 <= c  && c < cols)
                    ans.push_back({r, c});

                r += dr;
                c += dc;
            }
            i = (i + 1) % 4;
        }
        steps += 1;
    }

    return ans;
}

};