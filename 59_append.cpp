#include <bits/stdc++.h>
#include<fstream>
using namespace std;
int main() {
   fstream f;
   ifstream fin;
      fin.open("text1.txt");
      ofstream fout;
      fout.open("text2.txt", ios::app);
   if (!fin.is_open()) {
      cout << "nt";
   } else {
      fout << fin.rdbuf();
   }
   string word;
   f.open("text2.txt");
   while (f >> word) {
      cout << word << " ";
   }
   return 0;
}