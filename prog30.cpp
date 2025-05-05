#include<iostream>
using namespace std;
class Date {
    int dd,mm,yy;
    public:
        void setDate (int,int,int);
        void showDate (const char*);
    };
    void Date::setDate(int d,int m,int y){
        dd=d;
        mm=m;
        yy=y;
    }
    void Date::showDate(const char *p){
        cout<<p<<"-->";
        cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
    }
        int main(){
            Date d1,d2;
            d1.setDate(06,05,2025);
            d2.setDate(04,03,2006);
            d1.showDate("Current date is");
            d2.showDate("My birthday is");
            return 0;

        
    }