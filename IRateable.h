#pragma once

class IRateable {
public:
    virtual void rate(int score) = 0;
    virtual ~IRateable() {}
};