Test using GITHUB
//Michael Jersey & Mateen Zadeh
// Description: Hello World C++
//================================================================================================

#include <iostream>
using namespace std;
int hello1Function(string name1);
int hello2Function(string name2);
int main()
{
    string name1="your name1";
    hello1Function(name1);
    string name2="your name2";
    hello2Function(name2);
    return 0;
}    

/*
 * hello2Function.cpp
 *
 */
#include <iostream>
using namespace std;
int hello2Function(string name2)
{
	cout << "hello World " << name2 << endl;
	return 0;
}


