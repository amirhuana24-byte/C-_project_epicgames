#pragma once
#include "Game.h"
#include "../interfaces/IBuyable.h"
#include "../interfaces/IPlayable.h"
#include "../interfaces/IRateable.h"

class PapersPlease : public Game, public IBuyable, public IPlayable, public IRateable {
private:
    int rating;

public:
    PapersPlease(string name, int id, double price);

    void buy() override;
    void play() override;
    void rate(int score) override;
    void showInfo() const override;
};