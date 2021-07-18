#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void get_dice_face() {
	srand( (unsigned)time( NULL ) );
	int x,n1,n2,n3,n4,n5,n6;
	n1=0;
	n2=0;
	n3=0;
	n4=0;
	n5=0;
	n6=0;
	for(int i =0;i<100;i++) {
		x = 1 + (rand()%6);
		if(x==1)
			n1++;
		else if(x==2)
			n2++;
		else if(x==3)
			n3++;
		else if(x==4)
			n4++;
		else if(x==5)
			n5++;
		else if(x==6)
			n6++;
	}
	printf(" 1->%d\n",n1);
	printf(" 2->%d\n",n2);
	printf(" 3->%d\n",n3);
	printf(" 4->%d\n",n4);
	printf(" 5->%d\n",n5);
	printf(" 6->%d\n",n6);
}
int main() {
	get_dice_face();
	
	return 0;
}
