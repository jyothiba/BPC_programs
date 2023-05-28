#include<iostream>

class Car {
    public:
        void color(){
            std::cout << "red" << std::endl;

        }
};

class Engine {
    public:
        void horsepower() {
            std::cout << " 800hp" << std::endl;
            
        }
};

class Mustang : public Car, public Engine {
    public:
        void name() {
            std::cout << " Hellcat " << std::endl;
            
        }
};

int main() {
    Mustang car;
    car.color();
    car.horsepower();
    car.name();
    return 0;

}
