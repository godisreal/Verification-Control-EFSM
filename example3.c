#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>   

typedef enum {I, II} state; 
static state s; 

typedef enum {a} input; 
typedef enum {m,n} output; 

static input i; 
static output o; 
static int v; 

void Initialization()
{ s=I; v=0; }

void Transition (input i)
{ switch(s)
	{ case I:
		switch(i)
		{ case a:  if(v>7) {s=II; o=n; v=v+1;}
					else    {s=I; o=m; v=v+1;} 
					break;
		} break;
	 case II:
		switch(i)
		{ case a: if(v<=3) {s=I; o=m; v=v-1;}
				  else 	   {s=II; o=n; v=v-1;} 
				  break;
		} break;
	}
}

int main()
{   
	char ch; 
	Initialization(); 
	while(1){   
		printf("Input event:");   
		while((ch = getchar()) != '\n')
		{   
			if(ch=='a')
			{
				i=a;
				Transition(i);
				printf("Output: %d\n", o); 
				printf("Variable: %d\n", v); 
				
			}
			
			//if((ch < '0') || (ch > '9'))
			//{   
			//	printf("Input num,ok?/n");   
			//	break;   
			//} 
			//switch(current_state){   
			//case STATE0:   
			//	if(ch == '2')   current_state = STATE1;   
			//	break;   
			//case STATE1:   
			//	if(ch == '4')   current_state = STATE2;   
			//	break;   
			//case STATE2:   
			//	if(ch == '7')   current_state = STATE3;   
			//	break;   
			//case STATE3:   
			//	if(ch == '9')   current_state = STATE4;   
			//	break;   
			//default:   
			//	current_state = STATE0;   
			//	break;   
			//}   
		}   
 
		//if(current_state == STATE4){   
		//	printf("Correct, lock is open!\n");   
		//	current_state = STATE0;
			
		//}else
		//{
		//	printf("Wrong, locked!\n");   
		//	current_state =   STATE0;
		//}

		//break;
	}   
	return 0;   
}

void inputprint(input i)
{
	switch(i)
	{
		case 0: printf("Input: a\n");break;
		//case 1: printf("red\n");break;
		//case 2: printf("blue\n");break;
		//case 3: printf("white\n");break;
		default: break;
	}
}

void outputprint(output o)
{
	switch(o)
	{
		case 0: printf("Output: m\n");break;
		case 1: printf("Output: n\n");break;
		//case 2: printf("blue\n");break;
		//case 3: printf("white\n");break;
		default: break;
	}
}

void stateprint(state s)
{
	switch(s)
	{
		case 0: printf("State: I\n");break;
		case 1: printf("State: II\n");break;
		//case 2: printf("blue\n");break;
		//case 3: printf("white\n");break;
		default: break;
	}
}