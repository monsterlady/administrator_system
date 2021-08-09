//
// Created by xurui on 2021/8/6.
//

#include "io.h"

void io::overview() {
    for (auto each_game : game_lib){
        each_game->toString();
    }
}

void io::add_game(game *nw_game) {
    if(find_game_by_serial_number(nw_game->getSerialNumber()) != nullptr){
        throw runtime_error("Game " + nw_game->getGameName() + " already exists!");
    }
    game_lib.push_back(nw_game);
}


void io::remove_game_by_serial_number(int serial_num) {
    for (auto each_game:game_lib) {
        if(each_game->getSerialNumber() == serial_num){
            game_lib.erase(remove(game_lib.begin(), game_lib.end(), each_game),game_lib.end());
        }
    }
}

game *io::find_game_by_serial_number(int serial_num) {
    for(auto each_game : game_lib){
        if(each_game->getSerialNumber() == serial_num){
            return each_game;
        }
    }
    return nullptr;
}



