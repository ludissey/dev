/*
ID: unityjo1
TASK: barn1
LANG: C++                 
*/

 #include <fstream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ofstream fout("barn1");
    ifstream fin("barn1");
    int M, S, C;

    bool init=true;
    int out, prev_stall, boards_used;
    out=prev_stall=boards_used=0;
    for(int i=0; i<C; i++){
        int stall;
        cin >> stall;
        if(stall-prev_stall<C/3&&!init&&boards_used+1<=M){init=true;}
        prev_stall=stall;
        if(init){out=stall;}
        else{out=stall - out;}
    }
    fout << out << endl;
    return 0;
}