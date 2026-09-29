#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    double R;
    cin>>R;
    double Euclidian,Taxicab;
    Euclidian = M_PI*R*R;
    Taxicab = 2*R*R;
    cout<<fixed;
    cout<<setprecision(6)<<Euclidian<<"\n"<<Taxicab;
    return 0;
}