#include "stdafx.h"
namespace player
{
	int myAbs(int n)
	{
		return (n>0)?n:-1*n;
	}
	int Tplayer::getCharacterI(int n_)
	{
		return this->arrayChar[n_].i;
	}
	int Tplayer::getCharacterJ(int n_)
	{
		return this->arrayChar[n_].j;
	}
	void Tplayer::setCharacActive(int c_)
	{
		this->characActive = c_;
	}
	bool Tplayer::moveCharacter(int i_, int j_, int fieldPlace_)
	{
		if (i_>=0 && i_<=12 && j_>=0 && j_<=12)
		{
			if (i_>= this->arrayChar[this->characActive].i-1 && i_<=this->arrayChar[this->characActive].i+1 &&
				j_>= this->arrayChar[this->characActive].j-1 && j_<=this->arrayChar[this->characActive].j+1)
			{
				this->arrayChar[this->characActive].i = i_;
				this->arrayChar[this->characActive].j = j_;
				switch (fieldPlace_ )
				{
				case field::lava:
					{
						this->arrayChar[this->characActive].isLive = false;
						break;
					}
				case field::ogre:
					{
						if (!this->arrayChar[this->characActive].hasShotgun)
						{
							this->arrayChar[this->characActive].isLive = false;
						}
						else
						{
							this->arrayChar[this->characActive].hasShotgun = false;
							this->changeField = field::ogre;
						}
						break;
					}
				case field::shotgun:
					{
						this->arrayChar[this->characActive].hasShotgun = true;
						this->changeField = field::shotgun;
						break;
					}
					case field::swamp:
					{
						if (!this->arrayChar[this->characActive].hasRope)
						{
							this->arrayChar[this->characActive].isLive = false;
						}
						else
						{
							this->arrayChar[this->characActive].hasRope = false;
							this->changeField = field::ogre;
						}
						break;
					}
				case field::rope:
					{
						this->arrayChar[this->characActive].hasRope = true;
						this->changeField = field::rope;
						break;
					}
				case field::eagle:
					{
						this->coins=coins+1;
						this->changeField = field::eagle;
						break;
					}
				case field::coin1:
					{
						this->coins=coins+1;
						this->changeField = field::coin1;
						break;
					}
				case field::coin2:
					{
						this->coins=coins+2;
						this->changeField = field::coin2;
						break;
					}
					case field::coin3:
					{
						this->coins=coins+3;
						this->changeField = field::coin3;
						break;
					}
					case field::coin4:
					{
						this->coins=coins+4;
						this->changeField = field::coin4;
						break;
					
					case field::coin5:
					{
						this->coins=coins+5;
						this->changeField = field::coin5;
						break;
					}
				}//switch (fieldPlace_ )
				return true;
			}
			}
		return false;
	}
	bool Tplayer::getCharacterLive(int n_)
	{
		return this->arrayChar[n_].isLive;
	}
	int Tplayer::getCharacActive()
	{
		return this->characActive;
	
	void Tplayer::doActive(int i_, int j_)
	{
		for (int i=0; i<3; i++)
			if (this->arrayChar[i].i == i_ && this->arrayChar[i].j == j_ && this->arrayChar[i].isLive)
			{
				this->characActive = i;
				break;
			}
	}
	bool Tplayer::isCharacActive()
	{
		if (this->characActive != -1)
		return true;
		return false;
	}
	Tplayer::Tplayer(int iShip_, int jShip_)
	{
		iShip = iShip_;
		jShip = jShip_;
		for (int i=0; i<3; i++)
		{
			arrayChar[i].i = iShip;
			arrayChar[i].j = jShip;
			arrayChar[i].coins =0;
			arrayChar[i].hasCar = false;
			arrayChar[i].hasParachute = false;
			arrayChar[i].hasRope = false;
			arrayChar[i].hasShotgun = false;
			arrayChar[i].inPit = false;
			arrayChar[i].inSwamp = false;
			arrayChar[i].isLive = true;
			arrayChar[i].onShip = true;
		}
		characActive = -1;
		coins =0;
	}
	void player::Tplayer::killTcharacter()
	{
		this->arrayChar[this->characActive].isLive = false;
		this->arrayChar[this->characActive].i = -10;
		this->arrayChar[this->characActive].j = -10;
	}
	void player::Tplayer::killTcharacter(int n_)
	{
		this->arrayChar[n_].isLive = false;
		this->arrayChar[n_].i = -10;
		this->arrayChar[n_].j = -10;
	}
	int player::Tplayer::getChangeField()
	{
		return this->changeField;
	}
	void player::Tplayer::setChangeField(int chF_)
	{
		this->changeField = chF_;
	}
	bool player::Tplayer::killEnemy(player::Tcharacter enemy)
	{
		int radius = 1;
		if (this->arrayChar[this->characActive].hasShotgun)
			radius = 3;
		if (myAbs(this->arrayChar[this->characActive].i - enemy.i)<=radius &&
			myAbs(this->arrayChar[this->characActive].j - enemy.j)<=radius )
		{
			this->arrayChar[this->characActive].coins +=enemy.coins;
			this->arrayChar[this->characActive].hasShotgun = false;
			return true;
		}
		return false;
	}
	player::Tcharacter player::Tplayer::getCharacter(int n_)
	{
		return this->arrayChar[n_];
	}
	int player::Tplayer::getCoins()
	{
		return this->coins;
	}
	bool player::Tplayer::characterHasShotgun(int n_)
	{
		return (this->arrayChar[this->characActive].hasShotgun);
	}
	bool player::Tplayer::characterHasRope(int n_)
	{
		return (this->arrayChar[this->characActive].hasRope);
	}
}//namespace

