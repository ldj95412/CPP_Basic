#include "io.h"
//�ݺ����� ���� �����Դϴ�.
void MultipleCalculate() //���� 10950
{
    int LoopCount, Value1, Value2;
    cout << "�ݺ� Ƚ���� �Է��ϼ���." << endl;
    cin >> LoopCount;

    for (int i = 0; i < LoopCount; i++)
    {
        cout << "�� ���� �Է����ּ���." << endl;
        cin >> Value1;
        cin >> Value2;
        cout << "�� : " << Value1 + Value2 << endl;
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
    cout << "������ �� : " << A << endl;
    cout << "���� ����� �� : " << Sum << endl;
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