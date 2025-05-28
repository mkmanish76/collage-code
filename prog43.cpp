#include<iostream>
using namespace std;
class student
{
    int roll;
    char grade;
    float per;
    public:
    student();
    void show();
    ~student();
};
student::student()
{
    cout<<"Enter roll,grade and per:";
    cin >>roll>>grade>>per;
}
void student::show()
{
    cout<<"Roll="<<roll<<",grade="<<grade<<",per="<<per<<endl;

}
student::~student(){
    cout <<"object destroyed!"<<endl;
}

int main(){
    student s,p;
    s.show();
    p.show();
    return 0;
}
