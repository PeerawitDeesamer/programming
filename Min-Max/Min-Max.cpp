#include <iostream>
using namespace std;
int main(){
    int n,temp;
    int Min,Max;
    cin>>n;
    int numbers[n];
    //Input Number
    for(int i=0;i<n;i++){
        cin>>temp;
        numbers[i] = temp;
    }
    //Find Min
    Min=2000000000;
    for(int j=0;j<n;j++){
        if(numbers[j]<Min){
            Min = numbers[j];
        }
    }
    //Find Max
    Max = -2000000000;
    for(int k = 0;k<n;k++){
        if(numbers[k]>Max){
            Max = numbers[k];
        }
    }
    cout<<Min<<"\n"<<Max;
    return 0;
}