#ifndef LINE_H
#define LINE_H
#include <shape.h>
#include <graphics.h>

class Line : public Shape{
public:
    Line(){
        color = 0;
        p1.setpoint(0,0);
        p2.setpoint(0,0);
    }

    void draw(){
        setcolor(color);
        line(p1.returnx(),p1.returny(),p2.returnx(),p2.returny());
    }
};

#endif // LINE_H
