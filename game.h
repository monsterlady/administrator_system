//
// Created by xurui on 2021/8/6.
//

#ifndef GAME_ADMINISTRATION_SYSTEM_GAME_H
#define GAME_ADMINISTRATION_SYSTEM_GAME_H

#include <vector>
#include "iostream"
#include "algorithm"
#include "game_expansion.h"

using namespace std;

class game {
private:
    string game_name;
    unsigned max_players;
    int serial_number;
    static int counter;
public:
    virtual ~game();

    game(const string &gameName, unsigned int maxPlayers);

    const string &getGameName() const;

    void setGameName(const string &gameName);

    unsigned int getMaxPlayers() const;

    void setMaxPlayers(unsigned int maxPlayers);

    int getSerialNumber() const;

    virtual void toString();

};

class board_game: public game{
private:
    string publisher;
    vector<game_expansion*> dlc;

public:
    ~board_game() override;

    board_game(const string &gameName, unsigned int maxPlayers, const string &publisher);

    const string &getPublisher() const;

    void setPublisher(const string &publisher);

    void addDlc(game_expansion * nw_dlc);

    void removeDlc_by_name(const string &dlc_name);

    void toString();
};

class card_game:public game{
private:
    int cards_number;

public:

    ~card_game() override;

    card_game(const string &gameName, unsigned int maxPlayers, int cardsNumber);

    int getCardsNumber() const;

    void setCardsNumber(int cardsNumber);

    void toString();

};

#endif //GAME_ADMINISTRATION_SYSTEM_GAME_H
