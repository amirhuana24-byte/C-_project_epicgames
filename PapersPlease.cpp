#include "PapersPlease.h"
#include <iostream>
using namespace std;

PapersPlease::PapersPlease(string name, int id, double price)
    : Game(name, id, price), rating(0) {}

void PapersPlease::buy(){
    cout << name << " bought successfully\n";
}

void PapersPlease::play(){
    cout << "Playing Papers Please...\n";
}

void PapersPlease::rate(int score){
    rating = score;
}

void PapersPlease::showInfo() const{
    Game::showInfo();
    cout << "Rating: " << rating << endl;
}