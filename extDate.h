#ifndef extDate_h
#define extDate_h
#include"Date.h"
#include<iostream>
#include<string>
using namespace std;
class extDate:public Date{
public:
    extDate();
    extDate(int,int,int);
    void printMonth();
    void printNum();
};
extDate::extDate(int d,int m,int y){
    setDate(d,m,y);
}
void extDate::printMonth(){
    string month[13]={"","January","February","March","April","May","June","July","August","September","October","November","December"};
    string monthText=month[getMonth()];
    cout<<"Date is: "<<monthText<<' '<<getDay()<<','<<getYear()<<endl;
}
void extDate::printNum(){
    cout<<"Date is: "<<getMonth()<<'-'<<getDay()<<'-'<<getYear()<<endl;
}

#endif /* extDate_h */
