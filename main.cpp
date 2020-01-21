#include"Date.h"
#include"extDate.h"
#include"Calendar.h"
#include<iostream>
using namespace std;
int main(){
//    Date d(18,3,2015);
//    d.print();
//    extDate dd(18,3,2015);
//    dd.printNum();
//    dd.printMonth();
    
    //working with Calendar
    Calendar cal;
    int mon,yr;
    cout<<"Enter month : "; cin>>mon;
    cout<<"Enter year : "; cin>>yr;
    cal.setDate(1,mon,yr);
    cal.printCalender();
}
