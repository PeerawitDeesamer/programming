#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v1,v2;
    int Matrix[9] = {0};
    int m,n;
    int x;
    cin>>m>>n;
    //input First Matrix
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>x;
            v1.push_back(x);
        }
    }
    //input Second Matrix
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>x;
            v2.push_back(x);
        }
    }
    //Matrix Addition Process
    // for(int i = 0;i<9;i++){
    //     Matrix[i] = v1[i] + v2[i];
    // }

    for(int i = 0;i<m;i++){
        for(int j=0;j<n;j++){
            cout << v1[i*n + j] + v2[i*n + j] << " ";
        }
        cout<<"\n";
    }

    return 0;
}