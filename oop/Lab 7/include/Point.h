#include <iostream>
#ifndef POINT_H
#define POINT_H
using namespace std;

class Point{
    int x;
    int y;
public:
    Point(){
        x=0;
        y=0;
    }
    void setx(int x2){
        x=x2;
    }
    void sety(int y2){
        y=y2;
    }
    void setpoint(int x2,int y2){
        x=x2;
        y=y2;
    }
    void returnpoint(){
        cout<<"("<<x<<","<<y<<")"<<endl;
    }
    int returnx(){
        return x;
    }
     int returny(){
        return y;
    }
};

#endif // POINT_H
