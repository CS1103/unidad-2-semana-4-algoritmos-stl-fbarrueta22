#include<list>
#include<iostream>
#include<vector>
using namespace std;

int main(){

  list<int> fact;
  vector<int> monts;
     int monto = 0;
     int days;
     do{
       cin >> days;
       if(days!=0){
         for(size_t i = 0; i<days; ++i){
             int c_fact; cin >> c_fact;
             for(size_t i = 0; i<c_fact;++i){
                 int imp; cin >> imp;
                 fact.push_back(imp);
             }
             fact.sort();
             int mayor = fact.back();
             int menor = fact.front();
             monto += mayor - menor;
             fact.pop_back(); fact.pop_front();
         }
         monts.push_back(monto);

       }
       monto=0;
   }while(days!=0);

   for(const auto& element: monts){
     cout<<element<<endl;
   }

}
