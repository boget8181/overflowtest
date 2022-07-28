#include <stdio.h>
#include <string.h>

void
func(char *str)
{
  char buf[8];
  strcpy(buf, str);
}

int
main(int argc, char *argv[])
{
  if (argc > 1)
    func(argv[1]);
  else
    printf("Usage:%s <something you want to say>\n", argv[0]);
}