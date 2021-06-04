#include "tic_tac_toe.h"

class Player
{
	public:
		Player();
		void setName(string nameIn);
		string getName(void);
		
	private:
		string name;
		int turns;
};


Player::Player()
{
	
	
}

void setName(string nameIn)
{
	name = nameIn;
}


string getName(void)
{
	return name;
}
