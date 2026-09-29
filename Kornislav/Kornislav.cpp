#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a[4];
    for(int i=0;i<4;i++) cin>>a[i];

    sort(a , a+4);
    int best = 0;
   
    do{

        int area = min(a[0],a[2]) * min(a[1],a[3]);
        best = max(best,area);

    }while (next_permutation(a,a+4)) ;//เพื่อให้ครบทุกตัว เพราะถ้า เรียงครบทุกลำดับแล้ว next_permutation จะ return false

    cout<<best;
    
    return 0;
}