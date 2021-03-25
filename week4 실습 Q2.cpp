// week4 실습 Q2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

int main()
{   
    int num;
    int result = 1;
    
 
    cout << "원하는 자연수를 입력하세요->\t";
    cin >> num;


    for (int x{ num }; x > 0; x--)
        result = result * x;

      



    cout << "\n" << num << "! =\t" << result;

}