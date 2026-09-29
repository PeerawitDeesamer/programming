#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    //รับค่าเข้ามา i บรรทัด
    int arr[5][4] = {0};
    int person[5] = {0};
    for(int i = 0;i<5;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
            person[i] += arr[i][j];
        }
    }
    // for(auto x :person){
    //     cout<<x<<endl;
    // }
    auto it = max_element(begin(person),end(person));
    int index = it - begin(person);
    cout<<index+1<<" "<<*it;
    return 0;
}