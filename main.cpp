//while ���� ����Ͽ� �� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//-�Է°� ����� ��� �ݺ��ϴ� �����Դϴ�.
//- ���̵� �� ���� : ���� A�� 10�� �Է� ������ while���� Ż���Ͻÿ�

#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	int a, b;
	bool Status = true;

	system("cls");

	while (Status)
	{
		cout << "�� ���� �Է��ϼ���, ù��° ���� 10�̸� ��ħ�ϴ�." << endl;
		cout << "ù��°�� : ";
		cin >> a;

		if (a == 10)
		{
			Status = false;
			break;
		}

		cout << "�ι�°�� : ";
		cin >> b;

		cout << a << " + " << b << " = " << a + b << endl << endl << endl;

		if (a == 10)
		{
			Status = false;
		}

	}
	return 0;
}