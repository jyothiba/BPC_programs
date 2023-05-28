#include<iostream>
using namespace std;

class Sum {
private:
    int n1,n2,sum;
public:

    void input() {
        cout << "Enter two numbers:";
        cin >> n1>>n2;
    }

    friend void add(Sum &t);

    void display() {
        cout << "sum is:" << sum;
    }
};

void add(Sum &s) {
    s.sum = s.n1 + s.n2;
}

int main() {

    Sum s;
    s.input();

    add(s);
    s.display();

    return 0;
}