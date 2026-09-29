#include <iostream>
#include <cmath>
#include <array>
#include <vector>
using namespace std;

int main(){
    int imposter[2];
    vector<int> number;
    int difference,sum,temp;
    sum = 0;
    for(int i=0;i<9;i++){
        cin>>temp;
        number.push_back(temp);
        sum+=number[i];
    }
    difference = (sum-100);
    bool out = false;
    for(int i=0;i<9;i++){
        for(int j=i+1;j<9;j++){
            if((number[i]+number[j]) == difference){
                imposter[0] = number[i] ; imposter[1] = number[j];
                out = true;
                break;   
            }
        }
        if(out){
            break;
        }
    }
    // for(int i=0;i<2;i++){
    //     cout<<imposter[i]<<"\n";
    // }
    // cout<<"Output Is \n";
    for(int x=0;x<9;x++){
        if(number[x] == imposter[0] || number[x] == imposter[1]){
            continue;
        }
        cout<<number[x]<<"\n";
    }

    return 0;
}