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

	virtual void PrintInfo() = 0; //= 0 을 붙여주면 반드시 상속받는 자식들은 해당 함수를 정의해야함
	
	void OnAttacked(Creature* attacker);
	bool IsDead() { return _hp <= 0; } //짧으니까 그냥 헤더파일에 정의
protected:
	int _cretureType;
	int _hp;
	int _attack;
	int _defence;
};

