#include "io.h"

void TripleDice()
{

}

void OvenClock()
{
    short Hours;
    short Minutes;
    short SetMinutes;
    while (true)
    {
        cout << "�丮�� ������ �ð��� �Է����ּ���" << endl;
        cin >> Hours;

        if (0 <= Hours && 24 > Hours)
        {

        }
        else
        {
            cout << "�߸��� �ð� �Է��Դϴ�." << endl;
            continue;
        }

        cout << "�丮�� ������ ���� �Է����ּ���" << endl;
        cin >> Minutes;

        if (0 <= Minutes && 60 > Minutes)
        {

        }
        else
        {
            cout << "�߸��� �ð� �Է��Դϴ�." << endl;
            continue;
        }
        cout << "�ð��� ������ ���� �Է����ּ���" << endl;
        cin >> SetMinutes;

        if (0 <= SetMinutes && 1000 >= SetMinutes)
        {

        }
        else
        {
            cout << "�߸��� �ð� �Է��Դϴ�." << endl;
            continue;
        }

        Minutes = SetMinutes + Minutes;
        Hours = (Minutes / 60) + Hours;
        Minutes = Minutes % 60;

        if (Hours > 23)
        {
            Hours -= 24;
            cout << Hours << "�� " << Minutes << "�п� �丮�� �Ϸ�� �����Դϴ�..";
            break;
        }
        else
        {
            cout << Hours << "�� " << Minutes << "�п� �丮�� �Ϸ�� �����Դϴ�..";
            break;
        }
    }
}

void AlarmClock()
{
    short Hours;
    short Minutes;
    while (true)
    {
        cout << "�˶��� ������ �ð��� �Է����ּ���" << endl;
        cin >> Hours;

        if (0 <= Hours && 24 > Hours)
        {

        }
        else
        {
            cout << "�߸��� �ð� �Է��Դϴ�." << endl;
            continue;
        }

        cout << "�˶��� ������ ���� �Է����ּ���" << endl;
        cin >> Minutes;

        if (0 <= Minutes && 60 > Minutes)
        {

        }
        else
        {
            cout << "�߸��� �ð� �Է��Դϴ�." << endl;
            continue;
        }

        if (Minutes > 44)
        {
            Minutes -= 45;
            cout << Hours << "�� " << Minutes << "������ �˶������� �Ϸ�Ǿ����ϴ�.";
            break;
        }
        else
        {
            Minutes += 15;
            Hours -= 1;
            if (Hours == -1)
            {
                Hours += 24;
            }
            cout << Hours << "�� " << Minutes << "������ �˶������� �Ϸ�Ǿ����ϴ�.";
            break;
        }
    }


}

void PickQuadrant()
{
rewind:
    int AxisX;
    int AxisY;
    cout << "X ��ǥ�� �Է��ϼ���. : ";
    cin >> AxisX;
    cout << "Y ��ǥ�� �Է��ϼ���. : ";
    cin >> AxisY;

    if (AxisX > 0 && AxisY > 0)
    {
        cout << "1��и� �Դϴ�." << endl;
    }
    else if (AxisX > 0 && AxisY < 0)
    {
        cout << "2��и� �Դϴ�." << endl;
    }
    else if (AxisX < 0 && AxisY < 0)
    {
        cout << "3��и� �Դϴ�." << endl;
    }
    else if (AxisX < 0 && AxisY > 0)
    {
        cout << "4��и� �Դϴ�." << endl;
    }
    else
    {
        cout << "�߸��� �����Դϴ�." << endl;
        goto rewind;
    }

}

void LeapYear()
{
    int PreYear;
    cout << "������ �Ǻ��ϰ� ���� ������ �Է����ּ��� : ";
    cin >> PreYear;

    if ((PreYear % 4 == 0 && PreYear % 100 != 0) || PreYear % 400 == 0)
    {
        cout << "������ �½��ϴ�." << endl;
    }
    else
    {
        cout << "������ �ƴմϴ�." << endl;
    }
}

void SizeComparison()
{
    int Value1 = 0;
    int Value2 = 0;
    cout << "ù��° ���� �Է����ּ���.";
    cin >> Value1;
    cout << "�ι�° ���� �Է����ּ���.";
    cin >> Value2;

    if (Value1 > Value2)
    {
        cout << ">" << endl;
    }
    else if (Value1 < Value2)
    {
        cout << "<" << endl;
    }
    else
    {
        cout << "==" << endl;
    }
}
