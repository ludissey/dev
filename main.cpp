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
    int N, l, p;
    l=p=0;
    vector<pair<int, int>> CT;
    fin >> N;

    //array de toute les temps possible
    for(int i=0; i<N; i++){
        int s, e;
        fin >> s >> e;
        if(CT.size == 0) CT[0].first==s; CT[0].second==e;
        else{
            if(CT[CT.size-1].second >= e+1 && CT[CT.size-1].first >= s) CT[CT.size-1].second = e;
            else CT.pop(make_pair(s, e)); p = s - CT[CT.size-1].second;
        }
    }
    for(int i=0; i<CT.size; i++){
        l = max(l, CT.second - CT.first);
    }
    fout << l << " " << p << endl;
    return 0;
}