#include <iostream>

using namespace std;

int main()
{
    int n,sum=0;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i*(n-i+1);
    }
    cout << "Rezultatul este " << sum;
    return 0;
}