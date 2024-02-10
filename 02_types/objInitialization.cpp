#include <iostream>
using namespace std;

// init POD
struct PodStruct {
  uint64_t A;
  char B[256];
  bool C;
};

int main(void) {
  // initializing a fundamental type to zero
  int a = 0;
  int b{};
  int c = {};
  int d;

  printf("a: %d, b: %d, c: %d, d: %d\n", a, b, c, d);

  PodStruct initPod1{};
  PodStruct initPod2 = {};
  PodStruct initPod3{57, "Say Hello"};
  PodStruct initPod4{57, "Say Hello", true};
  PodStruct initPod5 = {57, "Say goodbye", false};

  printf("initPod1  A: %ld, B: %s, C: %d\n", initPod1.A, initPod1.B,
         initPod1.C);
  printf("initPod2  A: %ld, B: %s, C: %d\n", initPod2.A, initPod2.B,
         initPod2.C);
  printf("initPod3  A: %ld, B: %s, C: %d\n", initPod3.A, initPod3.B,
         initPod3.C);
  printf("initPod4  A: %ld, B: %s, C: %d\n", initPod4.A, initPod4.B,
         initPod4.C);
  printf("initPod5  A: %ld, B: %s, C: %d\n", initPod5.A, initPod5.B,
         initPod5.C);

  return 0;
}