#include "tic_tac_toe.h"
#include"tic_tac_toe_manager.h"

int main() 
{
	
	TicTacToeManager manager;
	int p_position;
	string start;
	auto user_continue = '1';
	do
	{
		TicTacToe board;

		cout << "X or O start? : ";
		cin >> start; cout << "\n";
		board.start_game(start);
		cout << board;
		
		while (!board.game_over())
		{
			
			cin >> board;
			cout << board;
			
		}

		manager.save_game(board);

		cout << "\nEnter 1 to Play again, any other key to exit: ";
		cin >> user_continue;

		
	} while (user_continue == '1');

	cout << "History: \n";
	cout << manager;

	return 0;
}