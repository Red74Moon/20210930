//while ���� ����Ͽ� �� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//-�Է°� ����� ��� �ݺ��ϴ� �����Դϴ�.
//- ���̵� �� ���� : ���� A�� 10�� �Է� ������ while���� Ż���Ͻÿ�

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
	cout << "�� ���� �Է��ϼ���(����), ù��° ���� 10�̸� ��ħ�ϴ�." << endl;
	cout << "ù��°�� : ";
	cin >> a;

	StatusCheck();

	cout << "�ι�°�� : ";
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
