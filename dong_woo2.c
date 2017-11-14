#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int num = 0;
	int direction, location;
	char tile[10];
	memset(tile,'_',sizeof(tile));
	//printf("시작\n");
	location = 5;
	while(num<100){
		direction = rand()%2;
		if(direction == 0){
			if(location == 0){
				continue;
			}
			tile[location]='_';
			location--;
		}
		else{

			if(num == 0) {
				tile[location]='*';
				continue;
			}
			else if(location == 9){
				continue;
			}
			tile[location]='_';
			location++;
		}
		tile[location]='*';
		for(int a=0; a<10; a++)
			printf("%c",tile[a]);
		printf("\n");
		num++;
	}


	return 0;
}
