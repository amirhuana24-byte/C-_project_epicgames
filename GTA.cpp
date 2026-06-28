#include "GTA.h"
#include <iostream>
using namespace std;

GTA::GTA(string name, int id, double price)
    : Game(name, id, price), rating(0) {}

void GTA::buy(){
    cout << name << " bought successfully\n";
}

void GTA::play(){
    cout << "Playing GTA...\n";
}

void GTA::rate(int score){
    rating = score;
}

void GTA::showInfo() const{
    Game::showInfo();
    cout << "Rating: " << rating << endl;
}