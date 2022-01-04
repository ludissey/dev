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

vector<vector<char>> transpose(vector<vector<char>> grid){
    vector<vector<char>> copy = grid;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            copy[i][j] = grid[j][i];
        }
    }
    return copy;
} 

int main() {
    vector<vector<char>> grid;
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

    vector<vector<char>> transposed = transpose(grid);
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cout << transposed[i][j];
        }
        cout << endl;
    }
    return 0;
}

