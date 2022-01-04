/*
ID: unityjo1
TASK: transform
LANG: C++                 
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    vector<vector<char>> grid;
    ofstream fout ("transform.out");
    ifstream fin ("transform.in");
    int N;
    fin >> N;
    for(int i=0; i<N; i++){
        vector<char> rows;
        for(int j=0; j<N; j++){
            char in;
            fin >> in;
            rows.push_back(in);
        }
        grid.push_back(row);
    }
    fout << a+b << endl;
    return 0;
}
void transpose(vector<vector<char>> grid){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            grid[i][j] = grid[j][i];
        }
    }
    return grid;
} 
