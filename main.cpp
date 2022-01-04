/*
ID: unityjo1
TASK: transform
LANG: C++                 
*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int N;

bool rotate90(vector<vector<char>> grid, expect){
    vector<vector<char>> copy = grid;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            copy[i][j] = grid[j][i];
            copy[i][j] = copy[abs(N-j-1)][y];
            if(copy[i][j] != expect[i][j]) return false;
        }
    }
    return true;
} 

int main() {
    vector<vector<char>> grid, expc;
    ofstream fout ("transform.out");
    ifstream fin ("transform.in");
    fin >> N;
    for(int i=0; i<N; i++){
        vector<char> rows;
        for(int j=0; j<N; j++){
            char in;
            fin >> in;
            rows.push_back(in);
        }
        grid.push_back(rows);
    }
    
    for(int i=0; i<N; i++){
        vector<char> rows;
        for(int j=0; j<N; j++){
            char in;
            fin >> in;
            expc.push_back(in);
        }
        expc.push_back(rows);
    }
    if(rotate90(grid, expc)){ fout << '1' << endl;}
    return 0;
}

