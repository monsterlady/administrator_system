#include <iostream>
#include "io.h"
int main() {
    //init admin
    io admin;
    //game 1
    auto *game_1 = new board_game("Flash Point", 6, "999 games");
    game_1->addDlc(game_expansion("Dangerous Waters", false));
    // game 2
    auto *game_2 = new board_game("Ticket to Ride(", 5,"Days of Wonder");
    game_2->addDlc(game_expansion("Ticket to Ride Europe", true));
    game_2->addDlc(game_expansion("Ticket to Ride Map Collection - Nederland", false));
    game_2->addDlc(game_expansion("Ticket to Ride Map Collection - Asia", false));
    //add card games 3 & 4
    admin.add_game(game_1);
    admin.add_game(game_2);
    admin.add_game(new card_game("Poker",4,52));
    admin.add_game(new card_game("Codenames",8, 200));
    //overview
    admin.overview();
    //release ram
    delete game_2;
    delete game_1;
    return 0;
}
