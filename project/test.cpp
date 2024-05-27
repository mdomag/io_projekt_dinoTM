#include "Bot.h"
#include "Character.h"
#include "CharacterDataBase.h"
#include "Fight.h"
#include "FightMenu.h"
#include "Leaderboard.h"
#include "LeaderboardMenu.h"
#include "LoginMenu.h"
#include "Player.h"
#include "PlayerDataBase.h"
#include "Shop.h"
#include "ShopMenu.h"
#include "Team.h"
#include "TeamMenu.h"

#include <iostream>

int main()
{
    Bot* bot = new Bot(Team("dipka"));
    printf("attack: %d victim: %d\n", bot->randomizeAttacker(), bot->randomizeVictim());
    Team* team = new Team("dupka i uzpka");
    //Character(int i, int h, string n, string c, int l, int d): id(i), hp(h), name(n), code(c), level(l), dmg(d) {}
    Character* dino = new Character(11, 100, "dinozaur", "dafetr", 10000, 50);
    dino->showInfo();
    CharacterDataBase* charactersDB = new CharacterDataBase();
    vector<Character> charactersVector = charactersDB->characters;
    for(Character c: charactersVector){
        c.showInfo();
    }
    Fight* fight = new Fight();
    // Player(int i, string l, string p, string n, vector<Character> unlockedChar, vector<Team> t, int lp, int c) : id(i), login(l), password(p),
    // nick(n), unlockedCharacters(unlockedChar), teams(t), leaderboardPoints(lp), coins(c) {}
    Player* player = new Player(1, "skskkd", "haslo", "nick", charactersVector, {}, 11, 1000000);
    player->showCharacters();
    PlayerDataBase* playerDB = new PlayerDataBase();
    playerDB->addPlayer(player);
    vector<Player*> players = playerDB->getPlayers();
    for(auto player: players) {
        player->showInfo();
    }
    Shop* shop = new Shop();
    TeamMenu* teamMenu = new TeamMenu();

    return 0;
}
