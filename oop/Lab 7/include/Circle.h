#ifndef CIRCLE_H
#define CIRCLE_H
#include <shape.h>
#include <graphics.h>

class Circle : public Shape{
    int radius;
public:
    Circle(){
        p1.setpoint(0,0);
        radius=0;
    }
    void setRadius(int x){
        radius = x;
    }
     int getradius(){
        return radius;
    }

    void draw(){
        setcolor(color);
        circle(p1.returnx(),p1.returny(),radius);
    }

};

#endif // CIRCLE_H
