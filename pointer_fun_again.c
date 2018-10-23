struct PlayStruct {
  int int_value;
  double double_value;
  char a_string[64];
};

int main(int argc, char const *argv[]) {
  struct PlayStruct play_struct;
  PlayStruct PlayStruct* play_struct_pointer =  &play_struct;
  play_struct.int_value = 87562;
  play_struct.double_value = 1412.1123;
  play_struct.a_string[0] = 'C';
  play_struct.a_string[1] = 'C';
  play_struct.a_string[2] = 'C';
  play_struct.a_string[3] = 'D';
  play_struct.int_value = 9089786;
  return 0;
}
