#include <iostream> // made by shivang agrahari 
#include "Random.h"

void rules()
{
	std::cout << "Hello there! Welcome to DLF IPL 2077! The rules of the game are as follows: " << '\n';
	std::cout << "1-) There will be a toss. If you win you can decide whether to bat or bowl." << '\n';
	std::cout << "2-) Both the batsman and the bowler will simultaneously choose a number between 1 and 6 (both included) to score." << '\n';
	std::cout << "3-) If the numbers match, the batsmen is out and both the players excchange their roles." << '\n';
	std::cout << "4-) If the numbers don't match, the number chosen by the batsman gets added to his total runs." << '\n';
	std::cout << "5-) The one who scores more runs wins the game." << '\n';
	std::cout << "Are you ready?? Lets begin! (press y to begin) "<< '\n';
	std::cout << "(NOTE: This game is same as hand cricket we used to play in schools. Also, please dont enter any unspecified inputs or else this program might fail.)" << '\n';
}

int batBowl()
{
	int batSum{};
	int bowlSum{};
	for (; true; )
	{
		int compNumber{ Random::get(1,6) };
		int userNumber{};
		std::cout << "Hmmm... choosing my number. Ready now! Input your number and press enter: " << '\n';
		std::cin >> userNumber;
		std::cout << "You chose " << userNumber << " and I chose " << compNumber << "." << '\n';
		if (userNumber == compNumber)
		{
			std::cout << "You're out! You scored " << batSum << " runs." << '\n';
			break;
		}

		batSum += userNumber;
	
	}
	std::cout << "Now my turn to bat and yours to bowl. Let's play!" << '\n';

	for (; true; )
	{
		int compNumber{ Random::get(1,6) };
		int userNumber{};
		std::cout << "Hmmm... choosing my number. Ready now! Input your number and press enter: " << '\n';
		std::cin >> userNumber;
		std::cout << "You chose " << userNumber << " and I chose " << compNumber << "." << '\n';
		if (userNumber == compNumber)
		{
			std::cout << "I am out! I scored " << bowlSum << " runs." << '\n';
			break;
		}

		bowlSum += userNumber;
		if (batSum < bowlSum)
		{
			std::cout << "Sorry! You lose.";
			return 0;
		}

	}
	if (batSum > bowlSum)
	{
		std::cout << "Congrats! You won!";
	 }
	else if (batSum < bowlSum)
	{
		std::cout << "Sorry! You lose.";
	}
	else
	{
		std::cout << "game tied lol";
	}
	return 0;
}

int bowlBat()
{
	int batSum{};
	int bowlSum{};
	

	for (; true; )
	{
		int compNumber{ Random::get(1,6) };
		int userNumber{};
		std::cout << "Hmmm... choosing my number. Ready now! Input your number and press enter: " << '\n';
		std::cin >> userNumber;
		std::cout << "You chose " << userNumber << " and I chose " << compNumber << "." << '\n';
		if (userNumber == compNumber)
		{
			std::cout << "I am out! I scored " << bowlSum << " runs." << '\n';
			break;
		}

		bowlSum += userNumber;

	}
	std::cout << "Now my turn to bowl and yours to bat.";
	for (; true; )
	{
		int compNumber{ Random::get(1,6) };
		int userNumber{};
		std::cout << "Hmmm... choosing my number. Ready now! Input your number and press enter: " << '\n';
		std::cin >> userNumber;
		std::cout << "You chose " << userNumber << " and I chose " << compNumber << "." << '\n';
		if (userNumber == compNumber)
		{
			std::cout << "You're out! You scored " << batSum << " runs." << '\n';
			break;
		}

		batSum += userNumber;
		if (batSum > bowlSum)
		{
			std::cout << "Congrats! You won!";
			return 0;
		}

	}
	if (batSum > bowlSum)
	{
		std::cout << "Congrats! You won!";
	}
	else if (batSum < bowlSum)
	{
		std::cout << "Sorry! You lose.";
	}
	else
	{
		std::cout << "game tied lol";
	}
	return 0;


	

}


