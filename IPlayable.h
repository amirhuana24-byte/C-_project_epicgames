#pragma once

class IPlayable {
public:
    virtual void play() = 0;
    virtual ~IPlayable() {}
};