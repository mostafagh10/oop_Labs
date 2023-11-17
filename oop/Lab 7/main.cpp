#include <iostream>
#include <point.h>
#include <shape.h>
#include <circle.h>
#include <line.h>
#include <rectang.h>
using namespace std;
istream & operator >> (istream &in,  Line &l)
{
    cout << "Enter point 1 : ";
    int x1,y1,x2,y2,co;
    in >> x1;
    in >> y1;
    cout << "Enter point 2 : ";
    in >> x2;
    in >> y2;
    cout << "Enter color number : ";
    in >> co;
    l.setP1(x1,y1);
    l.setP2(x2,y2);
    l.setColor(co);
    return in;
}

istream & operator >> (istream &in,  Rectang &r)
{
    cout << "Enter point 1 : ";
    int x1,y1,x2,y2,co;
    in >> x1;
    in >> y1;
    cout << "Enter point 2 : ";
    in >> x2;
    in >> y2;
    cout << "Enter color number : ";
    in >> co;
    r.setP1(x1,y1);
    r.setP2(x2,y2);
    r.setColor(co);
    return in;
}

istream & operator >> (istream &in,  Circle &c)
{
    cout << "Enter point 1 : ";
    int x1,y1,r,co;
    in >> x1;
    in >> y1;
    cout << "Enter radius : ";
    in >> r;
    cout << "Enter color number : ";
    in >> co;
    c.setP1(x1,y1);
    c.setRadius(r);
    c.setColor(co);
    return in;
}

int main()
{
    int n;
    cout<<"enter the number of shapes : ";
    cin>>n;
    Shape sh;
    int i=0;
    while(i<n){
    int s;
    cout<<"circle 0\nrectangle 1\nline 2\n";
    cin>>s;
    if(s > 2 || s<0){
        cout<<"enter valid option\n";
        cout<<"------------------\n";
        i=i;
    }else{
    if(s == 2){
    Line * l = new Line();
    cin >> *l;
    sh.addShape(l);
    }else if(s == 1){
    Rectang * r1 = new Rectang();
    cin >> *r1;
    sh.addShape(r1);
    }else if(s == 0){
    Circle * c = new Circle();
    cin>>*c;
    sh.addShape(c);
    }
    i++;
    }

    }

    initwindow(650,400);
    sh.drawn(n);
    getch();

    return 0;
}
