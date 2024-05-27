# io_projekt_dinoTM

to run in vs code 

`` g++ -o main main.cpp Bot.cpp Character.cpp Fight.cpp Leaderboard.cpp Player.cpp PlayerDataBase.cpp Shop.cpp Team.cpp TeamMenu.cpp Login.cpp``

`` ./main ``

(................)

```Java
//TODO
```
(stink javovy)
DODAC METODE UPDATEFROMPLAYERDB() DO LEADERBOARD PO KAZDEJ WALCE
>> na razie zrobione jest tylko logowanie/rejestracja i zapelniona characterDB

1. uzupelnienie randomowymi danymi PlayerDB -> przy czym prosze o tworzenie tym konstruktorem: 
   ```C++
   Player(int i, string p, string n, vector<Character> unlockedChar, vector<Team> t, int lp, int c) : id(i), password(p),
    nick(n), unlockedCharacters(unlockedChar), teams(t), leaderboardPoints(lp), coins(c) {}
    ```
    zeby byly druzyny i w ogole pelniejsze profile
2. trzeba jakos zrownowazyc postacie w characterDB zeby sie dalo jakies sensowne teamy robic
3. Team napisac metody (chyba selfexplainatordjfj)
4. TeamMenu napisac metody
5. zaimplementowac ShopMenu -> Shop ->
    tutaj dwie opcje dla metody generateInventory():
    1. odswiezanie za kazdym wejsciem do sklepu
    2. tworzenie inventory przy tworzeniu obiektu ShopMenu
6. LeaderBoard -> implementacje metod
   1. metoda showInfo() ma wywolywac metode showTop() i dodatkowo zwwracac pozycje playera w osobnej linicje (najlpeiej na poczatku)
   2. trzeba zaimplemetnowac sort no to prosto vectora z DB posortowac wg rankingu
7. implementacja Fight:
   1. to ma dzialac tak ze showMenu najpier wyweitla rozne info i wyswietla druzyny displayPlayersTeams() i one sa ponumerowane, user wpisuje numer duryzny ktora wybiera i to jest przekazywane do startFight
   2. trzeba skopiowac druzyne playera zeby nie modyfikowac tej oryginalnej !!!
   3. w starFight jest caly przebieg gry
      1. tutaj najpierw generuje sie bota (jak? tbh mozna i randomowo bololo tylko zeby byla ta sama liczba co w wybranej druzynie)
      2. mozna wywalic nick bota albo vectora z nickami i losowac
      3. 

