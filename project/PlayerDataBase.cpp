#include "PlayerDataBase.h"
#include "Player.h"
#include <iostream>
#include <string>

Player* PlayerDataBase::showMenu()
{
    cout << "do you want to register [0] or login [1]?" << endl;
    int answer;
    cin >> answer;
    cin.ignore();
    Player* currentPlayer = nullptr;
    if (!answer) { // Register
        currentPlayer = registerPlayer();
        addPlayer(currentPlayer);
        cout << "registration successful\n";
    } else {
        currentPlayer = login();
        while (currentPlayer == nullptr) {
            currentPlayer = login();
        }
        cout << "you are now logged in";
    }
    return currentPlayer;
}

bool PlayerDataBase::checkUserExists(string nick)
{
    for (auto player : players) {
        if (player->nick == nick) {
            return true;
        }
    }
    return false;
}

Player* PlayerDataBase::registerPlayer()
{
    string nick;
    string password;
    string password_check;
    cout << "enter nick: ";
    getline(cin, nick);
    while (checkUserExists(nick)) {
        cout << "user with this nick already exists" << endl;
        cout << "enter nick: ";
        getline(cin, nick);
    }
    cout << "enter password: ";
    getline(cin, password);
    cout << "repeat password: ";
    getline(cin, password_check);
    cout << password << " " << password_check << endl;
    while (password!= password_check) {
        cout << "passwords don't match!" << endl;
        cout << "enter password: ";
        getline(cin, password);
        cout << "repeat password: ";
        getline(cin, password_check);
    }
    return new Player(players.size(), password, nick);
}

void PlayerDataBase::addPlayer(Player* player) {
    players.push_back(player);
}

Player* PlayerDataBase::login() {
    string nick;
    string password;
    cout << "enter nick: ";
    getline(cin, nick);
    while (!checkUserExists(nick)) {
        cout << "Wrong nick" << endl;
        cout << "enter nick: ";
        getline(cin, nick);
    }
    cout << "enter password: ";
    getline(cin, password);
    return checkPassword(nick, password);
}

Player* PlayerDataBase::checkPassword(string nick, string password) {
    for (auto player : players) {
        if (player->nick == nick && player->password == password) {
            return player;
        }
    }
    return nullptr;
}

vector<Player*> PlayerDataBase::getPlayers() {
    return players;
}
