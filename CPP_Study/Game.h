#pragma once
//전방 선언
//헤더파일과 같이 선언과 관련한 파일의 경우 include 대신 전방선언을 선언
//상속관계일 경우 -> #include
//멤버관계 일 경우 -> 전방선언
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
	//Player _player 방식은 게임에 무조건 플레이어가 있어야한다는 강제성가 더불어
	//하나의 플레이어만을 가질 수 있게 됨
	//Player가 큰 데이터를 차지할 경우 Game 또한 그 데이터를 가진채로 생성되기 때문에
	//포인터를 사용하여 주소값을 저장해 두는 것이 바람직하다
	Player* _player;
	Field* _field;

};

