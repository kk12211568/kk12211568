// week4 실습 Q3.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a, b;
    int k;

    cout << "Input N, M ->";
    cin >> a >> b;
    cout << "\n\n";                

    for (int z{ 1 }; z <= a; z=z+b)            //행(가장 큰 단위)에 들어갈 단락의 순서 범위 (ex 첫째행 1~3, 둘째행 4~6, 셋째행 7~9)
    {

        for (int y{ 1 }; y <= a; y++)          //한 행안에서 줄의 순서
        {
          
            for (int x{ z }; x < z+b; x++)     //한 줄에서의 단락 순서
            {
                if (x <=a)                                                               //a보다 크면 출력안함
                    cout << x << "*" << y << "= " << setw(3) << x * y << "\t\t";

                if (x % b == 0) cout << "\n";  //한 줄이 완료되면 아래로





            }
            
            if (y % a == 0) cout << "\n";      //한 행이 완료되면 한줄 띄기

        }
        
        
    }













}