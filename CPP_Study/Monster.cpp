#include "Monster.h"
#include<iostream>

using namespace std;
void Monster::PrintInfo() {
	cout << "----------------------------------------" << endl;
	cout << "[몬스터 정보] " << "Hp: " << _hp << " Att: " << _attack << " Def: " << _defence << endl;
	cout << "----------------------------------------" << endl;
}