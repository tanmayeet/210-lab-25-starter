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
  auto start_v = high_resolution_clock::now();
  ifstream fin1(file);
  vector<string> v;
  while (fin1 >> s) {
    v.push_back(s);
    fin1.close();
  }
  auto end_v = high_resolution_clock::now();
  auto duration_v = duration_cast<milliseconds>(end_v - start_v);
  std::cout << "Time taken: " << duration_v.count() << " milliseconds\n";

  // list
  auto start_l = high_resolution_clock::now();
  ifstream fin2(file);
  list<string> l;
  while (fin2 >> s) {
    l.push_back(s);
    fin1.close();
  }
  auto end_l = high_resolution_clock::now();
  auto duration_l = duration_cast<milliseconds>(end_l - start_l);
  std::cout << "Time taken: " << duration_l.count() << " milliseconds\n";

  // set
  auto start_s = high_resolution_clock::now();
  ifstream fin3(file);
  set<string> set;
  while (fin3 >> s) {
    set.insert(s);
    fin1.close();
  }
  auto end_s = high_resolution_clock::now();
  auto duration_s = duration_cast<milliseconds>(end_s - start_s);
  std::cout << "Time taken: " << duration_s.count() << " milliseconds\n";

  return 0;
}

/* syntax examples:
auto start = high_resolution_clock::now()
auto end = high_resolution_clock::now()
auto duration = duration_cast<milliseconds>(end - start)
duration.count() references elapsed milliseconds
*/