#ifndef SHAPE_H
#define SHAPE_H
#include <point.h>

class Shape{
protected:
    int color;
    Point p1,p2;

public:
    Shape(){
        color=0;
        p1.setpoint(0,0);
        p2.setpoint(0,0);
    }

    void setP1(int x,int y){
        p1.setpoint(x,y);
    }
    void setP2(int x,int y){
        p2.setpoint(x,y);
    }
    void returnline(){
        p1.returnpoint();
        p2.returnpoint();
    }
    int getP1x(){
        return p1.returnx();
    }
    int getP1y(){
        return p1.returny();
    }
    int getP2x(){
        return p2.returnx();
    }
    int getP2y(){
        return p2.returny();
    }

    void setColor(int x){
        color=x;
    }

    int getcolor(){
        return color;
    }

    void draw(){
        cout<<"specify the shape \n";
    }

};

#endif // SHAPE_H
