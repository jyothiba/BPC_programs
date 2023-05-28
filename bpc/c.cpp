#include<iostream>

class exercise {
    public:
        void running(){
            std::cout << "1km run " << std::endl;

        }
};

class eat {
    public:
        void eating(){
            std::cout << " eat 3 times a day" << std::endl;
            
        }
};

class Body: public exercise, public eat {
    public:
        void body(){
            std::cout << " good health" << std::endl;
            
        }
};

int main() {
    Body body;
    body.running();
    body.eating();
    body.body();
    return 0;

}
