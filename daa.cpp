#include <iostream>
#include <time.h>

using namespace std;
int main()
{
    srand(time(0)); 
    int m;
    int n;
    cout<<"Enter the number of rows: ";
    cin>>m; 
    cout<<"Enter the number of columns: ";
    cin>>n;
    for (int i = 1;i<=m;i++)
    {
        for (int j = 1; j<=n;j++)
        {
            int k=rand()%2;
            cout<<k<<"  ";
        }   
    cout<<endl;
    }  
}

