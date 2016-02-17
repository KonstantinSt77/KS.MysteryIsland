#ifndef TFIELD_H
#define TFIELD_H

namespace field
{

enum {unvisible, water, empty, lava, burned, swamp, coin1, coin2, coin3, coin4, coin5, ogre, shotgun, eagle,rope,shipRed, shipBlue};
//code cells - not open(0), water(1), empty(2), lava(3), burned(4), swamp(5), coin1(6),coin2(7),coin3(8),coin4(9),coin5(10), ogre(11), shotgun(12), eagle(13),rope(14), shipRedTeam(15), shipBlueTeam(16) 
class Tfield
{
	int n;
	int **fieldConst; // completely filled
	int **fieldVisible; //field,opened by the player
	int coins;
	bool turnOfFirst;
public:
	Tfield();
	~Tfield();
	void newField(); //method of generation gamefield 
	int** getFieldVisible();
	int** getFieldConst();
	void doVisible(int,int);
	bool getTurnOfFirst();
	void changeTurn();
	int getFieldPlace(int i, int j);
	void changeField(int i_, int j_, int type_);
	int getCoins();
};
}//namespace field
#endif
