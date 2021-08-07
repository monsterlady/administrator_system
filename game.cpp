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

void board_game::toString() {
    cout << "Board game:  " << getSerialNumber() <<"." << getGameName() << "(" << getMaxPlayers() << " players), " << "published by " << getPublisher() << endl;
    cout << "    Expansions:" << endl;
    for (auto each_dlc : dlc){
        each_dlc->toString();
    }
}

board_game::board_game(const string &gameName, unsigned int maxPlayers, const string &publisher) : game(gameName,
                                                                                                        maxPlayers),
                                                                                                   publisher(
                                                                                                           publisher) {}

board_game::~board_game() {

}

void board_game::removeDlc_by_name(const string &dlc_name) {
    for(auto each_dlc : dlc){
        if((each_dlc->getName().compare(dlc_name)) == 0){
            dlc.erase(remove(dlc.begin(), dlc.end(), each_dlc), dlc.end());
        }
    }
}

void board_game::addDlc(game_expansion *nw_dlc) {
   dlc.push_back(nw_dlc);
}






