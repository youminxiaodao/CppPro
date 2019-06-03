#include <iostream>
#include <string>
using namespace std;

void TestUserInput() {
	cout << "please enter your first name:";
	string user_first_name;
	cin >> user_first_name;

	cout << "please enter your last name:";
	string user_last_name;
	cin >> user_last_name;

	cout << "Hello, " << user_first_name << " " << user_last_name << " ... and goodbye!\n";
}
void TestConst() {
	const int a = 100;
	//a = 10;
}

void TestIncre() {
	int a = 0;
	cout << a++ <<"\n" << ++a;
}

void TestSwitch() {
	switch (1)
	{
	case 1:
			cout << "1\n";
			break;
	default:
		cout << "1";
		break;
	}
}
int main() {
	//TestUserInput();
	//TestConst();
	//TestIncre();
	printf("---------\n");
	TestSwitch();
	printf("---------");
	return 0;
}