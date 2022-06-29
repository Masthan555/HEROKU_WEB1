#include<bits/stdc++.h>

using namespace std;

int allPossibleSubgridsSum(vector<vector<int>> &grid, int m, int n){
    int sum = 0;

    for(int i=0; i<grid.size(); i++){
        for(int j=0; j<grid[i].size(); j++){
            // int remainingRows = m-i;
            // int remainingCols = n-j;

            sum += grid[i][j] * ( m * n );
        }
    }

    return sum;
}

int main(){

    vector<vector<int>> grid;
    vector<int> row;
    // Feed Grid Data
    row.push_back(1);
    row.push_back(1);
    grid.push_back(row);
    
    row.clear();
    row.push_back(1);
    row.push_back(1);
    grid.push_back(row);

    int m = grid.size();
    int n = grid[0].size();

    int sum = allPossibleSubgridsSum(grid, m, n);

    cout<<sum;

    return 0;
}