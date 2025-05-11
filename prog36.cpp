#include<iostream>
using namespace std;
class Box {
    int l,b,h;
    public:
    Box();
    Box(int);
    Box(int, int, int);
    void show();
};
Box :: Box(){
    cout<<"Enter l,b,h:";
    cin>>l>>b>>h;
}
    Box :: Box(int s){
        l=b=h=s;
    }
    Box :: Box(int i,int j,int k){
        l=i;
        b=j;
        h=k;
    }
    void Box :: show(){
        cout<<"length="<<",breath="<<b<<",height="<<h<<endl;
    }
    int main(){
        Box B1;
        Box B2(10);
        Box B3(5,7,9);
        B1.show();
        B2.show();
        B3.show();
    return 0;
    }