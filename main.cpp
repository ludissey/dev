/*
ID: unityjo1
TASK: milk2
LANG: C++                 
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ofstream fout ("milk2.out");
    ifstream fin ("milk2.in");
    int N;
    vector<pair<int, int>> CT;
    fin >> N;
    for(int i=0; i<N; i++){
        int s, e;
        fin >> s >> e;
        if(CT.size == 0) CT[0].first==s; CT[0].second==e;
    }
    fout << a+b << endl;
    return 0;
}