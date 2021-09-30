#include "std_lib_facilities.h"

int main(){
	cout << "Enter the name of the person you want to write to!" << endl;
	string first_name;
	cin >> first_name;
	cout << "Dear " << first_name << "," << endl;
	cout << "How are you? I am fine! I miss you!" << endl;
	cout << "Enter the name of your other friend!" << endl;
	string friend_name;
	cin >> friend_name;
	cout << "Have you seen " << friend_name << " recently?" << endl;
	char friend_sex=0;
	cout << "Enter the sex of your other friend! (use 'm' as male and 'f' as female)" << endl;
	cin >> friend_sex;
	if(friend_sex=='m')
		cout << "If you see " << friend_name << "please ask him to call me!" << endl;
	if(friend_sex=='f')
		cout << "If you see " << friend_name << "please ask her to call me!" << endl;
	cout << "Enter the age of the person you want to write to!" << endl;
	int age;
	cin>> age;
	cout << "I hear you just had a birthday and you are " << age << " years old" << endl;
	if(age <= 0 && age >= 110)
		simple_error("You are kidding!");
	if(age < 12)
		cout << "Next year you will be " << age+1 << endl;
	else if(age == 17)
		cout << "Next year you will be able to vote!" << endl;
	else if(age > 70)
		cout << "I hope you enjoy retirement!" << endl;
	cout << "Yours sincerely!" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "_________________" << endl;
	cout << "Kiss Gergely" << endl;
	return 0;
}
