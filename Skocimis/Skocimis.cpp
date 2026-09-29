#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    vector<int> v;
    int temp , RHS = 0 , LHS = 0 , Middle = 0;
    for(int i=0;i<3;i++){
        cin>>temp;
        v.push_back(temp);
    }
    //Find RHS
    // for(int i=0;i<v.size();i++){
    //     if(v[i] > RHS){
    //         RHS = v[i];
    //     }
    // }
    // //Find LHS
    // for(int i=0;i<v.size();i++){
    //     if(v[i] < LHS){
    //         LHS = v[i];
    //     }
    // }
    // cout<<"RHS : "<<RHS<<"\nLHS : "<<LHS;
    sort(v.begin(),v.end());

    RHS = v[2] ; LHS = v[0]; ; Middle = v[1] ;
    if((RHS - Middle) > (Middle - LHS)){
        cout<<RHS-Middle-1;
    }else if((RHS - Middle) < (Middle - LHS)){
        cout<<Middle-LHS-1;
    }
    else{
        cout<<RHS-Middle-1;
    }
    // cout<<RHS-LHS-1;
    return 0;
}