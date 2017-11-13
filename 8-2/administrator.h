// ****************************************************************
//  administrator.h
//
//  This is the header file for the Administrator class.
//  If fully fleshed out it would have more method, but for
//  purposes of this example there is a single method, Login,
//  which returns true if a given username and password has
//  admin clearance.
// ****************************************************************

// --------------------------------
// ----- ENTER YOUR CODE HERE -----
// --------------------------------


#ifndef __ADMIN_H__
#define __ADMIN_H__

#include <string>
using namespace std;

class Administrator
{
public:
	Administrator();
	Administrator(string name, string password);
	bool Login();
private:
	string name;
	string password;
};

#endif
