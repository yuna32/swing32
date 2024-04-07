#include <iostream>
#include <string>
using namespace std;

int total(int* p);

void order();

int a;
char b;
int c;
int total(int* p) {
	return 0;
}

int main() {
	string menu[] = { "일반 라면", "김치 라면", "치즈 라면", "떡 라면", "떡 만두 라면" };
	int prices[] = { 3500, 4000, 4200, 4300, 4500 };
	int select = 0;
	int* p;
	p += &prices[a - 1];

	while (select != -1)
	{
		order();
		cout << "구매하실 라면 번호를 입력해 주세요 (종료는 0): ";
		cin >> a;
		cout << endl;
		for (int j = 0; j < 6; j++)
		{
			if (a >= 1 && a <= 5)
			{
				cout << menu[a-1] << "을(를) 구매하시겠습니까 ? (Y/N) ";
				cin >> b;
				if (b == 'Y')
				{
					cout << "구매하실 라면 개수를 입력해 주세요 :";
					cin >> c;
					cout << endl;
					cout << menu[a-1] << c << "개를 구매하셨습니다." << endl;
					cout << "가격은" << prices[a-1] << "원 입니다." << endl;
					
					cout << endl;
				}
				else if (b == 'N')
				{
					cout << endl;
				}
			}

			else if (a == 0) {
					cout << "총 가격은" << total << "원 입니다." << endl;
					break;
			}

			else {
					cout << "제대로 된 숫자를 입력해 주세요." << endl;
			}
				break;
		}
	}
return 0;
}

void order()
{
	cout << "***** 슈니의 라면가게에 오신 것을 환영합니다 *****" << endl;
	cout << endl;
	cout << "1. 일반 라면 (3500원)" << endl;
	cout << "2. 김치 라면 (4000원)" << endl;
	cout << "3. 치즈 라면 (4200원)" << endl;
	cout << "4. 떡 라면 (4300원)" << endl;
	cout << "5. 떡 만두 라면 (4500원)" << endl;
	cout << endl;
}
