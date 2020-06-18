// Workshop 4: Part 1
// Date: 6/17/2020
//Student: Mykyta Ryzhan
//Student ID: 140543190
// I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
/////////////////////////////////////////////

#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include "Saiyan.h"

namespace sdds {
	Saiyan::Saiyan() {
		m_name[0] = '\0';
		m_dob = 0;
		m_power = 0;
		m_super = false;
	}

	Saiyan::Saiyan(const char* name, int dob, int power) {
		if (name == nullptr || strcmp(name, "") == false || dob > 2020 || power < 0) {
			m_name[0] = '\0';
			m_dob = 0;
			m_power = 0;
			m_super = false;
		}
		else {
			set(name, dob, power);
		}

		m_super = false;
	}


	void Saiyan::set(const char* name, int dob, int power, bool super ) {
		if (dob >= 0 && dob <= 2020 && power >= 0 && name != nullptr && name[0] != '\0') {
			strncpy(m_name, name, MAX_NAME);
			m_name[31] = '\0';
			m_dob = dob;
			m_power = power;
			m_super = super; 
		}
	}
	
	bool Saiyan::isValid() const {

		if (m_name[0] != '\0' && m_dob != 0 && m_power != 0) {
			return true;
		}
		else {
			return false;
		}
	}

	void Saiyan::display() const{
		if (isValid()) {
			cout << m_name << endl << "DOB: " << m_dob << endl << "Power: " << m_power << endl;
			cout << "Super: " << (m_super ? "yes" : "no") << endl;
		}
		else {
			cout << "Invalid Saiyan!" << endl;
		}
	}
	
	bool Saiyan::fight(const Saiyan& other) const {
		if (isValid() && other.isValid() && m_power > other.m_power)
		{
			return true;
		}
		else
		{
			return false;
		}	
	}
};