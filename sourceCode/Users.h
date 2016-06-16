#ifndef USERS_H
#define USERS_H

#include <fstream>
#include <cstdlib>
#include <cstdio>
#include <iostream>

using namespace std;

class Users
{
public:
	Users(void);
	~Users(void);
protected:
	string ReadFromFile_and_result (int userNumber);
	int inversion (int *a,int *b,int f);

};

#endif // USERS_H