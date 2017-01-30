int len(const char *s)
{
   int count = 0;
   while(*s++){
	count++;
   }
   return count;
}

int convert(const char *input)
{
   int input_len = len(input);
   int result = 0;
   for (int i = 0; i < input_len; i++) {
      result <<= 1;
      if (input[i] == '1') {
         result |= 1;
      } else if (input[i] != '0') {
         return -1;
      }
   }
   return result;
}
