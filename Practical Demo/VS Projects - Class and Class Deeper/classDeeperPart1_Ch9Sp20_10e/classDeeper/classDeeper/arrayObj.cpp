// This program demonstrates an array of class object.
#include <iostream>
#include <iomanip>
#include <array>
#include "InventoryItem.h"
using namespace std;
/*
int main()
{
	const int NUM_ITEMS = 5;
	InventoryItem inventory[5] = {
					InventoryItem("Hammer", 6.95, 12),
					InventoryItem("Wrench", 8.75, 20),
					InventoryItem("Pliers", 3.75, 10),
					InventoryItem("Screwdriver") };

	cout << setw(14) << "Inventory Item"
		 << setw(8) << "Cost" << setw(8)
		 << setw(16) << "Units on Hand\n";
	cout << "-------------------------------------\n";

	for (int i = 0; i < NUM_ITEMS; i++)
	{
		cout << setw(14) << inventory[i].getDescription();
		cout << setw(8) << inventory[i].getCost();
		cout << setw(7) << inventory[i].getUnits() << endl;
	}

	
	cout << "Array with Default constructor" << endl;
	InventoryItem inventoryDefault[3];

	for (int i = 0; i < 3; i++)
	{
		cout << setw(14) << inventoryDefault[i].getDescription();
		cout << setw(8) << inventoryDefault[i].getCost();
		cout << setw(7) << inventoryDefault[i].getUnits() << endl;
	}

	cout << "Template Array with Default constructor" << endl;
	array <InventoryItem, 3> inventoryDefault2;

	for (int i = 0; i < 3; i++)
	{
		cout << setw(14) << inventoryDefault2[i].getDescription();
		cout << setw(8) << inventoryDefault2[i].getCost();
		cout << setw(7) << inventoryDefault2[i].getUnits() << endl;
	}

	cout << "Template Array with constructor" << endl;
	array <InventoryItem, 3> inventoryTemp = {
					InventoryItem("Hammer", 6.95, 12),
					InventoryItem("Screwdriver") };

	for (int i = 0; i < 3; i++)
	{
		cout << setw(14) << inventoryTemp[i].getDescription();
		cout << setw(8) << inventoryTemp[i].getCost();
		cout << setw(7) << inventoryTemp[i].getUnits() << endl;
	}



	return 0;
}
*/