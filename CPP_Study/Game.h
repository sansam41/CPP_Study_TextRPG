#pragma once
//���� ����
//������ϰ� ���� ����� ������ ������ ��� include ��� ���漱���� ����
//��Ӱ����� ��� -> #include
//������� �� ��� -> ���漱��
class Player;
class Field;

class Game
{
public:
	Game();
	~Game();
	
	void Init();
	void Update();
	void CreatePlayer();

private:
	//Player _player ����� ���ӿ� ������ �÷��̾ �־���Ѵٴ� �������� ���Ҿ�
	//�ϳ��� �÷��̾�� ���� �� �ְ� ��
	//Player�� ū �����͸� ������ ��� Game ���� �� �����͸� ����ä�� �����Ǳ� ������
	//�����͸� ����Ͽ� �ּҰ��� ������ �δ� ���� �ٶ����ϴ�
	Player* _player;
	Field* _field;

};

