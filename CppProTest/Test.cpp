#include <iostream>
#include <string>
#include <vector>
#include <math.h>
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
void TestArray() {
	const int seq_size = 18;
	//Pell
	//array
	/*int pell_seq[seq_size];
	pell_seq[0] = 1;
	pell_seq[1] = 2;
	for (int i = 2; i < seq_size; i++) {
		pell_seq[i] = pell_seq[i - 2] + pell_seq[i - 1] * 2;
	}*/
	//vector
	/*vector<int> pell_seq(seq_size);
	pell_seq[0] = 1;
	pell_seq[1] = 2;
	for (int i = 2; i < seq_size;i++) {
		pell_seq[i] = pell_seq[i-2]+pell_seq[i-1]*2;
	}*/
	//result
	/*cout << "pell_seq[4] = " << pell_seq[4] << "\n";
	cout << "pell_seq[5] = " << pell_seq[5] << "\n";
	cout << "pell_seq[6] = " << pell_seq[6] << "\n";
	cout << "pell_seq[7] = " << pell_seq[7] << "\n";*/
	//Fibonacci
	/*vector<int> arr_vec(seq_size);
	arr_vec[0] = 1;
	arr_vec[1] = 1;
	for (int i = 2; i < seq_size; i++)
	{
		arr_vec[i] = arr_vec[i - 1] + arr_vec[i - 2];
	}
	cout << "arr_vec[7] = " << arr_vec[7];*/

	//Lucas
	/*vector<int> arr_lucas(seq_size);
	arr_lucas[0] = 1;
	arr_lucas[1] = 3;
	for (int i = 2; i < seq_size; i++)
	{
		arr_lucas[i] = arr_lucas[i-1]+arr_lucas[i-2];
	}
	cout << "arr_lucas[7] = " << arr_lucas[7];*/

	//Triangular
	/*vector<int> arr_tri(seq_size);
	arr_tri[0] = 1;
	for (int i = 1; i < seq_size; i++)
	{
		arr_tri[i] = arr_tri[i - 1] + i + 1;
	}
	cout << "arr_tri[7] = " << arr_tri[7];*/

	//Square
	/*vector<int> arr_square(seq_size);
	for (int i = 0; i < seq_size; i++)
	{
		arr_square[i] = pow(i+1,3);
	}
	cout << "arr_square[7] = " << arr_square[7];*/

	//Pentagonal
	/*vector<int> arr_pen(seq_size);
	for (int i = 0; i < seq_size; i++)
	{

	}*/
	
}
void TestPoint() {
	//更新ivals的值
	int ivals = 1024;
	cout << ivals << "内存地址是:" << &ivals << "\n";
	int *pi = &ivals;
	if (*pi == 1024) {
		*pi = 2048;
		cout << "Final Pi Data:" << *pi << "\n";
		cout << "Final ivals Data:" << ivals << "\n";
	}
	//更改指针的值后，获取不到对应的值
	cout << "pi的内存地址是:" << pi << "\n";
	pi++;
	cout << "pi的新内存地址是:" << pi << "\n";
	cout << "pi的新值是:" << *pi << "\n";
}
void TestPointExcep() {

}

int main() {
	//TestUserInput();
	//TestConst();
	//TestIncre();
	/*printf("---------\n");
	testswitch();
	printf("---------");*/
	//TestArray();
	TestPoint();
	TestPointExcep();
	return 0;
}