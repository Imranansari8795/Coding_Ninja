#include<iostream>
using namespace std;




int subset(int input[], int n, int output[][20])
{
    if (n == 0)
    {
        output[0][0] = 0;
        return 1;
    }

    int size = subset(input + 1, n - 1, output);
cout<<"hello"<<endl;
    for (int i = 0; i < size; i++)
    {
        output[size + i][0] = output[i][0] + 1;
        output[size + i][1] = input[0];
        for (int j = 2; j < output[size + i][0] + 1; j++)
        {
            output[size + i][j] = output[i][j - 1];
        }
    }
    return 2 * size;
}


int main() {
  int input[20],length, output[35000][20];
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];
  
  int size = subset(input, length, output);

  for( int i = 0; i < size; i++) { 
	for( int j = 1; j <= output[i][0]; j++) { 
		cout << output[i][j] << " ";
    }
    cout << endl;
  }
}