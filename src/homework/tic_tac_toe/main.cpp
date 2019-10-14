#include "tic_tac_toe.h"
int main() 
{
	TicTacToe board;
	int p_position;
	string start;
	string winner;
	auto user_continue = '1';
	do
	{
		cout << "X or O start? : ";
		cin >> start; cout << "\n";
		board.start_game(start);
		board.display_board();
		
		while (!board.game_over())
		{
			
			cout << "\nEnter position for " << board.get_player() << " ";
			cin >> p_position;
			board.mark_board(p_position);
			board.display_board();
			
		}
		if (board.get_player() == "X")
		{
			winner = "O";
		}
		else
		{
			winner = "X";
		}
		
		cout << "\nWinner is " << winner ;
		cout << "\nEnter 1 to Play again, any other key to exit: ";
		cin >> user_continue;








	} while (user_continue == '1');
	return 0;
}