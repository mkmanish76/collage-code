#include<iostream>
using namespace std;
void change(int*);
int main(){
    int n=10;
    cout<<"Before changing n's value="<<n<<endl;
    change(&n);
    cout<<"After changing n's value="<<n<<endl;
    return 0;
}
void change(int*p){
    *p=*p+1;
}