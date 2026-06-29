#include "DaveTheDiver.h"
#include <iostream>

using namespace std;

DaveTheDiver::DaveTheDiver(string name, int id, double price)
: Game(name, id, price){
    rating = 0;
}

void DaveTheDiver::buy(){
    cout << name << " bought successfully." << endl;
}

void DaveTheDiver::play(){
    cout << "Launching Dave the Diver..." << endl;
}

void DaveTheDiver::rate(int score){
    rating = score;
    cout << "Rating saved: " << rating << endl;
}

void DaveTheDiver::showInfo() const{
    Game::showInfo();
    cout << "Rating: " << rating << endl;
}