#ifndef Date_h
#define Date_h
#include<iostream>
using namespace std;
class Date{
public:
    Date();
    Date(int,int,int);
    void setDate(int,int,int);
    void setDay(int);
    void setMonth(int);
    void setYear(int);
    int getDay()const;
    int getMonth()const;
    int getYear()const;
    bool isValid(int);
    bool leapYear();
    void print();
    int numDay();
    int dayPass();
    void addDay();
    
private:
    int day;
    int month;
    int year;
};
Date::Date(){
    day=0;
    month=0;
    year=1900;
}
//implementation
Date::Date(int d,int m,int y){
    setDate(d,m,y);
}
void Date::setDate(int d,int m,int y){
    setDay(d);
    setMonth(m);
    setYear(y);
}
void Date::setDay(int d){
    if(0<=d&&d<=31)
        day=d;
    else
        day=0;
}
void Date::setMonth(int m){
    if(0<=m&&m<=12)
        month=m;
    else
        month=0;
}
void Date::setYear(int y){
    if(1900<=y&&y<=2100)
        year=y;
    else
        year=1900;
}
int Date::getDay()const{return day;}
int Date::getMonth()const{return month;}
int Date::getYear()const{return year;}



//function to check valid setting
bool Date::isValid(int m){
    int days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    if(month==2&&leapYear()){
        days[2]=29;
        return true;
    }
    else if(0<=day&&day<=days[m])
        return true;
    else
        return false;
}

//function to check leapyear
bool Date::leapYear(){
    if((year%400==0)||((year%4==0)&&(year%100!=0)))
        return true;
    return false;
}

//function to return number of days in each month
int Date::numDay(){
    int days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    if(leapYear()&&month==2){
        days[2]=29;
        return days[2];
    }
    else
        return days[month];
    
}

//functio calculate the number of days passed
int Date::dayPass(){
    int dPass=0;
    int mPass=month-1;
    int days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    for(int i=1;i<=mPass;i++)
        dPass+=days[mPass];
    return dPass+day;
}

//function to add days to the current date
void Date::addDay(){
    int dAdd=25;
    int dTot=dAdd+day;
    if(dTot>numDay()){
        day=dTot-numDay();
        month++;
    }
    else
        day+=dAdd;
}



void Date::print(){
    cout<<"Performing addDay(): ";
    addDay();
    cout<<"\nday is set: ("<<day<<',';
    if(isValid(month)&&month!=2){
        cout<<month<<','<<year<<')'<<endl;
//        if(leapYear()){
//            cout<<"It's leapyear, February is allowed to set to 29"<<endl;
//        }
        cout<<"Number of days in this month is: "<<numDay()<<endl;
        }
    else
        cout<<"invalid"<<','<<year<<')'<<endl;
//Display number of days passed in the year
    cout<<"Number of days passed is: "<<dayPass()<<endl;
    

    
}

#endif /* Date_h */
