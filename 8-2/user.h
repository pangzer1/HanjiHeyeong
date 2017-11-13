// ****************************************************************
//  user.h
//
//  This is the header file for the user class.
//  If fully fleshed out it would have more method, but for
//  purposes of this example there is a single method, Login,
//  which returns true if a given username and password has
//  user clearance.
// ****************************************************************

// --------------------------------
// ----- ENTER YOUR CODE HERE -----
// --------------------------------


#ifndef __USER_H__
#define __USER_H__

#include <string>
using namespace std;

class User
{
public:
	User();
	User(string name, string password);
	bool Login();
private:
	string name;
	string password;
};

#endif
