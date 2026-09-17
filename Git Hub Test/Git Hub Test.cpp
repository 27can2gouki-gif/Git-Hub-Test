#include <iostream>
using namespace std;

const int MAX_NAME = 16;

struct SPECIAL {
	char name[MAX_NAME + 1];
	int Strength;
	int Perception;
	int Endurance;
	int Charisma;
	int Intelligence;
	int Agility;
	int Luck;
};

void Show(const SPECIAL& special) {
	cout << "名前 ：" << special.name << endl
		<< "　 Strength：" << special.Strength << endl
		<< "　 Perception：" << special.Perception << endl
		<< "　 Endurance：" << special.Endurance << endl
		<< "　 Charisma：" << special.Charisma << endl
		<< "　 Intelligence：" << special.Intelligence << endl
		<< "　 Agility：" << special.Agility << endl
		<< "　 Luck：" << special.Luck << endl;
}

int main() {
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	int f = 0;
	int g = 0;

	cout << "貴方の力強さはどのくらい？" << endl;
	cin >> a;
	cout << "貴方の感知能力はどのくらい？" << endl;
	cin >> b;
	cout << "貴方の持久力はどのくらい？" << endl;
	cin >> c;
	cout << "貴方のカリスマ性はどのくらい？" << endl;
	cin >> d;
	cout << "貴方の知能はどのくらい？" << endl;
	cin >> e;
	cout << "貴方の敏捷性はどのくらい？" << endl;
	cin >> f;
	cout << "貴方の運の良さはどのくらい？" << endl;
	cin >> g;


	SPECIAL special[] = {
		{"貴方のSPECIALは" , a,b,c,d,e,f,g,},
	};
	int size = sizeof special / sizeof * special;

	for (int i = 0; i < size; ++i) {
		Show(special[i]);
	}
	cout << "　　		です！" << endl;
}