#include<iostream>
#include<cstdlib>
using namespace std;
class MyArray{
    int *p;
    int n;
    int sum;
public:
    MyArray();
    void get();
    void cal();
    void display();
    ~MyArray();
};
MyArray::MyArray(){
    cout<<"Enter array size:";
    cin>>n;
    p=new int[n];
    if(!p){
        cout<<"Memory insufficient";
        exit(1);
    }
    sum=0;
}
    void MyArray::get(){
        for(int i=0;i<n;i++){
        cout<<"Enter no:";
        cin>>p[i];
    }
}
void MyArray::cal(){
    for(int i=0;i<n;i++){
        sum+=p[i];

    }

}
void MyArray::display(){
    for(int i=0;i<n;i++){
        cout<<p[i]<<endl;
    }
    cout<<"Sum is"<<sum<<endl;
    cout<<"Average is"<<(float)sum/
    n<<endl;
}
MyArray::~MyArray(){
    cout<<"Array destroyed!"<<endl;
    delete []p;

}
int main(){
    MyArray obj;
    obj.get();
    obj.cal();
    obj.display();
    return 0;
}