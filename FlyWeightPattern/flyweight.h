//
// Created by fortis on 2018/11/3.
//

#ifndef FLYWEIGHTPATTERN_FLYWEIGHT_H
#define FLYWEIGHTPATTERN_FLYWEIGHT_H

#include <iostream>
#include <string>

class IPlayer{
public:
    virtual ~IPlayer() {}

    // allocate weapon
    // (outer state, need to change according to environment)
    virtual void assignWeapon(std::string weapon) = 0;

    // mission
    // (inner state, won't change with the environment changing)
    virtual void mission() = 0;

protected:
    std::string m_task;
    std::string m_weapon;
};

#endif //FLYWEIGHTPATTERN_FLYWEIGHT_H
