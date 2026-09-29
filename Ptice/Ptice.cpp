#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int Adrian_Score = 0, Bruno_Score = 0, Goran_Score = 0, Max_Score;
    vector<int> student_score ;
    char Adrian[3] = {'A','B','C'};
    char Bruno[4] = {'B','A','B','C'};
    char Goran[6] = {'C','C','A','A','B','B'};
    string answer; // เฉลยคำตอบแต่ละข้อ
    // Input
    cin >> Max_Score;
    cin >> answer;
    // cout<<answer;
    //Process
    for(int i=0;i<Max_Score;i++){
        if(answer[i] == Adrian[i%3]){
            Adrian_Score += 1;
        }
    }
    student_score.push_back(Adrian_Score);
    for(int i=0;i<Max_Score;i++){
        if(answer[i] == Bruno[i%4]){
            Bruno_Score += 1;
        }
    }
    student_score.push_back(Bruno_Score);
    for(int i=0;i<Max_Score;i++){
        if(answer[i] == Goran[i%6]){
            Goran_Score += 1;
        }
    }
    student_score.push_back(Goran_Score);
    sort(student_score.begin(),student_score.end()); // จัดเรียงคะแนนจากน้อยสุด -> มากสุด
    Max_Score = student_score[student_score.size()-1]; // คะแนนมากสุด
    // cout<<Adrian_Score<<" "<<Bruno_Score<<" "<<Goran_Score<<" ";
    cout<<Max_Score<<"\n";
    if(Adrian_Score == Max_Score){
        cout<<"Adrian\n";
    }
    if(Bruno_Score == Max_Score){
        cout<<"Bruno\n";
    }
    if(Goran_Score == Max_Score){
        cout<<"Goran\n";
    }


    return 0;
}