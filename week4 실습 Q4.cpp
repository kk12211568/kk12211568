// week4 실습 Q4.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <iomanip>


using namespace std;

int main()
{   
    int a, b;
    int k = 1;

    cin >> a >> b;

    
    
    for (int x{ 1 }; x < 100; x++)
    {   
        
        if (x % a == 0 || x % b == 0)
        {
            cout << setw(5) << x;

            k++;

        }
        
        if (k % 5 == 0)
            cout << "\n";
        
        



    }












}