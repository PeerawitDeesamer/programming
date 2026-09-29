#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string orders;
    map<char, int> Alphabet;
    vector<int> r(3); //Store Number input
    for(int i=0;i<3;i++){
        cin>>r[i];
    }
    cin>>orders;
    sort(r.begin(),r.end());
    // Assign number to letter
    for(int c=0;c<3;c++){
        Alphabet['A'+c] = r[c];
    }
    for(int i=0;i<3;i++){
        cout<<Alphabet[orders[i]]<<" ";
    }

    return 0;
}