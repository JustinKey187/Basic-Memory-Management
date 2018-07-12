#include <string>
#ifndef _Person_H
#define _Person_H

#include "Resource.h"
#include <memory>

class Person
{
private:
	std::string firstname;
	std::string lastname;
	int arbitrarynumber;
	/*std::unique_ptr<Resource>pResource;*/
	std::shared_ptr<Resource>pResource;

public:
	Person(std::string first,
		std::string last,
		int arbitrary);
	/*Person(const Person&);
	Person& operator=(const Person&);*/
	std::string GetName() const;
	int GetNumber() const { return arbitrarynumber; }
	void SetNumber(int number) { arbitrarynumber = number; }
	void SetFirstName(std::string first) { firstname = first; }

	void SetResource(std::string resourcename);
	std::string GetResourceName() const {
		return pResource->GetName();
	}
};
#endif

