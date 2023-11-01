#include <iostream>
#include <vector>
using namespace std;
class Player{
public:
   std::string name;
   int health;
   int xp;

  void talk(std::string);
   bool is_dead();
};

int main(){

Player player1;
Player player2;

Player player3;
// array of objects
//Player players[30]{izz,izzing};
// vector <Player> players  {};
// players.push_back(player1);
// players.push_back(player2);

// players.push_back(player3);
Player *enemy {nullptr};
enemy =  new Player;
//players.push_back(*enemy);
player1.name =  "Venu";
enemy -> name = "no one ";

cout << player1.name << endl;
cout << enemy->name << endl;

delete enemy;
return 0;
}
 