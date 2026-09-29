#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
bool check_prime_number(int n){
    bool prime = true;
    for(int i = 2;i<n;i++){
        if(n%i == 0){
            prime = false;
        }
    }
    return prime;
}
int find_least_prime(vector<int> Number){
    int least_prime_number;
    bool found = false;
    vector<int> prime_number;
    for(int i=0;i<Number.size();i++){
        if(check_prime_number(Number[i])){
            prime_number.push_back(Number[i]);
            found = true;
        }
    }
    sort(prime_number.begin(),prime_number.end());
    if (found){
        return prime_number[0];
    }else{
        return 0;
    }

}
int main(){
    int N,K;
    cin>>N>>K;
    vector<int> Number;
    vector<int> cut;
    //ขั้นตอนที่ 1 เพิ่ม จำนวนตั้งแต่ 2 - N ไปใน Vector Number
    for(int i=2;i<=N;i++){
        Number.push_back(i);
        // cout<<Number[i-2];
    }
    //ขั้นตอนที่2 Find Leastest Prime Number on list
    while(find_least_prime(Number) != 0){ // ออกจาก while เมื่อไม่มี จำนวนเฉพาะเหลือใน Number แล้ว
        int least_prime_number;
        least_prime_number = find_least_prime(Number);
        // cut.push_back(least_prime_number);
        //ขั้นตอนที่3 ขีดค่าทุกพหุหูณของจำนวนเฉพาะนั้น
        // cout<<"Least Prime Number Now is : "<<least_prime_number<<" "<<(Number.size()/least_prime_number)<<endl;
        for(int i=1;least_prime_number*i<=N;i++){
            bool add = true;
            for(int j=0;j<cut.size();j++){
                if(least_prime_number*i == cut[j]){
                    add = false;
                }
            }
            if(add == true) cut.push_back(least_prime_number*i);
        }
        auto it = find(Number.begin(),Number.end(),least_prime_number);
        if(it != Number.end()) Number.erase(it);
    }
    cout<<cut[K-1];
    //ขั้นตอน4 ทำขั้นตอน 2 ใหม่
    return 0;
}