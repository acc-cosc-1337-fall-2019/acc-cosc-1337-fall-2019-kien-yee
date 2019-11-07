#include "tic_tac_toe_manager.h"

//cpp

ostream & operator<<(ostream & out, const TicTacToeManager & m)
{
	// TODO: insert return statement here
	for (auto& game : m.games)
	{
		out << game << "\n";
	}
	out << "X wins: " << m.x_wins << "\n";
	out << "O wins: " << m.o_win << "\n";
	out << "CAT: " << m.ties << "\n";

	return out;
}

void TicTacToeManager::save_game(unique_ptr<TicTacToe>& game)
{
	update_winner_count(game->get_winner());
	games.push_back(std::move(game));
}

const std::vector<std::unique_ptr<TicTacToe>>& TicTacToeManager::get_games()
{
	return games;
}

std::unique_ptr<TicTacToe> TicTacToeManager::get_game(int game_type)
{
	if (game_type == 3)
	{
		return std::make_unique<TicTacToe3>();
	}
	else
	{
		return std::make_unique<TicTacToe4>();
	}

}

void TicTacToeManager::get_winner_totals(int& x, int& o, int& c)
{
	x = x_wins;
	o = o_win;
	c = ties;
}

void TicTacToeManager::update_winner_count(string winner)
{
	if (winner == "X")
	{
		x_wins++;
	}
	else if (winner == "O")
	{
		o_win++;
	}
	else
	{
		ties++;
	}
}
