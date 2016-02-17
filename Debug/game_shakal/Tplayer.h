#ifndef TPLAYER_H
#define TPLAYER_H

namespace player
{
struct Tcharacter
{
	int i;
	int j;
	bool isLive;
	bool inSwamp;
	bool inPit;
	bool hasShotgun;
	bool hasCar;
	bool hasParachute;
	bool hasRope;
	bool onShip;
	int coins;
};
class Tplayer
{
	Tcharacter arrayChar[3];
	int characActive;
	int coins;
	int iShip;
	int jShip;
	int changeField;
public:
	Tplayer(int iShip_, int jShip_);
	void doActive(int i_, int j_);
	bool moveCharacter(int i_, int j_, int place);
	int getCharacActive();
	bool isCharacActive();
	int getCoins();
	void setCharacActive(int c_);
	int getCharacterI(int n_);
	int getCharacterJ(int n_);
	void killTcharacter();
	void killTcharacter(int n_);
	bool getCharacterLive(int n_);
	int getChangeField();
	void setChangeField(int chF_);
	bool killEnemy(player::Tcharacter enemy);
	bool characterHasShotgun(int n_);
	bool characterHasRope(int n_);
	player::Tcharacter getCharacter(int n_);
};//class
}//namespace
#endif