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
    if(grid[1][1] != trans[1][1]){

        ÂÂ
    }
    fout << a+b << endl;
    return 0;
}
void rotate90(char[N][N] grid){
    char[N][N] copy = transpose(grid);
    for(int x=0; x<N; x++){ for(int y=0; y<N; y++){ copy[x][y] = grid[abs(x-(N-1))][y]; }
    return copy;
}
void transpose(char[N][N] grid){
    char[N][N] copy;
    for(int x=0; x<N; x++){for(int y=0; y<N; y++){ copy[x][y] = grid[y][x]; }}
    return copy;
}