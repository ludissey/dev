
/*
ID: unityjo1
TASK: milk2
LANG: C++                 
*/

#include <algorithm>
#include <fstream>
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
    for(int i=0; i<N; i++){
        int s, e;
        fin >> s >> e;
        CT.push_back(make_pair(s, e));
    }
    sort(CT.begin(), CT.end());
    int head, tail;
    head = CT[0].first;
    tail = CT[0].second;

    for(int i=1; i<CT.size(); i++){
        if(CT[i].first<=tail && CT[i].second>tail){
            tail = CT[i].second;
        }else{
            p=max(p, CT[i].first-tail);
            l=max(l, tail-head);
            head = CT[i].first;
            tail = CT[i].second;
        }
    }
    fout << l << " " << p << endl;
    return 0;
}
