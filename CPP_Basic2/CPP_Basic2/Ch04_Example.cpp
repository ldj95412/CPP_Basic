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
        cout << "요리를 시작할 시간을 입력해주세요" << endl;
        cin >> Hours;

        if (0 <= Hours && 24 > Hours)
        {

        }
        else
        {
            cout << "잘못된 시간 입력입니다." << endl;
            continue;
        }

        cout << "요리를 시작할 분을 입력해주세요" << endl;
        cin >> Minutes;

        if (0 <= Minutes && 60 > Minutes)
        {

        }
        else
        {
            cout << "잘못된 시간 입력입니다." << endl;
            continue;
        }
        cout << "시간을 세팅할 분을 입력해주세요" << endl;
        cin >> SetMinutes;

        if (0 <= SetMinutes && 1000 >= SetMinutes)
        {

        }
        else
        {
            cout << "잘못된 시간 입력입니다." << endl;
            continue;
        }

        Minutes = SetMinutes + Minutes;
        Hours = (Minutes / 60) + Hours;
        Minutes = Minutes % 60;

        if (Hours > 23)
        {
            Hours -= 24;
            cout << Hours << "시 " << Minutes << "분에 요리가 완료될 예정입니다..";
            break;
        }
        else
        {
            cout << Hours << "시 " << Minutes << "분에 요리가 완료될 예정입니다..";
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
        cout << "알람을 설정할 시간을 입력해주세요" << endl;
        cin >> Hours;

        if (0 <= Hours && 24 > Hours)
        {

        }
        else
        {
            cout << "잘못된 시간 입력입니다." << endl;
            continue;
        }

        cout << "알람을 설정할 분을 입력해주세요" << endl;
        cin >> Minutes;

        if (0 <= Minutes && 60 > Minutes)
        {

        }
        else
        {
            cout << "잘못된 시간 입력입니다." << endl;
            continue;
        }

        if (Minutes > 44)
        {
            Minutes -= 45;
            cout << Hours << "시 " << Minutes << "분으로 알람설정이 완료되었습니다.";
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
            cout << Hours << "시 " << Minutes << "분으로 알람설정이 완료되었습니다.";
            break;
        }
    }


}

void PickQuadrant()
{
rewind:
    int AxisX;
    int AxisY;
    cout << "X 좌표를 입력하세요. : ";
    cin >> AxisX;
    cout << "Y 좌표를 입력하세요. : ";
    cin >> AxisY;

    if (AxisX > 0 && AxisY > 0)
    {
        cout << "1사분면 입니다." << endl;
    }
    else if (AxisX > 0 && AxisY < 0)
    {
        cout << "2사분면 입니다." << endl;
    }
    else if (AxisX < 0 && AxisY < 0)
    {
        cout << "3사분면 입니다." << endl;
    }
    else if (AxisX < 0 && AxisY > 0)
    {
        cout << "4사분면 입니다." << endl;
    }
    else
    {
        cout << "잘못된 접근입니다." << endl;
        goto rewind;
    }

}

void LeapYear()
{
    int PreYear;
    cout << "윤년을 판별하고 싶은 연도를 입력해주세요 : ";
    cin >> PreYear;

    if ((PreYear % 4 == 0 && PreYear % 100 != 0) || PreYear % 400 == 0)
    {
        cout << "윤년이 맞습니다." << endl;
    }
    else
    {
        cout << "윤년이 아닙니다." << endl;
    }
}

void SizeComparison()
{
    int Value1 = 0;
    int Value2 = 0;
    cout << "첫번째 값을 입력해주세요.";
    cin >> Value1;
    cout << "두번째 값을 입력해주세요.";
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
