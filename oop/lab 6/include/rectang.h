#ifndef RECTANG_H
#define RECTANG_H
#include <shape.h>
#include <graphics.h>

class Rectang : public Shape{
public:
    Rectang(){
        color=0;
        p1.setpoint(0,0);
        p2.setpoint(0,0);
    }

    void draw(){
        setcolor(color);
        rectangle(p1.returnx(),p1.returny(),p2.returnx(),p2.returny());
    }
};

#endif // RECTANG_H
