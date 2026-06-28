#pragma once
#include <string>
using namespace std;

class Game {
protected:
    string name;
    int id;
    double price;

public:
    Game(string name, int id, double price);

    string getName() const;
    int getId() const;
    double getPrice() const;

    virtual void showInfo() const;
    virtual ~Game() {}
};