#include "io.h"

void BallInsert()
{
	int N;
	int M;
	int FirstIndexBasket;
	int LastIndexBasket;
	int BallNumber;

	cout << "바구니의 개수를 입력해주세요." << endl;
	cin >> N;
	cout << "공넣는 횟수를 입력해주세요." << endl;
	cin >> M;

	int* Basket = new int[N];

	for (int i = 0; i < N; i++)
	{
		Basket[i] = 0;
	}

	for (int i = 0; i < M; i++)
	{
		cin >> FirstIndexBasket >> LastIndexBasket >> BallNumber;
		for (int j = FirstIndexBasket - 1; j < LastIndexBasket; j++)
		{
			Basket[j] = BallNumber;
		}
	}

	for (int i = 0; i < N; i++)
	{
		cout << Basket[i] << " ";
	}

}

void BallSwap()
{
	int N;
	int M;
	int O;
	int P;
	int temp;
	cin >> N;
	int* Basket = new int[N];

	for (int i = 0; i < N; i++)
	{
		Basket[i] = i + 1;
	}

	cin >> M;
	for (int i = 0; i < M; i++)
	{
		cin >> O >> P;
		temp = Basket[O - 1];
		Basket[O - 1] = Basket[P - 1];
		Basket[P - 1] = temp;
	}

	for (int i = 0; i < N; i++)
	{
		cout << Basket[i] << " ";
	}

}