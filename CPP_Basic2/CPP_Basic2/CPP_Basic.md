//마크다운 문법
# 프로그래밍(네이밍) 표기법
 - 프로그래밍 언어에서는 대소문자 구문
 - 가독성과 연관되어있음
 - 변수 함수 클래스 등의 이름을 정할 때 여러 개의 영단어를 사용할 때 각각의 단어를 구분
 - 일반적인 문장 : unreal engine function variable
 - 언리얼엔진은 파스칼 케이스

#### 일반적인 문장 : unreal engine function variable
 - Snake Case : unreal_engine_function_variable
 - Kebab Case : unreal-engine-function-variable
 - Camel Case : unrealEnginefunctionVariable
 - Pascal Case : UnrealEngineFunctionVariable(언리얼엔진 표준)

## 명령어,예약어
 - C++에서 명령어로 사용되기로 정해져있는 구문
 - 변수, 함수의 이름을 명명할 때 예약어와 중복되지 않도록 이름을 명명하여야 한다.

##### 주석
 - 실행되지 않는 설명 부분

##### 데이터 종류
- 숫자
  + 정수형 타입
  + 실수형 타입
- 문자

## bit, byte 8 bit => 1 byte
- bit : 컴퓨터 데이터의 최소 단위
- byte : 컴퓨터 데이터 의미의 최소 단위

컴퓨터가 사용하는 숫자 진법(진수) : 2진수(0,1)

* 8진수 : 0,1,2,3,4,5,6,7
* 10진수 : 0,1,2,3,4,5,6,7,8,9
* 16진수 : 0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f

1 bit => 0,1 저장 가능 => 2가지 저장 가능
2 bit => 2 * 2  => 4개
3 bit => 2 * 2 * 2 => 8개
4 bit => 2 * 2 * 2 * 2 => 16개
...
8 bit => 2^8 => 256개

1. 네트워크
192.168.0.1 / [0~255].[0~255].[0~255].[0~255]

2. 색 표현(RGB color - 24bit true color)
R - 8bit
G - 8bit
B - 8bit
Red : #FF00
(2^4 == 16^1)

3. 문자 표현 : UTF-8, EUC-KR
UTF-8 : 2byte 아래로 여러 언어 문자를 표현

연산자와 연산
- 값과 값 사이에 위치하는 기호 : 연산자

대입연산
- 대입 연산자 : =
- 리터럴 상수 : 123, 1000, 10(문자도 상수)

증감연산
- 증가, 감소연산
- 특정 정수 값의 크기만큼 증가 또는 감소

논리연산
- 참/거짓을 판단하는 연산
- AND(그리고) 연산 : &&
- OR(또는) 연산 : ||
- NOT(부정) 연산 :: !

비트연산
- 10진수 숫자 값, 문자 값을 그대로 데이터로 다루는 것이 아니라, 2진수 데이터로 변경한 후 2진수 데이터를 연산
- 비트 연산은 각 자리수 2진수끼리 연산
- 비트 이동 연산 : 각 비트의 자리를 이동 연산

삼항연산
- 조건식(비교식) 결과 값이 true/false 일 때,
- true 이면 콜론 기준 앞의 값이 선택
- false 이면 콜론 기준 뒤의 값이 선택

if / else if / else
표현식의 결과값이 true/false 인지 판단하여 각 해당 분기의 명령을 실행

if (표현식1)
{
  표현식이 참일 때 실행
}
else if(표현식2)
{
  표현식2가 참일 때 실행
}
else
{
  
}

- if 구문의 실행 분기 선택 여부는 if 가 다루는 bool type 값(true/false)에 따라서 결정

- if 옆의 값이 사용되는 괄호 부분에 bool type 값이 사용되면 분기 선택이 가능함
if(true){실행}
if(false){미실행}
if(1){실행}
if(0){미실행}

for 구문
for(구문1; 구문2; 구문3)
{
  - 구문1 : for 처음 실행 될 때 한번만 실행
  - 구문2 : for 반복문이 실행될 때마다 조건을 비교하는 비교 구문
  - 구문3 : for loop가 반복 실행될 때 코드블록을 실행한 이후에 실행되는 구문
}

ex)
for(i=0; i<5; i++)
{

}

parameter(형식매개변수) 와 argument(실제매개변수)

함수 선언(정의)
void Function(para) <= parameter
{

}

함수 호출 
Function(10); <= 10 : argument


# 클래스
 - 객체지향 프로그래밍의 대표적인 기법
 - 구조체로부터 업그레이드 된 기법
	- 구조체 : 변수만으로 구성된 집합체
	- 클래스 : 변수와 함수로 구성된 집합체
 
 - 객체지향 프로그래밍의 특징
	- 추상화
	- 캡슐화
	- 정보 은닉
	- 상속성
	- 다형성
 
 - 클래스의 구성
	- 변수 : 멤버 변수 / 프로퍼티
	- 함수 : 멤버 함수 / 메서드

 - 클래스의 의미
	- 클래스
	  - 설계도

	- 객체 / 인스턴스
	  - 클래스를 통해서 생성된 실체

## 선언
#### 구조체 선언

```
struct Car
{
	char name[30]
	char model[30]
	int year;
	int TireSize;
	char Color;
}

Car BMW = {"X7", "xDrive401",2023,23,"Black"}

Car Jeep = {"Rubicon", "" }

void Drive(char name[30]){}
void Break(char name[30]){}
void Parking(char name[30]){}
void Rear(char name[30]){}

```

#### 클래스 선언 

```
class Car
{
	char name[30]
	char model[30]
	int year;
	int TireSize;
	char Color[30];

	void Drive(char name[30]){}
	void Break(char name[30]){}
	void Parking(char name[30]){}
	void Rear(char name[30]){}

}
```
