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
    game_lib.push_back(nw_game);
}


void io::find_game_by_serial_number(const string &serial_num) {

}

void io::add_expansion(const game_expansion &ge, const string &serial_num) {

}

void io::remove_expansion(const game_expansion &ge, const string &serial_num) {

}

void io::remove_game_by_serial_number(int serial_num) {
    for (auto each_game:game_lib) {
        if(each_game->getSerialNumber() == serial_num){

        }
    }
}

