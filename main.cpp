/*
ID: unityjo1
TASK: transform
LANG: C++                 
*/

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

int N;
int main() {
    ofstream fout ("transform.out");
    ifstream fin ("transform.in");
    fin >> N;
    char[N][N] grid;
    char[N][N] trans;

    for(int x=0; x<N; x++){
        for(int y=0; y<N; y++){
            fin >> grid[x, y];kj
        }    
    }for(int x=0; x<N; x++){
        for(int y=0; y<N; y++){
            fin >> trans[x, y];
        }    
    }
    bool[7] transformations = {true, true, true, true, true, true, true};
    if(grid[1][1] != trans[1][1]){ fout << 7 << endl; }
    else{
        for(int x=0; x<N; x++){
            for(int y=0; y<N; y++){ 
                if(rotate(x,y, grid) != grid(x, y)) {transformations[0] = false}
                if(rotate(x,y, grid) != grid(x, y)){ fout << 1 << endl}
            }
        }
    }
    return 0;
}
int rotate(int x, int y, char[N][N] grid){ return transpose(grid)[abs(x-(N-1))][y]; }

void transpose(char[N][N] grid){
    char[N][N] copy;
    for(int x=0; x<N; x++){for(int y=0; y<N; y++){ copy[x][y] = grid[y][x]; }}
    return copy;
}