#include<iostream>
using namespace std;
class c_polygon{
    protected:
    float width, height;
    public:
    c_polygon(float w, float h): width(w), height(h){}
    virtual float area(){
        return 0.0;
    }
};
class c_rectangle: public c_polygon{
    public:
    c_rectangle(float w,float h): c_polygon(w,h){}
    float area(){
        return width*height;
    }
};

/* 
Follow me on:
instagram - instagram.com/rajeev_inr
twitter - twitter.com/rajeev_inr
linkedin - linkedin.com/in/rajeev-inr
facebook - facebook.com/rajeev.inr
*/


class c_triangle: public c_polygon{
    public:
    c_triangle(float w,float h): c_polygon(w,h){}
    float area(){
        return (width*height)/2;
    }
};
int main(){
    c_polygon *shape;
    c_rectangle rect(3,4);
    c_triangle tri(3,4);
    shape = &rect;
    cout<<"Rectangle area: "<<shape->area()<<endl;
    shape = &tri;
    cout<<"Triangle area: "<<shape->area()<<endl;
    return 0;
}