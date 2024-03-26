#include<iostream>
using namespace std;

int adult; //성인 
int teen; //청소년
int x; //가로 행
int y; //세로 열

int main(void) {
	int a;

	cout << "**영화 예약 시스템**" << endl;
	cout << endl;
	cout << "1. 좌석 예약" << endl;
	cout << "2. 예약 변경" << endl;
	cout << "3. 프로그램 종료" << endl;
	cout << "번호를 입력하세요 :";
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
		cout << endl << "성인 (14000원) : ";
		cin >> adult;

		cout << endl << "청소년 (11000원) : ";
		cin >> teen;

		for (int i = 0; i < adult + teen; ++i) {
			cout << endl << "몇 열, 몇 번째 좌석을 예약하시겠습니까? " << endl;

			cin >> x >> y;

			cout << endl;
			if (x >= 1 && x <= 6 && y >= 1 && y <= 10)
			{
				if (arr[x] == 0, arr[y] == 0);
				{
					cout << "예약되었습니다. " << endl;
					arr[x], [y] = 1;
				}
				else {
					cout << "이미 예약되었습니다. 다른 자리를 선택하세요. " << endl;
				}
			}

		}


		return 0;
	}

	else if (a == 2)
	{
		cout << "변경 좌석 (n열, m번째): ";
		cin >> x >> y;


	}

	else if (a == 3)
	{
		int total; //가격 합계
		total = (14000 * adult) + (11000 * teen);

		cout << "총" << total << "원 입니다.";
		return 0;
	}

	else {
		cout << "올바른 숫자를 입력해주세요" << endl << endl;
	}
		
return 0;
}
