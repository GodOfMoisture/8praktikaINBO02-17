#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int main () {
char *qwerty = new char;
cin >> qwerty;
ofstream fout("first.txt");
fout << qwerty;
fout.close();
delete qwerty;
return -1;
}
