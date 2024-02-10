#include <iostream>

// class with a method as a member
struct TrackYear {
  // constructor
  TrackYear(int year_in) {
    if (!set_year(year_in)) {
      year = 2023;
    }
  }

  void add_year() { year++; }

  bool set_year(int new_year) {
    if (new_year < 2023) {
      return false;
    }
    year = new_year;
    return true;
  }
  int get_year() { return year; }

private:
  int year;
};

int main(void) {
  //   TrackYear someYear;
  //   if (!someYear.set_year(2018)) {
  //     someYear.set_year(2023);
  //   }

  // using the constructor
  TrackYear someYear{1966};

  someYear.add_year();
  printf("Year: %d\n", someYear.get_year());

  someYear.add_year();
  printf("Year: %d\n", someYear.get_year());

  return 0;
}