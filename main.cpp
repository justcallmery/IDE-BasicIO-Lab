#include <iostream>
#include <string>

using namespace std;

int main() {
const int current_year = 2025;
string full_name;
int age;

cout << "Enter your full name: ";
getline(cin, full_name);

cout << "Enter your age: ";
cin >> age;

cout << "\nHello, " << full_name << "! You are " << age << " years old.\n";
cout << "You will turn 21 years old in the year " << current_year + (21 - age) << ".\n";

return 0;

}
