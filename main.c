#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<unistd.h>

void do_exam(int no)
{
	srand(time(NULL));
	printf("No: %d\n",no);
	printf("Score: %d\n",rand()%101);
}

int main(int argc, char *argv[])
{
	typedef struct student{
		int no;
		int height;
		void (*method)(int);
	} STUDENT;

	STUDENT Eric={1,180,do_exam},Charles={2,175,do_exam};
	Eric.method(Eric.no);
	sleep(1);
	Charles.method(Charles.no);
	return 0;
}
