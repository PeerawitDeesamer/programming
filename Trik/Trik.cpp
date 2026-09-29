#include <iostream>
#include <string>

using namespace std;

int main(){
    int arr[3] = {1,0,0};
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i] == 'A'){
            swap(arr[0],arr[1]);
        }else if(s[i] == 'B'){
            swap(arr[1],arr[2]);
        }else if(s[i] == 'C'){
            swap(arr[0],arr[2]);
        }
    }
    // for(int x=0;x<3;x++){
    //     cout<<arr[x];
    // }
    if(arr[0] == 1){
        cout<<"1";
    }else if(arr[1] == 1){
        cout<<"2";
    }else if(arr[2] == 1){
        cout<<"3";
    }
    return 0;
}