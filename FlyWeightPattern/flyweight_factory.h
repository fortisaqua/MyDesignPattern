//
// Created by fortis on 2018/11/3.
//

#ifndef FLYWEIGHTPATTERN_FLYWEIGHT_FACTORY_H
#define FLYWEIGHTPATTERN_FLYWEIGHT_FACTORY_H

#include "concrete_flyweight.h"
#include <map>
using namespace std;

class PlayerFactory{
public:
    static IPlayer* getPlayer(string type){
        IPlayer *p = NULL;
        if(m_map.find(type) != m_map.end()){
            p = m_map[type];
        }
        else{
            if(type == "T"){
                cout << "Terrorist Created" << endl;
                p = new Terrorist();
            }
            else{
                if(type == "CT"){
                    cout << "Counter Terrorist created" << endl;
                    p = new CounterTerrorist();
                }
                else{
                    cout << "Unexpected code : " << type << endl;
                }
            }
            m_map.insert(make_pair(type, p));
        }
        return p;
    }

private:
    static std::map<std::string, IPlayer*> m_map;
};

#endif //FLYWEIGHTPATTERN_FLYWEIGHT_FACTORY_H
