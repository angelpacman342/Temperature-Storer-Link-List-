#include <iostream>
#include <cstdlib>

using namespace std;

#pragma once
class temperature
{
public:
	temperature();
	void createNode();
	void store();
	void print();
	~temperature();

private:

	typedef struct node
	{
		int month;
		double high;
		double low;
		node* next;
	}*ptr;

	ptr head, current;
};

