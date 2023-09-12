#include "io.h"
//반복문에 대한 예제입니다.
void MultipleCalculate() //백준 10950
{
    int LoopCount, Value1, Value2;
    cout << "반복 횟수를 입력하세요." << endl;
    cin >> LoopCount;

    for (int i = 0; i < LoopCount; i++)
    {
        cout << "두 수를 입력해주세요." << endl;
        cin >> Value1;
        cin >> Value2;
        cout << "합 : " << Value1 + Value2 << endl;
    }
}

void ReceiptInspection()
{
    int A, B, C, D;
    int Sum = 0;

    cin >> A >> B;
    for (int i = 0; i < B; i++)
    {
        cin >> C >> D;
        Sum = Sum + (C * D);
    }
    cout << "영수증 값 : " << A << endl;
    cout << "내가 계산한 값 : " << Sum << endl;
    if (A == Sum) cout << "Yes";
    else cout << "No";
}

void StarTree()
{
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void StarTree2()
{
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        for (int j = 1; j < a - i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}