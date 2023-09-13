#include "io.h"

void PointerDefine()
{
	int a = 10;

	cout << "a:" << a << endl;
	cout << "&a:" << &a << endl; // ¿¬»ê

	int* pa = &a;

	cout << "pa:" << pa << endl;
	cout << "*pa:" << *pa << endl;
	cout << "*(pa+1):" << *(pa + 1) << endl;

	cout << "pa+1:" << pa+1 << endl;
	cout << "*pa+1:" << *pa+1 << endl;
	cout << "*(pa+1):" << *(pa + 1) << endl;

	int** ppa = &pa;

	cout << "ppa:" << ppa << endl;
	cout << "*ppa:" << *ppa << endl;
	cout << "**ppa:" << **ppa << endl;

	cout << endl;

	int array[3] = { 1,2,3 };
	int* pArray = array;

	cout << "array : " << array << endl;
	cout << "&array[0] : " << &array[0] << endl;
	cout << "&array[1] : " << &array[1] << endl;
	cout << "&array[2] : " << &array[2] << endl;
	cout << "array[0] : " << array[0] << endl;
	cout << "array[1] : " << array[1] << endl;
	cout << "array[2] : " << array[2] << endl;

	cout << "pArray : " << pArray << endl;
	cout << "*pArray : " << *pArray << endl;
	cout << "*array : " << *array << endl;
	cout << "pArray[0] : " << pArray[0] << endl;

	cout << "pArray+1 : " << (pArray+1) << endl;
	cout << "*(pArray+1) : " << *(pArray+1) << endl;
	cout << "*array+1 : " << *array+1 << endl;
	cout << "*pArray[0] : " << *pArray+1 << endl;





}