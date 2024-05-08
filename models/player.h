#ifndef PLAYER_H
#define PLAYER_H
#include"string"
#include <vector>
#include "footballer.h"
#include "user.h"
#include "../Structs/PlayerStruct.cpp"
#include "../Structs/FootballerStruct.cpp"
using namespace std;
class Player :public User {
private:
    int PlayerID ;
    static int idCounter;
    int budget;
    string fantasyTeamName;
    int gameWeekPoints;
    string favleague;
    vector<Footballer> fantasyTeamFootballers;
public:
    Player(string fantasyTeamName);
    ~Player();
    void setBudget(int budget);
    int getBudget();
    int getId();
    vector<Footballer> getFantasyTeamFootballers();
    void setGameWeekPoints();
    int getGameWeekPoints();
    void setPlayer(Footballer footballer);
    void updateTeam(Footballer oldFootballerId , Footballer newFootballerId);

};

#endif // PLAYER_H
