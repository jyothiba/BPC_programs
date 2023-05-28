#include<iostream>

class Game{
    public:
    void cod() {
    std::cout  << "call of duty"  << std::endl;
    }
};
class Coc : public Game {
public:
    void pubg() {
        std::cout << "player unkown battle ground" << std::endl;
    }
};

int main() {
    Coc coc;
    coc.cod();
    coc.pubg();

    return 0;

}