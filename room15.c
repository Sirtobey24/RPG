//Sean de Silva
//CSC 251
//3-19-2018

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int userinput;
	printf("Hello! Welcome, gamer! You are now in room 15...");
	printf("You hear a loud growl. Suddenly you hear loud footsteps. You panick but you try to rely on your 
	instincts");
	printf("You are shocked to your eyes to see a massive bear coming out of a cave!");
	printf("You have a piece of rock laying next to you and a long club laying further away");
	printf("What do you do? Please choose from the following options!");
	printf("Press 99 if you want to quit since video games cause violence");
	
	scanf(%d, &userinput);
	while(userinput!=99)
	{
		if(userinput ==1) 
		{
			printf("You automatically rely on running out of the room. The room is locked out and there is no other exit besides the 
				cave that the bear came out of. Since you're panick attack has gotten worse, you make poor judgments and gets 
				beaten to death by the bear. Now you have lost your legacy!");
		}
		else if(userinput ==2)
		{
			printf("You decide to make friends with the bear. It turns out that the bear does not speak English, therefore, you instantly get eaten by the bear!");
	
		}
		else if(userinput==3)
		{
			printf("You decide to use the stone rod that is laying on the floor. You end up getting bruised, although you emerge victorious after beating the bear to death and you feel accomplished!");
		}
	}

	return EXIT_SUCCESS;
}






