#include <iostream>
#include <clocale>
#include <Windows.h>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

// ������� "������� ������"
void dropCoin()                                       
{
	srand(time(0));
	int a;
	a = 0 + rand() % 2;
	if (a == 0)
	{
		cout << "������ �����!\n";
	}
	else
	{
		cout << "����� ����!\n";
	}
};

// ������� "�����������"
void calculator()                                        
{
	float a;
	float b;
	int znak;
	cout << "a = ";
	cin >> a;
	cout << "1 = +; 2 = -; 3 = *; 4 = /\n";
	cin >> znak;
	cout << "b = ";
	cin >> b;

	switch (znak)
	{
	case 1: cout << a + b << endl;
	    break;
	case 2: cout << a - b << endl;
		break;
	case 3: cout << a * b << endl;
		break;
	case 4: cout << a / b << endl;
		break;
	}
};

// ������� "��������"
  void anecdots()                 
{
	srand(time(0));
	string a = "������� ��� ������ ������, �� ��������. ����������� � �����.\n";
	string b = "������ �� ��� �������, ������ ������� ��� ����\n";
	string c = "������� ���������\n";
	string d = "���� ��������\n";
	string e = "2 + 2 = 5\n";
	string h = "���\n";

		switch (0 + rand() % 5)
		{
		case(0): cout << a;
			break;
		case(1): cout << b;
			break;
		case(2): cout << c;
			break;
		case(3): cout << d;
			break;
		case(4): cout << e;
			break;
		case(5): cout << h;
			break;
		}

};

// ������� "������ ������"
void help()
{
	cout << "��� ��������� ������� �� ���: \n\n/help - ������� ������ ������  \n/dropCoin - ������������ ������� \n/calculator - ������� ����������� \n/anecdots - ����� ��������\n/date - ������� ��� ���?\n\n";

}                                                               



class bot                          // <--- ����� ������ ���� <---                             
{
private:
	int dateBot;
public:

	void set(int nameBot2)
	{
		dateBot = nameBot2;
	}

	void get()
	{
		int a;
	cout << "������� ���� ���?" << endl;
		cin >> a;
		cout <<  a << "? O�, � ��� - " << dateBot << endl;
}
};

int main() {
	setlocale(LC_CTYPE, "rus");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	
	bot Enot;

	cout << "////////////////////////////////| ������, � ���-Enot |\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n\n";
	help();

	while (1 > 0)
	{
		string a;
		cin >> a;

		if (a == "/dropCoin")
		{
			dropCoin();
		}
		if (a == "/calculator")
		{
			calculator();
		}
		if (a == "/anecdots")
		{
			anecdots();
		}
		if (a == "/help")
		{
			help();
		}
		if (a == "/date")
		{
			Enot.set(0 + (rand()) % 101);
			Enot.get();
		}
	}
	
system("pause");
return 0;
};