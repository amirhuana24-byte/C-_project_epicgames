#include "Game.h"
#include <iostream>
using namespace std;

Game::Game(string name, int id, double price){
    this->name = name;
    this->id = id;
    this->price = price;
}

string Game::getName() const { return name; }
int Game::getId() const { return id; }
double Game::getPrice() const { return price; }

void Game::showInfo() const{
    cout << "Name: " << name << endl;
    cout << "ID: " << id << endl;
    cout << "Price: " << price << endl;
}