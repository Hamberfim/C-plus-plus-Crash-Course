#include <iostream>

// user defined data types
enum class CarDoorClassification {
  two_door,
  four_door,
  station_wagon,
  hatchback,
  minivan,
};

void CarDescription(CarDoorClassification car);

int main(void) {
  CarDoorClassification smCar = CarDoorClassification::two_door;
  CarDoorClassification van = CarDoorClassification::minivan;

  CarDescription(smCar);
  CarDescription(van);

  return 0;
}

void CarDescription(CarDoorClassification car) {
  switch (car) {
  case CarDoorClassification::two_door: {
    printf("Two door car, usually with two small rear seats.\n");
  } break;

  case CarDoorClassification::four_door: {
    printf("Four door car, usually seats 5-6 people.\n");
  } break;

  case CarDoorClassification::station_wagon: {
    printf("Four door car with rear hatch/tailgate, usually seats 6-8 "
           "people.\n");
  } break;

  case CarDoorClassification::hatchback: {
    printf("Two or Four door car with rear hatch, usually seats 4-6 "
           "people.\n");
  } break;

  case CarDoorClassification::minivan: {
    printf("Three door & sliding side door van with rear hatch, usually seats "
           "6-9 people.\n");
  } break;

  default: {
    printf("ERROR! Unknow classification.\n");
  } break;
  }
}