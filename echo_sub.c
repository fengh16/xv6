#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  int start = 0;
  int end = 0;
  
  for(int i = 0; i < strlen(argv[1]); i++)
  {
	if(argv[1][i] < '0' || argv[1][i] > '9')
	{
	  printf(1, "%s", "sub_error!\n");
	  exit();
	}
        start = start*10 + (argv[1][i] - '0');
  }
  for(int i = 0; i < strlen(argv[2]); i++)
  {
	if(argv[1][i] < '0' || argv[1][i] > '9')
	{
	  printf(1, "%s", "sub_error!\n");
	  exit();
	}
        end = end*10 + (argv[2][i] - '0');
  }
  if(start > end)
  {
    int temp = start;
    start = end;
    end = temp;	
  }

  if(end > strlen(argv[3]) || start < 1)
    printf(1, "%s", "sub_error!");
  else
  {
    for(int i = start-1; i < end; i++)
    {
      printf(1, "%c", argv[3][i]);
    }
  }
  printf(1, "%s", "\n");

  exit();
}
