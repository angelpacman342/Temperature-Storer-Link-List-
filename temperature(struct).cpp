#include "pch.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include "temperature.h"

using namespace std;

int main()
{
	temperature temp;

	temp.store();
	temp.print();
}