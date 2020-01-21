#ifndef Calendar_h
#define Calendar_h
#include"Date.h"
#include"extDate.h"
#include<iostream>
#include<string>
using namespace std;
class Calendar:public Date,public extDate{
public:
    void printCalender();
    void setFristDay(int);
    int getFirstDay()const;
    Calendar();
    Calendar(int,int,int);
//private:
//    Date firstDay;
//    extDate date;
};
Calendar::Calendar(){
    setDate(1,1,1900);
}
Calendar::Calendar(int d,int m,int y){
    setDate(d,m,y);
}
void Calendar::printCalender(){
    cout<<"Date is set to: ";
    printMonth();
}
#endif /* Calendar_h */
