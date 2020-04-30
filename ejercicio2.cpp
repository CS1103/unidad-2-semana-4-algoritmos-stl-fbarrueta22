#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
  int casos;
  cout<<"Ingrese la cantidad de casos: "; cin>>casos;
  for(int i=0;i<casos; i++){
    int array[100], n, c, d, swap;

    printf("Enter number of elements\n");
    scanf("%d", &n);

    printf("Enter %d integers\n", n);

    for (c = 0; c < n; c++)
      scanf("%d", &array[c]);

    int suma;
    for (c = 0 ; c < ( n - 1 ); c++)
    {
      for (d = 0 ; d < n - c - 1; d++)
      {
        if (array[d] > array[d+1]) /* For decreasing order use < */
        {
          swap       = array[d];
          array[d]   = array[d+1];
          array[d+1] = swap;
          suma++;
        }
      }
    }
    cout<<suma<<endl;
    for ( c = 0 ; c < n ; c++ )
      cout<<array[c]<<" ";
    }

  return 0;
}
