//
// Created by xurui on 2021/8/6.
//

#include "game.h"

int game::counter = 0;

const string &game::getGameName() const {
    return game_name;
}

void game::setGameName(const string &gameName) {
    game_name = gameName;
}

unsigned int game::getMaxPlayers() const {
    return max_players;
}

void game::setMaxPlayers(unsigned int maxPlayers) {
    max_players = maxPlayers;
}


int game::getSerialNumber() const {
    return serial_number;
}

game::game(const string &gameName, unsigned int maxPlayers) : game_name(gameName), max_players(maxPlayers) {
    serial_number = ++counter;
}

void game::toString() {
    cout << "test" <<endl;
}

game::~game() {

}


int card_game::getCardsNumber() const {
    return cards_number;
}

void card_game::setCardsNumber(int cardsNumber) {
    cards_number = cardsNumber;
}


void card_game::toString() {
    // Poker(4 players), has 52 cards
    cout << "Card game:  " << getSerialNumber() <<"." <<  getGameName() << "(" << getMaxPlayers() << "), " << "has " << getCardsNumber() <<" cards" << endl;
}

card_game::card_game(const string &gameName, unsigned int maxPlayers, int cardsNumber) : game(gameName, maxPlayers),
                                                                                         cards_number(cardsNumber) {}

card_game::~card_game() {

}

const string &board_game::getPublisher() const {
    return publisher;
}

void board_game::setPublisher(const string &publisher) {
    board_game::publisher = publisher;
}

const vector<game_expansion> &board_game::getDlc() const {
    return dlc;
}

void board_game::setDlc(const vector<game_expansion> &dlc) {
    board_game::dlc = dlc;
}

void board_game::toString() {
    cout << "Board game:  " << getSerialNumber() <<"." << getGameName() << "(" << getMaxPlayers() << " players), " << "published by " << getPublisher() << endl;
    cout << "    Expansions:" << endl;
    for (auto each_dlc : dlc){
        each_dlc.toString();
    }
}

board_game::board_game(const string &gameName, unsigned int maxPlayers, const string &publisher) : game(gameName,
                                                                                                        maxPlayers),
                                                                                                   publisher(
                                                                                                           publisher) {}
void board_game::addDlc(const game_expansion &nw_dlc) {
    dlc.push_back(nw_dlc);
}

board_game::~board_game() {

}




