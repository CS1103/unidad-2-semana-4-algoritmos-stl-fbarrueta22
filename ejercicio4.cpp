#include<algorithm>
#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){
  vector<string> words = {"AACATGAAGG","TTTTGGCCAA","TTTGGCCAAA","GATCAGATTT","CCCGGGGGGA","ATCGATGCAT"};
    vector<int> pesos;
    for(auto &word_:words) {
        size_t cont = 0;
        string word_cp = word_;
        while (prev_permutation(word_cp.begin(), word_cp.end())) {
            cont++;
        }
        pesos.push_back(cont);
    }
    while(!is_sorted(pesos.begin(),pesos.end())) {
        auto it = words.begin();
        for (auto i = pesos.begin(); i != pesos.end(); ++i) {
            if (*i > *(i + 1) && i != pesos.end() - 1) {
                swap(*i, *(i + 1));
                swap(*it,*(it + 1));
            }
            ++it;
        }
    }
    for(auto &item:words){
      cout << item << std::endl;
    }

}
