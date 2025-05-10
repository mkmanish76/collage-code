#include<iostream>
using namespace std;
class fact{
    int n;
    int f;
 public:
    void init();
    void get();
    void calculate();
    void show();
 };
    void fact :: init(){
        f=1;
    }
    void fact :: get(){
        cout<<"Enter an int:";
        cin>>n;
    }
    void fact :: calculate(){
        for(int i=1; i<n; i++){
            f=f*i;
    }
 }
    void fact :: show(){
        cout<<"No is "<<n<<endl;
        cout<<"its factorial is"<<f<<endl;
    }
    int main(){
        fact obj;
        obj.init();
        obj.get();
        obj.calculate();
        obj.show();
        return 0;
}