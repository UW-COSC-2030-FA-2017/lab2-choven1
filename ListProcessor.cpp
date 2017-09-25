// ListProcessor.cpp
// Corey Hoven
// COSC 2030
// 9 September 2017

// Exercise the List class with verbose Node constructor
//   and destructor.

#include "LinkedList.h"


int main()
{
	List cows;
	cout << "number of cows  : " << cows  .Size() << "\n\tcows list  :  " << cows   << " total: [ " << cows  .sum() << " ]" << endl << endl;

	cows.insertAsFirst(1.23);
	cows.insertAsFirst(2.34);
	cout << "number of cows  : " << cows  .Size() << "\n\tcows list  :  " << cows   << " total: [ " << cows  .sum() << " ]" << endl << endl;

	cows.removeFirst();
	cout << "number of cows  : " << cows  .Size() << "\n\tcows list  :  " << cows   << " total: [ " << cows  .sum() << " ]" << endl << endl;

	cows.insertAsLast(9.87);
	cout << "number of cows  : " << cows  .Size() << "\n\tcows list  :  " << cows   << " total: [ " << cows  .sum() << " ]" << endl << endl;

	List horses(cows);
	cout << "number of cows  : " << cows  .Size() << "\n\tcows list  :  " << cows   << " total: [ " << cows  .sum() << " ]" << endl;
	cout << "number of horses: " << horses.Size() << "\n\thorses list:  " << horses << " total: [ " << horses.sum() << " ]" << endl << endl;

	horses.removeFirst();
	horses.insertAsFirst(5.67);
	cows.insertAsFirst(6.78);
	cout << "number of cows  : " << cows  .Size() << "\n\tcows list  :  " << cows   << " total: [ " << cows  .sum() << " ]" << endl;
	cout << "number of horses: " << horses.Size() << "\n\thorses list:  " << horses << " total: [ " << horses.sum() << " ]" << endl << endl;

	List pigs;
	cout << "number of cows  : " << cows  .Size() << "\n\tcows list  :  " << cows   << " total: [ " << cows  .sum() << " ]" << endl;
	cout << "number of horses: " << horses.Size() << "\n\thorses list:  " << horses << " total: [ " << horses.sum() << " ]" << endl;
	cout << "number of pigs  : " << pigs  .Size() << "\n\tpigs list  :  " << pigs   << " total: [ " << pigs  .sum() << " ]" << endl << endl;

	pigs = cows;
	cout << "number of cows  : " << cows  .Size() << "\n\tcows list  :  " << cows   << " total: [ " << cows  .sum() << " ]" << endl;
	cout << "number of horses: " << horses.Size() << "\n\thorses list:  " << horses << " total: [ " << horses.sum() << " ]" << endl;
	cout << "number of pigs  : " << pigs  .Size() << "\n\tpigs list  :  " << pigs   << " total: [ " << pigs  .sum() << " ]" << endl << endl;

	pigs = horses;
	cout << "number of cows  : " << cows  .Size() << "\n\tcows list  :  " << cows   << endl;
	cout << "number of horses: " << horses.Size() << "\n\thorses list:  " << horses << " total: [ " << horses.sum() << " ]" << endl;
	cout << "number of pigs  : " << pigs  .Size() << "\n\tpigs list  :  " << pigs   << " total: [ " << pigs  .sum() << " ]" << endl << endl;

	pigs.insertAsLast(4.85);
	pigs.insertAsLast(1.05);
	pigs.insertAsLast(8.88);
	cout << "number of cows  : " << cows  .Size() << "\n\tcows list  :  " << cows   << endl;
	cout << "number of horses: " << horses.Size() << "\n\thorses list:  " << horses << " total: [ " << horses.sum() << " ]" << endl;
	cout << "number of pigs  : " << pigs  .Size() << "\n\tpigs list  :  " << pigs   << " total: [ " << pigs  .sum() << " ]" << endl << endl;

    pigs.removeFirst();
    horses.insertAsLast(1.85);
	cout << "number of cows  : " << cows  .Size() << "\n\tcows list  :  " << cows   << endl;
	cout << "number of horses: " << horses.Size() << "\n\thorses list:  " << horses << " total: [ " << horses.sum() << " ]" << endl;
	cout << "number of pigs  : " << pigs  .Size() << "\n\tpigs list  :  " << pigs   << " total: [ " << pigs  .sum() << " ]" << endl << endl;

	cout << "End of code" << endl << endl;

	return 0;
}
