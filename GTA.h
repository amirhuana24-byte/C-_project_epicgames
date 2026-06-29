#pragma once
#include "Game.h"
#include "IBuyable.h"
#include "IPlayable.h"
#include "IRateable.h"

class GTA : public Game, public IBuyable, public IPlayable, public IRateable {
private:
    int rating;

public:
    GTA(string name, int id, double price);

    void buy() override;
    void play() override;
    void rate(int score) override;
    void showInfo() const override;
};