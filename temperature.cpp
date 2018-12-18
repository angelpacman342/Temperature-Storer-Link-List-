#include "pch.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include "temperature.h"

using namespace std;

temperature::temperature()//constructor
{                         //inicializes the variables
	head = NULL;
	current = NULL;
}

void temperature::createNode()//create each individual node 
{                             //each time its been called
	ptr newNode = new node;
	newNode->next = NULL;

	if (head == NULL)
		head = newNode;
	else
		current->next = newNode;
	current = newNode;
}

void temperature::store()
{
	cout << "Temperatures : " << endl;
	for (int i = 1; i <= 12; i++)
	{
		createNode();//creates the node where you store the temperature info
		system("cls");

		cout << i << " Month" << endl;
		current->month = i;
		cout << "\nHigh : ";//high temperature input
		cin >> current->high;

		do
		{
			cout << "\nLow : ";//low temperature input
			cin >> current->low;
		} while (current->low > current->high);
	}
}

void temperature::print()//prints the content for each struct
{                        //the temperature of each month
	current = head;

	cout << "\n\nTemperatures Output:"<<endl;
	while (current != NULL)
	{
		cout << endl;
		cout << current->month << " Month High : " << setw(3) << current->high << endl;//high temperatures
		cout << current->month << " Month Low  : " << setw(3) << current->low << endl;//low temperatures
		current = current->next;
	}
}

temperature::~temperature()//deconstructor
{

}
