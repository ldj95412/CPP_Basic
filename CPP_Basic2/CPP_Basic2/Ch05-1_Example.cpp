#include "io.h"

void CountNumber()
{
    int Counter;
    cout << "���� ������ �Է����ּ��� : ";
    cin >> Counter;
    int* Number = new int[Counter];

    for (int i = 0; i < Counter; i++)
    {
        cout << "�� �����͸� �Է����ּ��� : ";
        cin >> Number[i];
    }

    int FindNumber;
    cout << "ã�� ���� �Է����ּ��� :";
    cin >> FindNumber;

    int FindCount = 0;
    for (int i = 0; i < Counter; i++)
    {
        if (Number[i] == FindNumber)
        {
            FindCount++;
        }
    }
    cout << "ã�� ���� ������ " << FindCount << "�� �Դϴ�.";
}

void LessNumber()
{
    int Counter = 0;
    cout << "���� ������ �Է����ּ��� : ";
    cin >> Counter;
    int* Number = new int[Counter];

    int FindNumber;
    cout << "���� ���� �Է����ּ��� :";
    cin >> FindNumber;

    for (int i = 0; i < Counter; i++)
    {
        cout << "�� �����͸� �Է����ּ��� : ";
        cin >> Number[i];
    }

    for (int i = 0; i < Counter; i++)
    {
        if (FindNumber > Number[i])
        {
            cout << Number[i] << " : ";
        }
    }
}

void MissingNumber()
{
    int Counter = 0;
    cout << "��ü �л� ���� �Է����ּ��� : ";
    cin >> Counter;
    int* TotalMember = new int[Counter];

    int FindNumber;
    cout << "���� �������� ���� �л� ���� �Է����ּ��� :";
    cin >> FindNumber;

    // ��ü �л��� ��ȣ ������ Set
    for (int i = 0; i < Counter; i++)
    {
        TotalMember[i] = i + 1;
    }

    // ���� ������ �л� ��ȣ Set
    int* WorkMember = new int[Counter - FindNumber];
    for (int i = 0; i < (Counter - FindNumber); i++)
    {
        cin >> WorkMember[i];
    }

    // ���� Ȯ�ο� �迭 ���� Set
    int* Check = new int[Counter];
    for (int i = 0; i < Counter; i++)
    {
        Check[i] = false;
    }

    // ������ �л�, ������ �л� ���� - true/false
    for (int i = 0; i < (Counter - FindNumber); i++)
    {
        for (int j = 0; j < Counter; j++)
        {
            if (WorkMember[i] == TotalMember[j]) {
                Check[j] = true;
            }
        }
    }

    // ������ �л� ��ȣ ����
    for (int i = 0; i < Counter; i++)
    {
        if (Check[i] == false)
        {
            cout << i + 1 << "�� �ȳ�" << endl;
        }
    }
}