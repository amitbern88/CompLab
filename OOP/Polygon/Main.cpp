#pragma once
#include "Triangle.h"
#include "Square.h"
#include "LinkedList.h"


LinkedList list;
int size;

void printPolygonDetails(int index) {
	int i;
	list.get(index)->printAllData();
}

void editPolygonCoordinates(int index) {
	int i, option, x, y;
	char shouldContinue;
	bool shouldEdit = true;
	
	Polygon* toEdit = list.get(index);
	char* name = toEdit->getName();

	while (shouldEdit)
	{
		cout << "Please insert index of coordinate you wish to edit: " << endl;
		cin >> option;
		if (toEdit->getNumOfVerteces() < option)
			cout << "Illegal index" << endl;
		else
		{
			cout << "Please insert coordinate value (x and y):" << endl;
			cin >> x >> y;
			toEdit->setVertex(option, x, y);

			cout << "Do you wish to continue editing this " << name << "? (y or n)" << endl;
			cin >> shouldContinue;
			shouldEdit = shouldContinue == 'y';
		}
	}
}

Pair* getNVerteces(int n) {
	Pair* verteces = new Pair[n];
	int i, x, y;
	for (i = 0; i < n; i++)
	{
		cout << "Please insert coordinates of vertex #" << i << ":" << endl;
		cin >> x >> y;
		verteces[i] = Pair(x, y);
	}
	return verteces;
}

void addPolygon() 
{
	int size;
	cout << "Please insert number of verteces for the new Polygon:" << endl;
	cin >> size;

	Polygon* poly = new Polygon(size, getNVerteces(size));
	list.add(poly);
}

void addTriangle()
{
	Pair* verteces = getNVerteces(3);
	list.add(new Triangle(verteces));
}

void addSquare()
{
	Pair* verteces = getNVerteces(4);
	list.add(new Square(verteces));
}

void addAPolygon() {
	int option;
	cout << "Please choose a polygon to add: " << endl;
	cout << "1: Add a polygon" << endl;
	cout << "2: Add a triangle" << endl;
	cout << "3: Add a Square" << endl;
	cout << "9: Back to Main" << endl;
	cin >> option;
	switch (option) {
		case 1:
			addPolygon();
			break;
		case 2:
			addTriangle();
			break;
		case 3:
			addSquare();
			break;
		case 9:
			break;
	}
}

void main() {
	int option, notDone = 1;
	while (notDone)
	{
		cout << "Please choose an Option: " << endl;
		cout << "1: Add a polygon" << endl;
		cout << "2: Edit coordinates of a polygon" << endl;
		cout << "3: Print polygon details" << endl;
		cout << "4: Delete a polygon" << endl;
		cout << "9: Quit" << endl;
		cin >> option;
		switch (option) {
			case 1:
				addAPolygon();
				break;
			case 2:
				cout << "Please enter the index of the polygon you wish to edit" << endl;
				cin >> option;
				editPolygonCoordinates(option);
			case 3:
				cout << "Please enter the index of the polygon you wish to see" << endl;
				cin >> option;
				printPolygonDetails(option);
				break;
			case 4:
				cout << "Please enter the index of the coordinate you wish to set" << endl;
				cin >> option;
				list.remove(option);
				break;
			case 9:
				notDone = 0;
				break;
			default:
				cout << "Option not recognized, please try again" << endl << endl;
		}		
	}
}