#include <iostream>

using namespace std;

int main()
{
    int size;
    cout << "Enter the size:" << endl;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the sum of sub array number" << endl;
    int num;
    cin >> num;
   
   int i = 0, j = 0, sum = 0, st = -1,en = -1;

   while(j < size && arr[j] + sum <= num)
   {
        sum += arr[j];
        j++;
   }

   if(sum == num)
   {
      cout << i + 1<< " " << j <<endl;
      return 0;
   }

   while(j < size)
   {
        sum += arr[j];

        while(sum > num)
        {
            sum -= arr[i];
            i++;
        }

        if(sum == num)
        {
           st = i + 1;
           en = j + 1;
           break;
        }
        j++;
   }
   cout<<st<<" "<<en<<endl;
}