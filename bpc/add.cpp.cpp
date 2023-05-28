#include<iostream>

using namespace std;

class Sum{
    public:
    int num1;
    int num2;

    void printSum(Sum result){
        cout << "num1:" << result.num1 << endl;
        cout << "num2:" << result.num2 << endl;
        cout << "Addition of 2 nos :" << result.num1 + result.num2 <<endl;

    }
};
int main(){
    Sum myresult;
    myresult.num1=10;
    myresult.num2=20;
    myresult.printSum(myresult);
    return 0;



}