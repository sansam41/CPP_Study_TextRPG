#pragma once
//���漱��(���Ŭ�����̱� ����)
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
