#include <stdio.h>
#include <string.h>
#include "minunit.h"
#include "fizzbuzz.h"

int tests_run = 0;

static char * fizzbuzz_1_should_be_1() {
  char * str = fizzbuzz(1);
  printf("call ret 1: %s\n",str);
  mu_assert("error, fizzbuzz(1) != \"1\"", strcmp(str,"1") == 0);
  return 0;
}

static char * fizzbuzz_2_should_be_2() {
  char * str = fizzbuzz(2);
  printf("call ret 2: %s\n",str);
  mu_assert("error, fizzbuzz(2) != \"2\"", strcmp(str,"2") == 0);
  return 0;
}

static char * fizzbuzz_3_should_be_fizz() {
  char * str = fizzbuzz(3);
  printf("call ret 3: %s\n",str);
  mu_assert("error, fizzbuzz(3) != \"fizz\"", strcmp(str,"fizz") == 0);
  return 0;
}

static char * fizzbuzz_4_should_be_4() {
  char * str = fizzbuzz(4);
  printf("call ret 4: %s\n",str);
  mu_assert("error, fizzbuzz(4) != \"4\"", strcmp(str,"4") == 0);
  return 0;
}

static char * fizzbuzz_5_should_be_buzz() {
  char * str = fizzbuzz(5);
  printf("call ret 5: %s\n",str);
  mu_assert("error, fizzbuzz(5) != \"buzz\"", strcmp(str,"buzz") == 0);
  return 0;
}

static char * fizzbuzz_6_should_be_fizz() {
  char * str = fizzbuzz(6);
  printf("call ret 6: %s\n",str);
  mu_assert("error, fizzbuzz(6) != \"fizz\"", strcmp(str,"fizz") == 0);
  return 0;
}

static char * fizzbuzz_7_should_be_7() {
  char * str = fizzbuzz(7);
  printf("call ret 7: %s\n",str);
  mu_assert("error, fizzbuzz(7) != \"7\"", strcmp(str,"7") == 0);
  return 0;
}

static char * fizzbuzz_8_should_be_8() {
  char * str = fizzbuzz(8);
  printf("call ret 8: %s\n",str);
  mu_assert("error, fizzbuzz(7) != \"8\"", strcmp(str,"8") == 0);
  return 0;
}

static char * fizzbuzz_9_should_be_fizz() {
  char * str = fizzbuzz(9);
  printf("call ret 9: %s\n",str);
  mu_assert("error, fizzbuzz(9) != \"fizz\"", strcmp(str,"fizz") == 0);
  return 0;
}

static char * fizzbuzz_10_should_be_buzz() {
  char * str = fizzbuzz(10);
  printf("call ret 10: %s\n",str);
  mu_assert("error, fizzbuzz(10) != \"buzz\"", strcmp(str,"buzz") == 0);
  return 0;
}

static char * fizzbuzz_11_should_be_11() {
  char * str = fizzbuzz(11);
  printf("call ret 11: %s\n",str);
  mu_assert("error, fizzbuzz(11) != \"11\"", strcmp(str,"11") == 0);
  return 0;
}

static char * fizzbuzz_12_should_be_fizz() {
  char * str = fizzbuzz(12);
  printf("call ret 12: %s\n",str);
  mu_assert("error, fizzbuzz(12) != \"fizz\"", strcmp(str,"fizz") == 0);
  return 0;
}

static char * fizzbuzz_13_should_be_13() {
  char * str = fizzbuzz(13);
  printf("call ret 13: %s\n",str);
  mu_assert("error, fizzbuzz(13) != \"13\"", strcmp(str,"13") == 0);
  return 0;
}

static char * fizzbuzz_15_should_be_fizzbuzz() {
  char * str = fizzbuzz(15);
  printf("call ret 15: %s\n",str);
  mu_assert("error, fizzbuzz(15) != \"fizzbuzz\"", strcmp(str,"fizzbuzz") == 0);
  return 0;
}

static char * all_tests() {
  mu_run_test(fizzbuzz_1_should_be_1);
  mu_run_test(fizzbuzz_2_should_be_2);
  mu_run_test(fizzbuzz_3_should_be_fizz);
  mu_run_test(fizzbuzz_4_should_be_4);
  mu_run_test(fizzbuzz_5_should_be_buzz);
  mu_run_test(fizzbuzz_6_should_be_fizz);
  mu_run_test(fizzbuzz_7_should_be_7);
  mu_run_test(fizzbuzz_8_should_be_8);
  mu_run_test(fizzbuzz_9_should_be_fizz);
  mu_run_test(fizzbuzz_10_should_be_buzz);
  mu_run_test(fizzbuzz_11_should_be_11);
  mu_run_test(fizzbuzz_12_should_be_fizz);
  mu_run_test(fizzbuzz_13_should_be_13);
  mu_run_test(fizzbuzz_15_should_be_fizzbuzz);
  return 0;
}

int main(int argc, char **argv) {
  char *result = all_tests();
  if (result != 0) {
    printf("%s\n", result);
  }
  else {
    printf("ALL TESTS PASSED\n");
  }
  printf("Tests run: %d\n", tests_run);

  return result != 0;
}
