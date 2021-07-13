#include "Field.h"
#include <stdlib.h>
#include "Monster.h"
#include "Player.h"

Field::Field() :_monster(nullptr) {

}

Field::~Field() {
	if (_monster != nullptr)
		delete _monster;
}

void Field::Update(Player* player) {
	if (_monster == nullptr)
		CreateMonster();
	StartBattle(player);
}

void Field::CreateMonster() {
	int randValue = 1 + rand() % 3;

	switch (randValue)
	{
	case MT_SLIME:
		_monster = new Slime();
		break;
	case MT_ORC:
		_monster = new Orc();
		break;
	case MT_SKELETON:
		_monster = new Skeleton();
		break;
	default:
		break;
	}
}

void Field::StartBattle(Player* player) {
	while (true) {
		player->PrintInfo();
		_monster->PrintInfo();
		_monster->OnAttacked(player);
		//플레이어 -> 몬스터 공격
		if (_monster->IsDead()) {
			_monster->PrintInfo();
			delete _monster; //field에서 monster를 관리하기 때문에 생명주기를 관리해도 됨
			_monster = nullptr;
			break;
		}
		//몬스터 -> 플레이어 공격
		player->OnAttacked(_monster);
		if (player->IsDead()) {
			player->PrintInfo();
			//player의 생명주기 관리는 field 하지 않음
			break;
		}
	}
}
