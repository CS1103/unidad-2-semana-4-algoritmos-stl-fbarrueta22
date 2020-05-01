#include <stdio.h>
#include<iostream>
#include<map>
#include <iomanip>
using namespace std;

int main(){
  map<char,int> values;
  int opc;
  cin >> opc;
  for(size_t i=0; i<opc; ++i){
      int n_caracteres; cin >> n_caracteres;
      for(size_t i=0; i<n_caracteres ; ++i){
          char c_; int val_;
          cin >> c_ >> val_;
          values.insert(pair<char,int>(c_,val_));
      }
  }
  float precio = 0;
  int lines; cin >> lines; lines++;
  while(lines--){
      string line;
      getline(cin,line);
      for(auto item:line){
          if(item == values.find(item)->first) {
              precio += values.find(item)->second; }
      }
  }
  cout << fixed << setprecision(2) << precio/100 << "$";
}
