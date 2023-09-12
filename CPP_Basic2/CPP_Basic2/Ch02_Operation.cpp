#include "io.h"

void doSomething(int arith1, int arith2)
{

    // int arith1 = 10;
    // int arith2 = 20;

    int Sum = arith1 + arith2;
    int Sub = arith1 - arith2;
    int Mul = arith1 * arith2;
    int Div = arith1 / arith2;
    int Rest = arith1 % arith2;

    cout << Sum << endl
        << Sub << endl
        << Mul << endl
        << Div << endl
        << Rest << endl;

}

void OperationIncrementDecrement()
{
    // ���� ����
    int Increase = 0; // �ʱ�ȭ
    int Decrease = 10;

    Increase = Increase + 1; // �������� �� : ������(Step)
    Decrease = Decrease - 2;

    cout << Increase << endl << Decrease << endl;

    Increase += 1;
    Decrease -= 2;

    cout << Increase << endl << Decrease << endl;

    // Count : ���� - 1�� ����, ����
    Increase++;
    Decrease--;

    cout << Increase << endl << Decrease << endl;
}

void OperationComparison()
{
    // �� ������ ��� �� : ��/����, true/false, 1/0
    int Greater = 30;
    int Less = 10;

    cout << (Greater > Less) << endl; // > : greater than
    cout << (Greater < Less) << endl; // < : less than

    cout << (Greater >= Less) << endl;
    cout << (Greater <= Less) << endl;

    cout << (Greater == Less) << endl;
    cout << (Greater != Less) << endl;


}

void OperationLogical()
{
    // �� ����
    // AND : bool ���� ��� true�̸� ����� true,
    //       �ϳ��� false�̸� ����� false
    cout << (true && true) << endl;
    cout << (true && false) << endl;

    // OR : bool ���� ��� false�̸� ��� false,
    //      �ϳ��� true�̸� ����� true
    cout << (true || true) << endl;
    cout << (true || false) << endl;

    // ��� 90�̻��̰� ��� 90�̻��̸� ~
    int kor = 80;
    int eng = 95;

    // cout << ( kor >= 90 && eng >= 90 ) << endl;
    //  ��
    // cout << ( false && true ) << endl;
    //  ��
    // cout << ( false ) << endl;

    cout << !(kor >= 90 && eng >= 90) << endl;
    cout << (!(kor >= 90) && eng >= 90) << endl;
}

void OperationBit()
{
    // ��Ʈ ����
    int Bit1 = 15; // 00001111
    int Bit2 = 20; // 00010100

    int BitAnd = Bit1 & Bit2;
    // 00001111
    // 00010100
    // 00000100 => 2^0 * 0 + 2^1 * 0 + 2^2 * 1 = 4

    cout << BitAnd << endl;

    // 15 ���� ���� ��Ʈ �̵� ����
    // cout << ( Bit1 << 1 ) << endl;
    // 00001111
    // 00011110 => 2^0 * 0 + 2^1 * 1 + 2^2 * 1 + 2^3 * 1 + 2^4 * 1 = 0 + 2 + 4 + 8
    // + 16 = 30
}

void OperationTriple()
{
    // ���� ����
    cout << (3 > 5 ? "Hello" : "World") << endl;
    cout << (3 < 5 ? "Hello" : "World") << endl;
}