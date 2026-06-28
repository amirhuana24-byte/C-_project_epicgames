#include "Deltarune.h"
#include <iostream>
using namespace std;

Deltarune::Deltarune(string name, int id, double price)
    : Game(name, id, price), rating(0) {}

void Deltarune::buy(){
    cout << name << " bought successfully\n";
}

void Deltarune::play(){
    cout << "Playing Deltarune...\n";
}

void Deltarune::rate(int score){
    rating = score;
}

void Deltarune::showInfo() const{
    Game::showInfo();
    cout << "Rating: " << rating << endl;
}