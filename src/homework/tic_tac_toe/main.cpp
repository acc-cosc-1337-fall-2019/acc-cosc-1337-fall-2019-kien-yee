 #include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include"tic_tac_toe_manager.h"

int main() 
{
	
	unique_ptr<TicTacToeManager> manager = std::make_unique<TicTacToeManager>();
	string start;
	auto user_continue = '1';
	int game_type;
	do
	{
		cout << "Play win by 3 or 4: ";
		cin >> game_type;
		unique_ptr<TicTacToe> board;

		if (game_type == 3)
		{
			board = std::make_unique<TicTacToe3>();
		}
		else
		{
			board = std::make_unique<TicTacToe4>();
		}
		
		

		cout << "X or O start? : ";
		cin >> start; cout << "\n";
		
		board->start_game(start);
		cout << *board;
		
		while (!board->game_over())
		{
			
			cin >> *board;
			cout << *board;
			
		}

		manager->save_game(board);

		cout << "\nEnter 1 to Play again, any other key to exit: ";
		cin >> user_continue;

		
	} while (user_continue == '1');

	cout << "\nHistory: \n";
	cout << manager;

	return 0;
}