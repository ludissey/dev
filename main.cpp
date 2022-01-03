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
                //rotate 90
                if(rotate90(x,y, grid) != trans[x][y]) {transformations[0] = false;}
                //rotate 180
                if(rotate180(x,y, grid)) != trans[x][y]) {transformations[1] = false;}
                //rotate 270
                if(rotate270(x,y, grid)) != trans[x][y]) {transformations[2] = false;}
                
                //reflect
                int reflect = reflect(grid);
                if(reflect[x][y]!=trans[x,y] && transformations[3]){transformations[3] = false;}
                
                if(rotate90(x,y, reflect) != trans[x][y]) {transformations[4] = false;}
                //rotate 180
                if(rotate180(x,y, reflect)) != trans[x][y]) {transformations[4] = false;}
                //rotate 270
                if(rotate270(x,y, reflect)) != trans[x][y]) {transformations[4] = false;}
            }
        }
        for(int i=0; i<7; i++){ if(transformations[i]) {fout << i+1 << endl;} }
    }
    return 0;
}
char rotate90(int x, int y, char[N][N] grid){ return transpose(grid)[abs(x-(N-1))][y]; }
char rotate180(int x, int y, char[N][N] grid){ return grid[abs(x-(N-1)))][abs(y-(N-1))]; }
char rotate270(int x, int y, char[N][N] grid){ return transpose(grid)[x][abs(y-(N-1))]; }


char[N][N] transpose(char[N][N] grid){
    char[N][N] copy;
    for(int x=0; x<N; x++){for(int y=0; y<N; y++){ copy[x][y] = grid[y][x]; }}
    return copy;
}
char[N][N] reflect(char[N][N] grid){
    char[N][N] copy;
    for(int x=0; x<N; x++){for(int y=0; y<N; y++){ copy[x][y] = grid[abs(x-(N-1))][y]; }}
    return copy;
}