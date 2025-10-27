// COMSC210 | Lab 25 | Tanmayee Chalamalasetti
// IDE Used: VS Code
#include <chrono>
#include <fstream>
#include <iostream>
#include <list>
#include <set>
#include <string>
#include <vector>
using namespace std;
using namespace std::chrono;

int main() {
  string file = "codes.txt";
  string s;
  // Race 1: Reading

  // vector
  auto start = high_resolution_clock::now();
  ifsteam fin1(file);
  vector<string> v;
  while (fin1 >> s) {
  }

  return 0;
}

/* syntax examples:
auto start = high_resolution_clock::now()
auto end = high_resolution_clock::now()
auto duration = duration_cast<milliseconds>(end - start)
duration.count() references elapsed milliseconds
*/