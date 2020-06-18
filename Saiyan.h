// Workshop 4: Part 1
// Date: 6/17/2020
//Student: Mykyta Ryzhan
//Student ID: 140543190
// I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
/////////////////////////////////////////////

#ifndef H_SAIYAN_HEAD
#define H_SAIYAN_HEAD

#define _CTR_SECURE_NO_WARNINGS
#include <iostream> 
#include <cstring>

using namespace std;

namespace sdds {
	const int MAX_NAME = 31;

	class Saiyan {
		char m_name[MAX_NAME + 1];
		int m_dob;
		int m_power;
		bool m_super;
	public:
		Saiyan();
		Saiyan(const char* name, int dob, int power);
		void set(const char* name, int dob, int power, bool super = false);
		bool isValid() const;
		void display() const;
		bool fight(const Saiyan& other) const;
	};

}

#endif 