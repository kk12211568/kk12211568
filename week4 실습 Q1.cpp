// week4 실습 Q1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

int main()
{
	int num;


	cout << "원하시는 숫자를 입력하세요 ->\t";
	cin >> num;

	cout << "\n\n";

	for (int x{ 1 }; x<=2*num-1; x++)
	{
		if (x <= num)
		{
			for (int y{ 1 }; y < num + x; y++)
			{
				if (y <= num - x)
					cout << " ";

				if (y > num - x && y < num + x)
					cout << "*";


			}
		}
		if (x > num)
		{
			for (int z{ 1 }; z <= 2 * num - 1 - (x - num); z++)
			{
				if (z <= x - num)
					cout << " ";

				if (z > x - num && z <= 2 * num - 1 - (x - num))
					cout << "*";


			}


		}
		


		cout << "\n";

	}

	cout << "\n\n\n";

}