#pragma once

class IBuyable {
public:
    virtual void buy() = 0;
    virtual ~IBuyable() {}
};