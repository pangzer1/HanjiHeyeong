//security.h
//
//This is the header file for the Security class.
//  It validates a username and password.

#ifndef __SECURITY_H__
#define __SECURITY_H__

#include <string>
using namespace std;

class Security
{
public:
	static int validate(string username, string password);
};

#endif
