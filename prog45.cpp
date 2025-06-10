#include<iostream>
using namespace std;
class Box
{
    int l,b,h;
    public:
    void get();
    void show();
    int compare(Box);
};
void Box::get(){
    cout<<"Enter l,b,h:";
    cin>>l>>b>>h;
}
void Box::show()
{
    cout<<"length="<<l<<",breadth="<<b<<",height="<<h<<endl;
}
int Box::compare(Box P){
    int x,y;
    x=l*b*h;
    y=P.l*P.b*P.h;
    if(x==y)
    return 0;
    else if(x>y)
    return 1;
    else
    return -1;
}
    int main()
    {
        Box B1;
        Box B2;
        B1.get();
        B2.get();
        B1.show();
        B2.show();
        int ans;
        ans=B1.compare(B2);
        if(ans==0)
            cout<<"vols of B1 and B2 are equal";
        else if(ans==1)
            cout <<"vol of B1 is grater than B2";
        else
             cout<<"vol of B2 is grater";
        return 0;
    }
