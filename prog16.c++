#include<iostream>
using namespace std;
class student{
    int roll;
    char grade;
    float per;
 public:
    void get();
    void show();   
};
void student ::get(){
    cout <<"Enter roll,grade and per:";
    cin>>roll>>grade>>per;
}
void student ::show(){
    cout <<roll <<","<<grade<<","<<per<<endl;

}
int main(){
    student S,P;
    S.get();
    S.show();
    return 0;
}