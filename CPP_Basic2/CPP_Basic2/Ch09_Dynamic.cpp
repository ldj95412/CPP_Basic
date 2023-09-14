#include "io.h";

void DynamicVariable()
{
	int* pNum = new int;
	char* pValue = new char;

	*pNum = 10;
	*pValue = 'a';

	cout << pNum << endl;
	cout << pValue << endl;

	cout << *pNum << endl;
	cout << *pValue << endl;

	delete pNum;
	delete pValue;

	//cout << *pNum << endl;
	//cout << *pValue << endl;

}

void DynamicArray()
{
	int* pArray = new int[5];
	int size;
	cin >> size;
	float* pValue = new float[size];

	pArray[0] = 10;
	pValue[1] + 10;

	cout << pArray << endl;
	cout << pValue << endl;

}