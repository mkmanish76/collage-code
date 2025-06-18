#include<iostream>
using namespace std;
class student
{
    int roll;
    char grade;
    float per;
public:
    void get();
    friend void show(student&);
};
void student::get()
{
    cout<<"Enter roll,grade and per:";
    cin>>roll>>grade>>per;
}
void show (student&P)
{
    cout<<"Roll="<<P.roll<<",grade="<<P.grade<<",per="<<P.per<<endl;
}
int main()
{
    student S;
    S.get();
    show(S);
    return 0;
}

