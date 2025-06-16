#include<iostream>
using namespace std;
class counter{
    int count;
public:
    counter ();
    counter(int);
    void operator++();
    void show();
};
counter::counter(){
    count=0;
}
counter::counter(int c){
    count=c;
}
void counter::operator++(){
    ++count;
}
void counter::show(){
    cout<<count<<endl;
}
int main(){
    counter c1 (10);
    c1.show();
    ++c1;
    c1.show();
    return 0;

}