#include "io.h"

void StatementIf()
{
    // if
    int Total1 = 70;
    // ������ 60�̻��̸� "�հ�" ���
    if (Total1 >= 60) {
        cout << "�հ�" << endl;
    }
    // ������ 60�̻��̸� "�հ�" ��� �ƴϸ� "���հ�"
    int Total2 = 50;
    if (Total2 >= 60) {
        cout << "�հ�" << endl;
    }
    else {
        cout << "���հ�" << endl;
    }

    // ������ 90�̻��̸� "��", 80�̻��̸� "��", �ƴϸ� "�����"
    int Total3 = 85;

    if (Total3 >= 90) {
        cout << "��" << endl;
    }
    else if (Total3 >= 80) {
        cout << "��" << endl;
    }
    else {
        cout << "�����" << endl;
    }

    // 3���� ��������� 60�̻��̸� �հ�, �ƴϸ� ���հ�
    // �� ����� ������ 60�̸��̸� ����
    int Subject1 = 90;
    int Subject2 = 80;
    int Subject3 = 50;
    int Average = (Subject1 + Subject2 + Subject3) / 3;

    // ���,����� ���� ��� 60�̻��̸� �հ�
    // ���>=60 && ����1>=60 && ����2>=60 && ����3>=60
    if (Average >= 60 && Subject1 >= 60 && Subject2 >= 60 && Subject3 >= 60) {
        cout << "�հ�" << endl;
    }
    else {
        cout << "���հ�" << endl;
    }

    int Subject4 = 0;
    int Subject5 = 0;
    int Subject6 = 0;

    // cout << "1���� ������ �Է����ּ��� : ";
    // cin >> Subject4;
    // cout << "2���� ������ �Է����ּ��� : ";
    // cin >> Subject5;
    // cout << "3���� ������ �Է����ּ��� : ";
    // cin >> Subject6;

    int AverageIn = (Subject4 + Subject5 + Subject6) / 3;

    if (AverageIn >= 60 && Subject4 >= 60 && Subject5 >= 60 && Subject6 >= 60) {
        cout << "�հ�" << endl;
    }
    else {
        cout << "���հ�" << endl;
    }
}

void StatementSwitch()
{
    // ���� ��ȣ : 1-C++, 2-�𸮾���, 3-VR
    int SubjectNumber = 0;
    cout << "���� ��ȣ�� �Է����ּ��� : ";
    cin >> SubjectNumber;

    switch (SubjectNumber)
    {
    case 1:
        cout << "C++" << endl;
        break;
    case 2:
        cout << "�𸮾���" << endl;
        break;
    case 3:
        cout << "VR" << endl;
        break;
    default:
        cout << "���� ��ȣ�� �ٽ� �Է����ּ���." << endl;
    }
    if (SubjectNumber == 1) {
        cout << "C++" << endl;
    }
    else if (SubjectNumber == 2) {
        cout << "�𸮾���" << endl;
    }
    else if (SubjectNumber == 3) {
        cout << "VR" << endl;
    }
    else {
        cout << "���� ��ȣ�� �ٽ� �Է����ּ���." << endl;
    }
}

void StatementNestedIf()
{
    int a = 10;
    int b = 20;
    int c = 30;

    if (a < b) {
        cout << "a<b �񱳽ĸ� �ٷ�� ���๮" << endl;

        if (b < c) {
            cout << "��ø IF" << endl;
        }
    }

    if (a < b && b < c) {
        cout << "And ���� IF" << endl;
    }
}

void StatementFor()
{

    // integer, iterate(iterable) : �ݺ��ϴ� 
    for (int i = 0; i < 10; i++) {
        cout << i;
    }

    cout << endl;

    int StepSum = 0;
    for (int i = 1; i <= 10; i++) {
        StepSum = StepSum + i;

        cout << StepSum << " : ";
    }

    cout << endl;

    int StepSum2 = 0;
    for (int i = 1; i <= 10; i += 2) {
        StepSum2 = StepSum2 + i;

        cout << StepSum2 << " : ";
    }

    cout << endl;

    for (int i = 1; i <= 9; i++)
    {
        cout << 2 * i << " : ";
    }

    cout << endl;

    for (int i = 2; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            cout << i * j << " : ";
        }
        cout << endl;
    }

}

void StatementWhile()
{
    int LoopNumber = 0;
    while (LoopNumber <= 10)
    {
        cout << LoopNumber << " : ";
        LoopNumber++;
    }

    cout << endl;

    int IdNumber = 123456;
    int InputId = 0;

    while (true) {


        cout << "�α���";
        cin >> InputId;

        if (InputId == IdNumber)
        {
            cout << "�α��� ����" << endl;
            break;
        }
        else
        {
            cout << "�ٽ� �Է����ּ���." << endl;
        }

    }

}

int GuGuDan(int Dan)
{
    int result = 0;

    for (int i = 1; i <= 9; i++)
    {
        result += Dan * i;
    }
    return result;
}

int GlobalValue = 0;

void VarScope(int Number)
{
    int FunctionValue = 20;

    if (true)
    {
        int BlockValue = 30;
    }

    cout << "���������� : " << GlobalValue << endl;
    cout << "�Լ����������� : " << FunctionValue << endl;
    //cout << "������������� : " << BlockValue << endl;
    cout << "�Ķ���� �� : " << Number << endl;
}