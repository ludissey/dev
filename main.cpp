/*
ID: unityjo1
TASK: milk2
LANG: C++                 
*/

#include <algorithm>
#include <fstream>
#include <vector>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ofstream fout ("milk2.out");
    ifstream fin ("milk2.in");
    int N, l, p;
    l=p=0;
    vector<pair<int, int>> CT;
    fin >> N;

    //array de toute les temps possible
    for(int i=0; i<=N; i++){
        int s, e;
        fin >> s >> e;
        CT.push_back(make_pair(s, e));
    }

    sort(CT.begin(), CT.end());
    int head, _head;
    int tail, _tail;
    head = _head = CT[0].first;
    tail = _tail = CT[0].second;

    for(int j=1; j<CT.size(); j++){
        //temps le plus long 
        if(CT[j].first <= tail && CT[j].second > tail) tail = CT[j].second; 
        else head = CT[j].first; tail = CT[j].second;
        l = max(l, tail-head);

        //temps le plus long de pause
        if(CT[j].first >= _tail) p = max(p, CT[j].first - _tail); _head = CT[j].first;
        _tail = CT[j].second;
    }

    fout << l << " " << p << endl;
    return 0;
}
