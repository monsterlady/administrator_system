//
// Created by xurui on 2021/8/6.
//

#ifndef GAME_ADMINISTRATION_SYSTEM_IO_H
#define GAME_ADMINISTRATION_SYSTEM_IO_H
#include "game.h"
#include "algorithm"

class io {
private:
    vector<game*> game_lib;

public:

    void overview();

    void add_game(game *nw_game);

    void remove_game_by_serial_number(int serial_num);

    game *find_game_by_serial_number(int serial_num);
};


#endif //GAME_ADMINISTRATION_SYSTEM_IO_H
