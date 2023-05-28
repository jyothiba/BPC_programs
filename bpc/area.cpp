#include<iostream>
#include<string>
#define pi 3.14

using namespace std;
class Area{
    int l,b,r,result;
    public:
    Area(int len, int breadth, int radius){
        l=len, b=breadth, r=radius;
    }
    void areaRectangle(){
        cout << "the area of rectangle:" << l*b <<endl;
    }
    void areaCricle(){
        result=pi*r*r;
        cout << "the area of circle :" << result <<endl;
    }
    
};
int main(){
    Area obj(7,8,9);
    obj.areaRectangle();
    obj.areaCricle();
    return 0;
}