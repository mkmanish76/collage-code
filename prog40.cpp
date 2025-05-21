#include<iostream>
using namespace std;
void swap(int&,int&);
int main(){
    int a,b;
    cout<<"Enter 2 int:";
    cin>>a>>b;
    cout<<"Before swapping ,a="<<a<<",b="<<b<<endl;
    swap(a,b);
    cout<<"After swapping ,a="<<a<<",b="<<b<<endl;
    return 0;
}
void swap(int&p,int&q){
    int temp;
    temp=p;
    p=q;
    q=temp;
}
