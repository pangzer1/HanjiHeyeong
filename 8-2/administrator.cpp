// ****************************************************************
//  administrator.cpp
//
//  This is the implementation file for the Administrator class.
//  If fully fleshed out it would have more method, but for
//  purposes of this example there is a single method, Login,
//  which returns true if a given username and password has
//  admin clearance.
// ****************************************************************

// --------------------------------
// ----- ENTER YOUR CODE HERE -----
// --------------------------------

#include <iostream>
#include <string>
#include "administrator.h"
#include "security.h"
using namespace std;

// *****************************
// Administrator::Administrator
// Constructor that initializes strings to empty.
// *****************************
Administrator::Administrator()
{
	name = "";
	password = "";
}

// *****************************
// Administrator::Administrator
// Constructor that sets values of strings.
// *****************************
Administrator::Administrator(string username, string pass)
{
	name = username;
	password = pass;
}

// *****************************
// Administrator::Login
// This method invokes the security validate method
// to determine if the username and password should
// have admin privileges.  True is returned if so,
// False otherwise.
// *****************************
bool Administrator::Login()
{
	int result;

	result = Security::validate(name,password);
	if (result==2)
	{
		return true;
	}
	return false;
}

// --------------------------------
// --------- END USER CODE --------
// --------------------------------
