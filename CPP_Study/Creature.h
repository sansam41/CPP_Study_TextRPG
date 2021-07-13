#pragma once
enum CreatureType {
	CT_PLAYER=0,
	CT_MONSTER=1,
};
class Creature
{
public:
	Creature(int creatureType) : _cretureType(creatureType), _hp(0), _attack(0),_defence(0) {

	}
	virtual ~Creature() {

	}
protected:
	int _cretureType;
	int _hp;
	int _attack;
	int _defence;
};

