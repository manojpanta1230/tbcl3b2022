#include <iostream>
using namespace std;
class Circle{
    private:
        int Area;
        double  radius;
        float pi;
    public:
        inline void setRadius(int r){
            radius=r;}
        int getRadius(){
            return radius;}
        int getArea(){
            pi=3.14;
            return (Area=pi*radius *radius);
        }
};

int main(){
    Circle  m2;
    m2.setRadius(50);
    cout<<"Area of Circle is:"<<m2.getArea();
    return 0;
    }

