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
        if(CT.size() == 0){
            CT.push_back(make_pair(s, e));
        }    
        else{
            if(CT[CT.size()-1].second >= s-1 && CT[CT.size()-1].first >= s) CT[CT.size()-1].second = e;
            else CT.push_back(make_pair(s, e)); p = s - CT[CT.size()-2].second;
        }
    }
    sort(CT.begin(), CT.end());
    int head, _head;
    int tail, _tail;
    head = _head = CT[0].first;
    tail = _tail = CT[0].second;

    for(int j=1; j<CT.size(); j++){
        if(tail >= CT[j].first && tail <= CT[j].second){
            tail = _tail = CT[j].second;
        }
        else{
            l = max(l, CT[j].first-tail); 
            head = _head = CT[j].first; 
            tail = _tail = CT[j].second;
        }
        l = max(l, tail-head);
    }
    fout << l << " " << p << endl;
    return 0;
}
