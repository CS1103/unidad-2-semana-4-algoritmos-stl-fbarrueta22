#include<iostream>
#include<string>
#include <algorithm>
#include<vector>
using namespace std;

void ordena_seleccionapalabra(string temp){
  string temp2;
  vector<string> palabras;
  temp2=temp;
  sort(temp.begin(), temp.end());
  while(next_permutation(temp.begin(), temp.end())){
    palabras.push_back(temp);
  }
  for(size_t i=0;i<palabras.size();i++){
    if(temp2==palabras[i] && temp2!=palabras[palabras.size()-1]) cout<<palabras[i+1]<<endl;
  }
  if(temp2==palabras[palabras.size()-1]) cout<<"No Successor"<<endl;

}

int main(){
  string temp;
  do{
    if(temp!="fin"){
      cout<<"Ingrese secuencia: "; cin>>temp;
      if(temp.size()<50)
        ordena_seleccionapalabra(temp);
      else
        cout<<"Cantidad de caracteres excedidos";
    }
  }while(temp!="fin");


  return 0;
}
