#include "multitable.h"

void multitable()
{
	
	int x,y;
	printf("두 정수를 입력하세요: ");
	scanf("%d %d",&x,&y);

	for (int i = 1; i < x+1; i++)
	{
		for (int j = 1; j < y+1; j++){
			printf("%d * %d = %d   ", i, j, i*j);
		}
		printf("\n");
	
	}
}


