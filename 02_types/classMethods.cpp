#include <iostream>

// class with a method as a member
struct TrackYear {
  void add_year() { year++; }
  int year;
};

int main(void) {
  TrackYear birthYear;
  birthYear.year = 1966;

  birthYear.add_year();
  printf("Year: %d\n", birthYear.year);

  birthYear.add_year();
  printf("Year: %d\n", birthYear.year);

  return 0;
}