#include<iostream>
using namespace std;

int adult;
int teen;
int x;
int y;

int main(void) {
	int a;

	cout << "**��ȭ ���� �ý���**" << endl;
	cout << endl;
	cout << "1. �¼� ����" << endl;
	cout << "2. ���� ����" << endl;
	cout << "3. ���α׷� ����" << endl;
	cout << "��ȣ�� �Է��ϼ��� :";
	cin >> a;

	if (a == 1) {
		cout << endl << endl;
		cout << "1 2 3 4 5 6" << endl;
		cout << "------------" << endl;
		cout << endl;

		int arr[10][6];

		int seat = 0;
		for (int i = 0; i < 10; ++i) {
			for (int j = 0; j < 6; ++j) {
				arr[i][j] = 0;
			}
		}

		for (int i = 0; i < 10; ++i) {
			for (int j = 0; j < 6; ++j) {
				cout << arr[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl << "���� (14000��) : ";
		cin >> adult;

		cout << endl << "û�ҳ� (11000��) : ";
		cin >> teen;

		for (int i = 0; i < adult + teen; ++i) {
			cout << endl << "�� ��, �� ��° �¼��� �����Ͻðڽ��ϱ�? " << endl;

			cin >> x >> y;

			cout << endl;
			if (x >= 1 && x <= 6 && y >= 1 && y <= 10)
			{
				if (arr[x] == 0, arr[y] == 0);
				{
					cout << "����Ǿ����ϴ�. " << endl;
					arr[x], [y] = 1;
				}
				else {
					cout << "�̹� ����Ǿ����ϴ�. �ٸ� �ڸ��� �����ϼ���. " << endl;
				}
			}

		}


		return 0;
	}

	else if (a == 2)
	{
		cout << "���� �¼� (n��, m��°): ";
		cin >> x >> y;


	}

	else if (a == 3)
	{
		int total;
		total = (14000 * adult) + (11000 * teen);

		cout << "��" << total << "�� �Դϴ�.";
		return 0;
	}

	else {
		cout << "�ùٸ� ���ڸ� �Է����ּ���" << endl << endl;
	}
		
return 0;
}
