// ****************************************************************
//  security.cpp
//
//  This class validates a username and password.
//  It is only an example; it is not very secure.  For better
//  security, passwords would be encrypted and stored in a database
//  rather than hard-coded into the program.
// ****************************************************************

#include <iostream>
#include <string>
#include "security.h"

using namespace std;

// *****************************
// Security::validate
// This subroutine hard-codes valid users and is not
// considered a secure practice.
// It returns 0 if the credentials are invalid, 
//  1 if valid user, and
//  2 if valid administrator
// *****************************

int Security::validate(string username, string password)
{
	if ((username=="abbott") && (password=="monday")) return 1;
	if ((username=="costello") && (password=="tuesday")) return 2;
	return 0;
}
