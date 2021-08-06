//
// Created by xurui on 2021/8/6.
//

#include "game_expansion.h"

game_expansion::game_expansion(const string &name, bool playableStandalone) : name(name),
                                                                              playable_standalone(playableStandalone) {}

void game_expansion::toString() {
    cout << "      " << getName() << (isPlayableStandalone() ? "(Can be played standalone)" : "" )<< endl;

}

const string &game_expansion::getName() const {
    return name;
}

bool game_expansion::isPlayableStandalone() const {
    return playable_standalone;
}
