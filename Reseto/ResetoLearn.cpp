#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N,K;
    cin>>N>>K;
    vector<bool> crossed(N+1);
    int count = 0;
    for(int p=2;p<=N;p++){
        if(crossed[p]) continue;
        for(int m=p;m<=N;m+=p){
            if(crossed[m]) continue;
            crossed[m] = true;
            count+=1;
            if(count == K){
                cout<<m;
                return 0;
            }
        }
    }
}