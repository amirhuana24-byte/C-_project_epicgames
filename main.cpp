#include <iostream>
#include <vector>

#include "Game.h"
#include "GTA.h"
#include "Deltarune.h"
#include "PapersPlease.h"

#include "IBuyable.h"
#include "IPlayable.h"
#include "IRateable.h"

using namespace std;

vector<Game*> games;

int main(){
    int choice;

    do{
        cout << "\n=== EPIC GAMES STORE ===\n";
        cout << "1. Add Game\n";
        cout << "2. Show Games\n";
        cout << "3. Interact\n";
        cout << "4. Exit\n";
        cout << "Choice: ";
        cin >> choice;

        if(choice == 1){
            int type, id;
            double price;

            cout << "1-GTA 2-Deltarune 3-PapersPlease\n";
            cin >> type;

            cout << "ID: ";
            cin >> id;

            cout << "Price: ";
            cin >> price;

            if(type == 1)
                games.push_back(new GTA("GTA", id, price));
            else if(type == 2)
                games.push_back(new Deltarune("Deltarune", id, price));
            else
                games.push_back(new PapersPlease("Papers Please", id, price));
        }

        else if(choice == 2){
            for(Game* g : games){
                g->showInfo();
                cout << "-----------------\n";
            }
        }

        else if(choice == 3){
            int id;
            cout << "Enter game id: ";
            cin >> id;

            for(Game* g : games){
                if(g->getId() == id){

                    int c;
                    cout << "1 Buy 2 Play 3 Rate\n";
                    cin >> c;

                    if(c == 1){
                        IBuyable* b = dynamic_cast<IBuyable*>(g);
                        if(b) b->buy();
                    }
                    else if(c == 2){
                        IPlayable* p = dynamic_cast<IPlayable*>(g);
                        if(p) p->play();
                    }
                    else if(c == 3){
                        IRateable* r = dynamic_cast<IRateable*>(g);
                        if(r){
                            int score;
                            cout << "Enter rating: ";
                            cin >> score;
                            r->rate(score);
                        }
                    }
                }
            }
        }

    } while(choice != 4);


}