#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin>>s;
    bool Upper = false;
    bool Lower = false;
    for(int i=0;i<s.size();i++){
        if((int)s[i] >= 65 && (int)s[i]<=90){
            Upper = true;
        }
        if((int)s[i] >= 97 && (int)s[i]<=122){
            Lower = true;
        }
    }
    if(Upper && Lower){
        cout<<"Mix";
    }
    else if (Upper)
    {
        cout<<"All Capital Letter";
    }
    else if(Lower)
    {
        cout<<"All Small Letter";
    }
    
    return 0;
}