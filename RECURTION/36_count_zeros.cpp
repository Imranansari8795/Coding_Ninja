#include <iostream>

using namespace std;

int countZeros(int num)
{
    if (num == 0)
    {
        return 1;
    }
    if(num < 10)
    {
        return 0;
    }
    int small_ans = countZeros(num / 10);

    int las_digit = num % 10;

    if (las_digit == 0)
    {
        return 1 + small_ans;
    }
    else
    {
        return small_ans;
    }
    // }
}
int main()
{
    int num;
    cout << "enter number" << endl;
    cin >> num;
    cout << countZeros(num);
}