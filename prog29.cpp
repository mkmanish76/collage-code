#include<iostream>
#include<cstring>
using namespace std;
class Emp{
    int age; 
    char name [20];
    float sal;
    public:
    void set(int,const char*,float);
    void show();
};
void Emp::set(int a,const char*P,float s)
{
    age=a;
    strcpy (name,P);
    sal=s;

}
void Emp::show(){
    cout<<"age="<<age<<",name="<<name<<"sal="<<sal<<endl;

}
int main()
{
    Emp E ,F ,G;
    E.set(24,"Amit",30000.0);
    F.set(21, "varun",25000.0);
    G.set (25,"Deepak",32000.0);
    E.show();
    F.show();
    G.show();
    return 0;
}