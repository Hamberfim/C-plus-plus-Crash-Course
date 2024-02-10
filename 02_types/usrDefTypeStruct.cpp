#include <iostream>
using namespace std;

// Plain Old Data Class (POD) - pod's are C/C++ compatible
struct Book {
  // members -general rule - order members from larger to smaller
  string title;
  string author;
  int pubYear;
  int pageCount;
  bool isHardCover;
};

int main(void) {
  Book c_programming;
  c_programming.title = "C/C++ Programming";
  c_programming.author = "S.G. Kochan";
  c_programming.pubYear = 2018;
  c_programming.pageCount = 400;
  c_programming.isHardCover = false;

  cout << c_programming.title << " by " << c_programming.author << endl;

  return 0;
}
