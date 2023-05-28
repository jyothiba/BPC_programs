#include<iostream>
using namespace std;

class Number{
    
    public:
    int n1,n2;
    Number(int x, int y){
       
        n1=x;
        n2=y;
    }
    void large(){
        if(n1>n2)
        {
            cout << "n1 is largest" <<"=" << n1;


        }     
        else{
            cout << "n2 is largest" << "=" << n2;
        }       
    }
};
int main(){
    Number Number(8,7);
    Number.large();
    return 0;
}