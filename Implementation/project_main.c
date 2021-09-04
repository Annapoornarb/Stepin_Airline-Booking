#include "air.h"
#include<stdio.h>
#include "unity.h"

void setUp()
{

}
void tearDown()
{

}
void test_cancel(void)
{
   int r1=-1;
    TEST_ASSERT_EQUAL(-1,cancel(r1));
    TEST_ASSERT_EQUAL(-2,cancel(r1));
    TEST_ASSERT_EQUAL(-1,cancel(r1));
}

int main(int argc, char **argv)
{
	int choice, status=0,canc=0, reg=0;
	start=NULL;
	rear=NULL;
	front=NULL;

	UNITY_BEGIN();
    RUN_TEST(test_cancel);
    UNITY_END();
    
	printf("\t\t\t***AIRLINE BOOKING***\t\t\t\t\n");
	int ch =0;
	while(ch!=4)
	{
	printf("\n\nDo you want to - \n 1. Reserve a ticket? \n 2. Cancel Booking \n 3. Display passenger details \n 4. exit\n\n");
	scanf("%d", &choice);
	switch(choice)
	{
		case 1 :  status=reserve(start);
	              if(status==0)
	                printf("\nBooking Full!! \nYou are added to waiting list. Waiting list number %d", count);
	              else
	                printf(" \nBooking Successful!!! Enjoy your journey! Your Reg No is %d\n\n", num);

	              break;

	    case 2:   printf(" \n Give the Registration number to be cancelled\n");
	              scanf(" %d", &reg);
	              if(reg>num)
	              printf("Invalid!!");
	              else
	              {
	              canc=cancel(reg);
	              if(canc==-1)
	              	printf("\nRegistration number invalid!!\n");
	              else
	              	printf("\nRegistration cancelled successfully\n");
	              	}
	              break;

	    case 3: display();
	    break;
	    case 4: exit(0);
	    break;
	    default: printf("\nWrong choice!\n");




	}

}

}