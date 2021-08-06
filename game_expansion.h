//
// Created by xurui on 2021/8/6.
//

#ifndef GAME_ADMINISTRATION_SYSTEM_GAME_EXPANSION_H
#define GAME_ADMINISTRATION_SYSTEM_GAME_EXPANSION_H
#include "iostream"
using namespace std;

class game_expansion {
private:
    string name;
    bool playable_standalone;

public:

    const string &getName() const;

    bool isPlayableStandalone() const;

    game_expansion(const string &name, bool playableStandalone);

    void toString();

};


#endif //GAME_ADMINISTRATION_SYSTEM_GAME_EXPANSION_H
