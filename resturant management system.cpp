#include<stdio.h>
int main()
{
	int i,a,b,c;
	int table=10;
	char s[20];
	for(i=0;i<=1;i--)
	{
		                         //printf("welcome to c resturent\n");
		printf("\n1:-want to book a table\n""2:-dinner finished\n""3:-total number of tables available\n""4:-show the invoice of the coustomer\n");
		scanf("%d",&a);
		
		switch(a)
		{
			case 1:
				printf("enter your name please ");
				scanf("%s",&s);
				printf("enter your desired table number ");
				scanf("%d",&c);
				table=--table;
				printf("YOUR TABLE HAD BEEN BOOKED SUCESSFULLY\n");
				break;
		    case 2:
		    	table=++table;
		    printf("have a nice day");
		    break;
		    case 3:
		    	printf("total number of table:%d\n",table);
		    	break;
		    	case 4:
		    		printf( "-:your invoice:-\n");
					printf("name of the customer:%s\n",s);
					printf("the table booked by the customer:%d",c);
					break;
		    	
		    default:
		    	printf("please enter number from 1-3 \n");
		}
		
		
		
		   	
		   
		
	}
}
