//while 문을 사용하여 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
//-입력과 출력을 계속 반복하는 문제입니다.
//- 난이도 업 버전 : 정수 A가 10을 입력 받으면 while문을 탈출하시오

#include <iostream>

using namespace std;
bool StatusCheck();
void Input();
int  Process(int a, int b);
void Output();

int a, b;
bool Status = true;

int main()
{
	while (Status)
	{
		Input();
		
		Process(a,b);

		Output();
	}
	return 0;
}

bool StatusCheck()
{
	if (a == 10)
		Status = false;
	return Status;
}

void Input()
{
	cout << "두 수를 입력하세요(정수), 첫번째 수가 10이면 마침니다." << endl;
	cout << "첫번째수 : ";
	cin >> a;

	StatusCheck();

	cout << "두번째수 : ";
	cin >> b;
}

int Process(int a, int b)
{
	return a + b;
}

void Output()
{
	cout << a << " + " << b << " = " << Process(a, b) << endl << endl << endl;
}
