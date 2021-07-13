#pragma once
//전방선언(멤버클래스이기 때문)
class Player;
class Monster;

class Field
{
public:
	Field();
	~Field();

	void Update(Player* player);
	void CreateMonster();
	void StartBattle(Player* player);

private:
	Monster* _monster;
};

