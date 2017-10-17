/*
 * Authenticate a User / Create one
 */
  
#include <iostream>
#include "cgicc/Cgicc.h"
#include "cgicc/HTTPHTMLHeader.h"
#include "cgicc/HTMLClasses.h"
#include <sqlite_modern_cpp.h>

using namespace std;
using namespace sqlite;
using namespace cgicc;

string type[2] = { "Buyer", "Seller" };
class User {
private:
	database db;
public:
	long ID;
	string name, passwd, address, type;
	User() 
	{
		try
		{
		  database db("shopx.db");
		  db<<
		    "create file if not exists user("
		    " name string not null,"
		    " id long not null,"
		    " password string not null,"
		    " address string noy null,"
		    " type string not null"
		    ");";
		} 
	}
	void createUser(long ID, string name, string password, string address, string type)
	{
		// code
	}
	User getUser(long ID) {
		// TODO
	}
};

int main(int argc, char **argv)
{
	try {
		Cgicc cgi;
		cgicc::form_iterator name = cgi.getElement("user");
		cgicc::form_iterator pass = cgi.getElement("pass");


		// Write here
		
	}
	catch(exception& e) {
		// handle any errors - omitted for brevity
	}
}
