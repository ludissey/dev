/*
ID: unityjo1
TASK: palsquare
LANG: C++                 
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

void reverse(string& str)
{
    int n = str.length(); 
    for (int i = 0; i < n / 2; i++) swap(str[i], str[n - i - 1]);
}
bool isPalindrome(int a){
    
    string pal = to_string(a);
    reverse(pal);
    if(pal == to_string(a)) return true;
    return false;
}
 
int B;

int main() {
    ofstream fout ("palsquare.out");
    ifstream fin ("palsquare.in");
    
    fin >> B;
    
    for(int i=1; i<=300; i++){
        if(int(reverse(to_string(i))[0])==B){}
        if(isPalindrome(i*i)){ fout << i << " " << i*i << "\n";}
    } 
    return 0;
}
