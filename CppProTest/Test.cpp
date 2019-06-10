#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <algorithm>
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
	cout << a++ << "\n" << ++a;
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
	//int ivals = 1024;
	//cout << ivals << "内存地址是:" << &ivals << "\n";
	//int *pi = &ivals;
	//if (*pi == 1024) {
	//	*pi = 2048;
	//	cout << "Final Pi Data:" << *pi << "\n";
	//	cout << "Final ivals Data:" << ivals << "\n";
	//}
	////更改指针的值后，获取不到对应的值
	//cout << "pi的内存地址是:" << pi << "\n";
	//pi++;
	//cout << "pi的新内存地址是:" << pi << "\n";
	//cout << "pi的新值是:" << *pi << "\n";
	vector<int> fibonacci, lucas, pell, triangular, square, pentagoanl;
	vector<int> *current_vec = 0;
	fibonacci = { 1,1,2,3,5,8 };
	const int seq_cnt = 6;
	vector<int> *seq_addrs[seq_cnt] = { &fibonacci, &lucas, &pell, &triangular, &square, &pentagoanl };
	cout << "-------------\n";
	current_vec = seq_addrs[0];
	cout << "current_vec[0] = " << (*current_vec)[4] << "\n";
	vector<int> *pv = &fibonacci;
	cout << "pv = " << (*pv)[5] << "\n" << "---------\n";
	if (pv && !pv->empty() && (*pv)[0] == 1) {
		cout << "全部符合";
	}
}
void TestPointExcep() {
	/*vector<int> fibonacci, lucas, pell, triangular, square, pentagoanl;
	vector<int> *pv = 0;*/
	int a[7];
	a[0] = 0;
	a[1] = 1;
	cout << "a的地址是:" << a << "\n";
	cout << "a的地址是:" << &a << "\n";
	cout << "int类型偏移大小:" << sizeof(int) << "\n";
	cout << "double类型偏移大小:" << sizeof(double) << "\n";
}
void TestArrPoint() {
	int a[5] = { 1,2,3,4,5 };
	int *p = &a[2];
	cout << "p[-2] = " << p[-2] << "\n";
	cout << "*(p-2) = " << *(p - 2) << "\n";
	int *ptr = (int *)(&a + 1);
	cout << "a的地址:" << &a << "\n";
	cout << "a+1的地址:" << &a + 1 << "\n";
	cout << "地址差值:" << (&a + 1) - (&a) << "\n";
	cout << "ptr - 1 = " << *(ptr - 2) << "\n";
	cout << "*(a+1) = " << *(a + 1);
}

void TestFileOp() {
	string user_name = "Sean";
	ofstream outfile("test_2019610.txt", ios_base::app);
	if (!outfile) {
		cout << "文件打开失败!\n";
	}
	else {
		outfile << user_name << ' '
			<< 10 << ' '
			<< 20 << endl;
		outfile << user_name << ' '
			<< 15 << ' '
			<< 30 << endl;
	}
	fstream fsfile("test_2019610.txt", ios_base::app || ios_base::in);
	fsfile.seekg(0);
	string name;
	int nt;
	int nc;
	while (fsfile >> name) {
		fsfile >> nt >> nc;
		cout << "name = " << name << ",nt = " << nt << ",nc = " << nc << "\n";
	}
	/*ifstream infile("test_2019610.txt");
	string name;
	int nt;
	int nc;
	while (infile >> name) {
		infile >> nt >> nc;
		 cout << "name = " << name << ",nt = " << nt << ",nc = " << nc <<"\n";
	}*/

}
void TestInput() {
	string user_name = "";
	/*while (user_name.size() <= 2) {
		cout << "Please enter your name:";
		cin >> user_name;
		cout << "user input name is :" << user_name <<endl;
		if (user_name.size() <= 2) {
			cout << "Sorry, your name is invalid!"<<endl;
		}
	}*/
	const int a = 10;
	cout << "Please enter your name:";
	cin >> setw(a) >> user_name;
	cout << "user_name:" << user_name;
}
void TestSum() {
	int inputNum;
	vector<int> val;

	while (cin >> inputNum) {
		cout << "inputNum = " << inputNum << "\n";
		val.push_back(inputNum);
	}
	cout << "------\n";
	int sum = 0;
	for (int i = 0; i < val.size(); i++) {
		sum += val[i];
	}
	cout << "Sum is:" << sum << "\n";
}
void TetFileOp2() {
	vector<string> fileData;
	string a;
	ifstream openfile("test.txt");
	while (openfile >> a) {
		fileData.push_back(a);
	}
	for (int i = 0; i < fileData.size(); i++) {
		cout << "current data:" << fileData[i] << "\n";
	}
	sort(fileData.begin(), fileData.end());
	cout << "-------------\n";
	ofstream writeNewFile("test2.txt", ios_base::app);
	for (int i = 0; i < fileData.size(); i++) {
		writeNewFile << fileData[i] << endl;
	}
}
int TestFibonacci(int index) {
	cout << "index:" << index << "\n";
	const int fib_size = 100;
	vector<int> fib_vec(fib_size);
	fib_vec[0] = 1;
	fib_vec[1] = 1;
	for (int i = 2; i < fib_size; i++)
	{
		fib_vec[i] = fib_vec[i - 1] + fib_vec[i - 2];
	}
	return fib_vec[index - 1];
}
int main() {
	//TestUserInput();
	//TestConst();
	//TestIncre();
	/*printf("---------\n");
	testswitch();
	printf("---------");*/
	//TestArray();
	//TestPoint();
	//TestPointExcep();
	//TestArrPoint();
	//TestFileOp();
	//TestInput();
	//TestSum();//1.6
	//TetFileOp2();//1.7
	cout << "请输入Fabinacci某个下标:";
	int inputNum = 0;
	cin >> inputNum;
	if (inputNum >= 1) {
		int retFibVal = TestFibonacci(inputNum);
		cout << "Fibonacci第" << inputNum << "的值是:" << retFibVal << endl;
	}
	else {
		cout << "输入的值不合法!";
	}
	//测试
	return 0;
}