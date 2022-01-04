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
    ofstream fout ("transform.out");
    ifstream fin ("transform.in");
    int a, b;
    fin >> a >> b;
    fout << a+b << endl;
    return 0;
}
