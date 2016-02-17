#include "stdafx.h"

using namespace field;
using namespace std;

void Tfield::changeTurn()
{
	this->turnOfFirst = !this->turnOfFirst;
}
bool Tfield::getTurnOfFirst()
{
	return this->turnOfFirst;
}
Tfield::Tfield()
{
	srand(time(NULL));
	this->coins = 35;
	this->n = 12;
	this->turnOfFirst = true;
	this->fieldConst = new int*[n];
	this->fieldVisible = new int*[n];
	for (int i=0; i<n; i++)
	{
		this->fieldConst[i] = new int[n];
		this->fieldVisible[i] = new int[n];
	}
	for (int i=0; i<n; i++)
		for (int j=0; j<n; j++)
			this->fieldVisible[i][j] = field::unvisible;
	for (int i=0; i<n; i++)
	{
		this->fieldConst[0][i] = field::water;
		this->fieldConst[i][0] = field::water;
		this->fieldConst[i][n-1] = field::water;
		this->fieldConst[n-1][i] = field::water;
	}
	this->fieldConst[0][this->n/2] = field::shipBlue;
	this->fieldConst[this->n-1][this->n/2] = field::shipRed;
	//reserved place for ship landing
	this->fieldConst[1][this->n/2] = field::water;
	this->fieldConst[this->n-2][this->n/2] = field::water;
	for (int i = 1; i< n-1; i++)
		for (int j = 1; j< n-1; j++)
			this->fieldConst[i][j] = field::empty;
	for (int i=0; i<n; i++)
	{
		this->fieldVisible[0][i] =this->fieldConst[0][i];
		this->fieldVisible[i][0] = this->fieldConst[i][0];
		this->fieldVisible[i][n-1] = this->fieldConst[i][n-1];
		this->fieldVisible[n-1][i] = this->fieldConst[n-1][i];
	}

	//generation burned ground and lava
	int lavaR = rand()%(n-4)+2;
	int lavaM = rand()%(n-4)+2;
	for (int i=lavaR-1; i<=lavaR+1; i++)
	for (int j=lavaM-1; j<=lavaM+1; j++)
	this->fieldConst[i][j] = field::burned;
	this->fieldConst[lavaR][lavaM] = field::lava;
	//generation burned ground and lava
	int lavaX = rand()%(n-4)+2;
	int lavaY = rand()%(n-4)+2;
	for (int i=lavaX-1; i<=lavaX+1; i++)
	for (int j=lavaY-1; j<=lavaY+1; j++)
	this->fieldConst[i][j] = field::burned;
	this->fieldConst[lavaX][lavaY] = field::lava;
	//generation swamp
	int numberOfSwamps = 2;
	while(numberOfSwamps>0)
	{
		int swampX = rand()%(n-2)+1;
		int swampY = rand()%(n-2)+1;
		if (this->fieldConst[swampX][swampY]==field::empty)
		{
			this->fieldConst[swampX][swampY] = field::swamp;
			numberOfSwamps--;
		}
	}
	//generation coin1
	int numberOfCoins1 = 5;
	while(numberOfCoins1>0)
	{
		int coinX = rand()%(n-2)+1;
		int coinY = rand()%(n-2)+1;
		if (this->fieldConst[coinX][coinY]==field::empty)
		{
			this->fieldConst[coinX][coinY] = field::coin1;
			numberOfCoins1--;
		}
	}
	//generation coin2
	int numberOfCoins2 = 4;
	while(numberOfCoins2>0)
	{
		int coinX = rand()%(n-2)+1;
		int coinY = rand()%(n-2)+1;
		if (this->fieldConst[coinX][coinY]==field::empty)
		{
			this->fieldConst[coinX][coinY] = field::coin2;
			numberOfCoins2--;
		}
	}
	//generation coin3
	int numberOfCoins3 = 3;
	while(numberOfCoins3>0)
	{
		int coinX = rand()%(n-2)+1;
		int coinY = rand()%(n-2)+1;
		if (this->fieldConst[coinX][coinY]==field::empty)
		{
			this->fieldConst[coinX][coinY] = field::coin3;
			numberOfCoins3--;
		}
	}
	//generation coin4
	int numberOfCoins4 = 2;
	while(numberOfCoins4>0)
	{
		int coinX = rand()%(n-2)+1;
		int coinY = rand()%(n-2)+1;
		if (this->fieldConst[coinX][coinY]==field::empty)
		{
			this->fieldConst[coinX][coinY] = field::coin4;
			numberOfCoins4--;
		}
	}
    //generation coin5
	int numberOfCoins5 = 1;
	while(numberOfCoins5>0)
	{
		int coinX = rand()%(n-2)+1;
		int coinY = rand()%(n-2)+1;
		if (this->fieldConst[coinX][coinY]==field::empty)
		{
			this->fieldConst[coinX][coinY] = field::coin5;
			numberOfCoins5--;
		}
	}
	//generation ogre
	int numberOfogre = 2;
	while(numberOfogre>0)
	{
		int ogreX = rand()%(n-2)+1;
		int ogreY = rand()%(n-2)+1;
		if (this->fieldConst[ogreX][ogreY]==field::empty)
		{
			this->fieldConst[ogreX][ogreY] = field::ogre;
			numberOfogre--;
		}
	}	
	//generation shotgun
	int numberOfshotgun = 3;
	while(numberOfshotgun>0)
	{
		int shotgunX = rand()%(n-2)+1;
		int shotgunY = rand()%(n-2)+1;
		if (this->fieldConst[shotgunX][shotgunY]==field::empty)
		{
			this->fieldConst[shotgunX][shotgunY] = field::shotgun;
			numberOfshotgun--;
		}
	}	
	//generation eagle
	int numberOfeagle = 1;
	while(numberOfeagle>0)
	{
		int eagleX = rand()%(n-2)+1;
		int eagleY = rand()%(n-2)+1;
		if (this->fieldConst[eagleX][eagleY]==field::empty)
		{
			this->fieldConst[eagleX][eagleY] = field::eagle;
			numberOfeagle--;
		}
	}	
	//generation rope
	int numberOfrope = 4;
	while(numberOfrope>0)
	{
		int ropeX = rand()%(n-2)+1;
		int ropeY = rand()%(n-2)+1;
		if (this->fieldConst[ropeX][ropeY]==field::empty)
		{
			this->fieldConst[ropeX][ropeY] = field::rope;
			numberOfrope--;
		}
	}		
	//empty cells for ship landing
	this->fieldConst[1][this->n/2] = field::empty;
	this->fieldConst[this->n-2][this->n/2] = field::empty;
}
//builder
Tfield::~Tfield()
{
	for (int i=0; i<n; i++)
	{
		delete[]this->fieldConst[i];
		delete[]this->fieldVisible[i];
	}
	delete[]this->fieldConst;
	delete[]this->fieldVisible;
}
int** Tfield::getFieldVisible()
{
	return this->fieldVisible;
}
int** Tfield::getFieldConst()
{
	return this->fieldConst;
}
void Tfield::doVisible(int x_,int y_)
{
	if (x_<n && y_<n)
	{
		fieldVisible[y_][x_] = fieldConst[y_][x_];
	}
}
int Tfield::getFieldPlace(int i, int j)
{
	return this->fieldConst[i][j];
}
int Tfield::getCoins()
{
	return this->coins;
}
void Tfield::changeField(int i_, int j_, int type_)
{
	switch (type_)
	{
	case field::ogre:
		{
			this->fieldConst[i_][j_] = field::empty;
			break;
		}
	case field::shotgun:
		{
			this->fieldConst[i_][j_] = field::empty;
			break;
		}
	case field::eagle:
		{
			this->fieldConst[i_][j_] = field::empty;
			this->coins--;
			break;
		}
case field::coin1:
		{
			this->fieldConst[i_][j_] = field::empty;
			this->coins--;
			break;
		}
		case field::coin2:
		{
			this->fieldConst[i_][j_] = field::empty;
			this->coins--;
			break;
		}
		case field::coin3:
		{
			this->fieldConst[i_][j_] = field::empty;
			this->coins--;
			break;
		}
		case field::coin4:
		{
			this->fieldConst[i_][j_] = field::empty;
			this->coins--;
			break;
		}
		case field::coin5:
		{
			this->fieldConst[i_][j_] = field::empty;
			this->coins--;
			break;
		}
	}
}

