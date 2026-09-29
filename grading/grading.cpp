#include <iostream>
using namespace std;
int main(){
    // Input Score 
    int Stored_score,Midterm,Final,Total_Score;
    string Grade;
    cin>>Stored_score;
    cin>>Midterm;
    cin>>Final;
    //Check Grade
    Total_Score = (Stored_score+Midterm+Final);
    if (Total_Score >= 80)
    {
        Grade = "A";
    }else if (Total_Score<80 && Total_Score >=75)
    {
        /* code */
        Grade = "B+";
    }else if (Total_Score<75 && Total_Score >=70)
    {
        /* code */
        Grade = "B";
    }
    else if (Total_Score<70 && Total_Score >=65)
    {
        /* code */
        Grade = "C+";
    }else if (Total_Score<65 && Total_Score >=60)
    {
        /* code */
        Grade = "C";
    }else if (Total_Score<60 && Total_Score >=55)
    {
        /* code */
        Grade = "D+";
    }else if (Total_Score<55 && Total_Score >=50)
    {
        /* code */
        Grade = "D";
    }
    else{
        Grade = "F";
    }
    cout<<Grade;
    
    return 0;

}