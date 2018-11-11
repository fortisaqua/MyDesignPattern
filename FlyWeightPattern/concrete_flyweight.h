//
// Created by fortis on 2018/11/3.
//

#ifndef FLYWEIGHTPATTERN_CONCRETE_FLYWEIGHT_H
#define FLYWEIGHTPATTERN_CONCRETE_FLYWEIGHT_H

#include "flyweight.h"

// Terrorist
class Terrorist: public IPlayer{
public:
    Terrorist(){
        m_task = "Plan a bomb";
    }

    void assignWeapon(std::string weapon) override{
        m_weapon = weapon;
    }

    void mission() override{
        std::cout << "Terrorist with weapon " + m_weapon + "," + " Task is " + m_task << std::endl;
    }
};


// CounterTerrorist
class CounterTerrorist:public IPlayer{
public:
    CounterTerrorist(){
        m_task = "Diffuse bomb";
    }

    void assignWeapon(std::string weapon) override{
        m_weapon = weapon;
    }

    void mission() override{
        std::cout << "Counter Terrorist with weapon " + m_weapon + "," + " Task is " + m_task << std::endl;
    }
};

#endif //FLYWEIGHTPATTERN_CONCRETE_FLYWEIGHT_H
