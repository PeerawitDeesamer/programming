#include <bits/stdc++.h>

using namespace std;

char alphabet[5] {'a','e','i','o','u'};
bool is_alphabet(char c){
    // cout<<"IN : "<<c<<endl;
    for(auto x : alphabet){
        if(c == x) return true;
    }
    return false;
}
int main(){
    string luka_string;
    getline(cin, luka_string);
    for(int i=0;i<luka_string.size();i++){
        if(is_alphabet(luka_string[i])) {cout<<luka_string[i];i+=2;}
        else cout<<luka_string[i];;
    }
    return 0;
}