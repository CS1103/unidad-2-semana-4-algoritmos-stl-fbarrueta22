#include<iostream>
using namespace std;

int main(){
  int n,temp[100], list,sum=1;
  bool flag=1;
  double array[100];
  cout<<"Ingrese la cantidad de casos: "; cin>>n;
  for(int i=0;i<n;i++){
    printf("Ingrese el numero de la lista\n");
    scanf("%d", &list);
    for (int c = 0; c < list; c++)
      scanf("%d", &temp[c]);
    for (int c = 0; c < list; c++)
      cin>>array[c];

    while(true){
      for (int c = 0; c < list; c++)
        if(temp[c]==sum){
          cout<<array[c]<<endl;
        }
        sum++;
        if(sum==list+1){
          break;
        }
    }
  }

  return 0;
}