int main()
{
	
	rules();
	int team{};
	char c{};
	std::cin >> c;

	if (c == 'y')
	{
		std::cout << "Choose a team: " << '\n';
		std::cout << "1-) RCB " << '\n';
		std::cout << "2-) CSK " << '\n';
		std::cout << "3-) MI " << '\n';
		std::cout << "4-) RR " << '\n';
		std::cout << "5-) KKR " << '\n';
		std::cout << "6-) KXIP " << '\n';
		std::cout << "7-) DC " << '\n';
		std::cout << "8-) SRH " << '\n';
		std::cin >> team;
		switch (team)
		{
		case 1:
			std::cout << "You chose RCB as your team" << '\n';
			break;
		case 2:
			std::cout << "You chose CSK as your team" << '\n';
			break;
		case 3:
			std::cout << "You chose MI as your team" << '\n';
			break;
		case 4:
			std::cout << "You chose RR as your team" << '\n';
			break;
		case 5:
			std::cout << "You chose KKR as your team" << '\n';
			break;
		case 6:
			std::cout << "You chose KXIP as your team" << '\n';
			break;
		case 7:
			std::cout << "You chose DC as your team" << '\n';
			break;
		case 8:
			std::cout << "You chose SRH as your team" << '\n';
			break;
		default:
			std::cout << "Press the correct key next time";
		}
	}
	else
	{
		std::cout << "Press y next time.";
	}

	int compTeam{ Random::get(1,8) };
	switch (compTeam)
	{
	case 1:
		std::cout << "I have chosen RCB as my team. Let's go to the toss now." << '\n';
		break;
	case 2:
		std::cout << "I have chosen CSK as my team. Let's go to the toss now." << '\n';
		break;
	case 3:
		std::cout << "I have chosen MI as my team. Let's go to the toss now." << '\n';
		break;
	case 4:
		std::cout << "I have chosen RR as my team. Let's go to the toss now." << '\n';
		break;
	case 5:
		std::cout << "I have chosen KKR as my team. Let's go to the toss now." << '\n';
		break;
	case 6:
		std::cout << "I have chosen KXIP as my team. Let's go to the toss now." << '\n';
		break;
	case 7:
		std::cout << "I have chosen DC as my team. Let's go to the toss now." << '\n';
		break;
	case 8:
		std::cout << "I have chosen SRH as my team. Let's go to the toss now." << '\n';
		break;
	}
	
	std::cout << "It's toss time! Pick your side: " << '\n';
	std::cout << "1-) Heads " << '\n';
	std::cout << "2-) Tails " << '\n';
	int coin{};
	std::cin >> coin;
	bool innings{};
	
		int compCoin{ Random::get(1,2) };
		int userDecision{};

		if (coin == compCoin)
		{
			std::cout << "Congratulations! You won the toss! Choose whether to bat or bowl first: " << '\n';
			std::cout << "1-) Bat " << '\n';
			std::cout << "2-) Bowl" << '\n';
			std::cin >> userDecision;
			switch (userDecision)
			{
			case 1:
				std::cout << "You have chosen to bat first. Let's play!" << '\n';
				innings = true;
				batBowl();
				
				
				break;
			case 2:
				std::cout << "You have chosen to bowl first. Let's play!" << '\n';
				innings = false;
				bowlBat();
				
			
				break;
			
			}
		}
		else if (compCoin == 1)
		{
			std::cout << "Sorry! You lost the toss. I have chosen to bat first." << '\n';	
			innings = false;
			bowlBat();
			
		
		}
		else if (compCoin == 2)
		{
			std::cout << "Sorry! You lost the toss. I have chosen to bowl first." << '\n';
			innings = true;
			batBowl();
			
			
			
		}


	return 0;
}


