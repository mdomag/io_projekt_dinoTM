#include "Login.h"

Player* Login::login() {
    string nick;
    string password;
    cout << "enter nick: ";
    getline(cin, nick);
    while (!playersDB->checkUserExists(nick)) {
        cout << "wrong nick" << endl;
        cout << "enter nick: ";
        getline(cin, nick);
    }
    cout << "enter password: ";
    getline(cin, password);
    return playersDB->checkPassword(nick, password);
}

Player* Login::registerPlayer() {
    string nick;
    string password;
    string password_check;
    cout << "enter nick: ";
    getline(cin, nick);
    while (playersDB->checkUserExists(nick)) {
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
    return new Player(playersDB->getPlayersSize(), password, nick);
}

Player* Login::showMenu() {
    cout << "[0] register\n[1] login\n[2] exit\n";
    int answer;
    cin >> answer;
    cin.ignore();
    if(answer == 2) {
        return nullptr;
    }
    Player* currentPlayer = nullptr;
    if (!answer) { // Register
        currentPlayer = registerPlayer();
        printf("adding current player to database...\n");
        currentPlayer->showInfo();
        playersDB->addPlayer(currentPlayer);
        cout << "registration successful\n";
    } else {
        currentPlayer = login();
        while (currentPlayer == nullptr) {
            currentPlayer = login();
        }
        cout << "you are now logged in" << endl;
    }
    currentPlayer->characterDB = charactersDB; //adding characterDB
    currentPlayer->playerDB = playersDB; //adding playerDB
    return currentPlayer;
}

