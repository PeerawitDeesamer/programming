#include <iostream>
#include <set>
#include <cmath>

using namespace std;

int main(){
    set<int> s; 
    int number[10];
    //Input 10 Number 
    for(int i=0;i<10;i++){
        cin>>number[i];
        // cout<<number[i];
    }
    // Modulo with 42
    for(int i=0;i<10;i++){
        s.insert((number[i] % 42));
    }
    cout<<s.size();

    return 0;
}