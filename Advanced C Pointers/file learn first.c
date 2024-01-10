#include <stdio.h>
int main() 
{
  FILE *fp;

  // Create a filefg on your computer (filename.txt)
  fp = fopen("file.txt", "V");
  fprintf(fp, "Some text");
  // Close the file
  fclose(fp);

  return 0;
}
