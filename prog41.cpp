#include<iostream>
using namespace std;
class Box{
    int l,b,h;
    public:
    Box();
    Box(int);
    Box(int,int,int);
    Box(Box&);
    void show();
};
Box::Box(){
    cout<<"Non parametrized const.called"<<endl;
    cout<<"Enter l,b,h";
    cin>>l>>b>>h;
}
Box::Box(int s){
    cout<<"single paramatrized constructor called"<<endl;
    l=b=h=s;
}
Box::Box(int i,int j,int k){
    cout<<"Triple parametrized constructor called"<<endl;
    l=i;
    b=j;
    h=k;
}
Box::Box(Box&p){
    cout<<"copy cont"<<endl;
    l=p.l;
    b=p.h;
    h=p.h;
}
void Box::show(){
    cout<<"lenght="<<l<<",breadth="<<b<<",hight="<<h<<endl;
}
int main(){
    Box B1;
    Box B2(10);
    Box B3(5,7,9);
    Box B4(B1);
    B1.show();
    B2.show();
    B3.show();
    B4.show();
    return 0;
}
