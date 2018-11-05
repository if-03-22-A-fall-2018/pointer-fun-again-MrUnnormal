/*----------------------------------------------------------
 *				HTBLA-Leonding / Class: 2AHif
 * ---------------------------------------------------------
 * Exercise Number: 6
 * Title:			Pointer Fun Again
 * Author:			Jan Kaufmann
 * ----------------------------------------------------------
 * Description:
 * Practise the usage of structs, arrays and pointers to structs.
 * ----------------------------------------------------------
 */

#include <stdio.h>
#include <string.h>

struct PlayStruct {
  int int_value;
  double double_value;
  char a_string[64];
};

void print_struct(struct PlayStruct ps, struct PlayStruct* pps);
void change_struct(struct PlayStruct ps, struct PlayStruct* pps);
void print_string(char string_to_print[]);
void change_string( char string1[], char* p_string);

int main(int argc, char const *argv[]) {
  struct PlayStruct play_struct = {51, 5.1, "string1"};
  struct PlayStruct* play_struct_pointer =  &play_struct;
  print_struct(play_struct, play_struct_pointer);
  change_struct(play_struct, play_struct_pointer);
  // It only displays the last changes (the ones with the pointer)
  print_struct(play_struct, play_struct_pointer);
  print_string(play_struct.a_string);

  char another_string[16] = "another_string";

  change_string(play_struct.a_string, &another_string);
  print_string(play_struct.a_string);
  // It cuts the string after two chars
  print_string(another_string);
  // It cuts the string after one char.
  return 0;
}

void print_struct(struct PlayStruct ps, struct PlayStruct* pps)
{
  printf("Values of struct ps: %d, %lf, %s. \n", ps.int_value, ps.double_value, ps.a_string);
  printf("Values of struct ps: %d, %lf, %s. \n", pps -> int_value, pps  ->  double_value, (*pps).a_string); // The last one is the same as the others but just makes things complicated
}

void change_struct(struct PlayStruct ps, struct PlayStruct* pps)
{
  ps.int_value = 9089786;
  ps.double_value = 0.9999999;
  ps.a_string[0] = 's';
  ps.a_string[1] = 't';
  ps.a_string[2] = 'r';
  ps.a_string[3] = '2';
  ps.a_string[4] = '\0';

  pps -> int_value = 465;         // This is much more pratical
  (*pps).double_value = 64.4556;  // then this but they work the same.
  pps -> a_string[0] = 's';
  pps -> a_string[1] = 't';
  pps -> a_string[2] = 'r';
  pps -> a_string[3] = '3';
  pps -> a_string[4] = '\0';
}

void print_string(char string_to_print[])
{
   printf("%s\n",string_to_print);
}

void change_string( char string1[], char* p_string)
{
  string1[2] = '\0';
  p_string[1] = '\0';
}
