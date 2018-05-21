#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  int i;

  for(i = 1; i < argc; i++)
  {
	int j;
	for(j = 0; j <= strlen(argv[i])-1; j++)
	{
		if(argv[i][j] != '+')
			printf(1, "%c", argv[i][j]);
	}     		
    	printf(1, "%s", i+1 < argc ? "" : "\n");
  } 
  exit();
}
