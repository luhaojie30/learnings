#include<iostream>
#include<string>
using namespace std;

int main() {

	string user_name;
	cout << "Please enter your name:  ";
	cin >> user_name;
	cout << '\n'
		<< "Hello, "
		<< user_name
		<< "... and goodbye! \n";
	getchar();
	return 0;
}
