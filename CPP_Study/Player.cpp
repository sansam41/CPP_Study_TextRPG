#include "Player.h"
#include<iostream>

using namespace std;
void Player::PrintInfo() {
	cout << "----------------------------------------" << endl;
	cout << "[플레이어 정보] " << "Hp: " << _hp << " Att: " << _attack << " Def: " << _defence << endl;
	cout << "----------------------------------------" << endl;
}