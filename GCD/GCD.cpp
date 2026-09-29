#include <iostream>
#include <cmath>

using namespace std;

int main(){
    long long a,b;
    int gcd = 1;
    cin>>a>>b;
    if(a==0&&b==0){
        return 0;
    }
    // negative -> positive
    if(a<0) a = -a;
    if(b<0) b = -b;
    for(int i = max(a,b);i>0;i--){
        if(a%i == 0 && b%i ==0){
            gcd = i;
            cout<<gcd<<"\n";
            return 0;
        }
    }
    cout<<gcd;

    return 0;
}