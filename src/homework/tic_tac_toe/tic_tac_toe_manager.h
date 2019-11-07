//h
#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

#include"tic_tac_toe.h"
#include"tic_tac_toe_3.h"
#include"tic_tac_toe_4.h"
#include<memory>

using std::vector;
using std::unique_ptr;

class TicTacToeManager
{
public:
	void save_game(unique_ptr<TicTacToe>& game);
	const std::vector<std::unique_ptr<TicTacToe>>& get_games();
	friend ostream& operator <<(ostream& out, const TicTacToeManager& m);
	std::unique_ptr<TicTacToe> get_game(int game_type);
	void get_winner_totals(int& x, int& o, int& c);

private:
	void update_winner_count(string winner);
	int x_wins{ 0 };
	int o_win{ 0 };
	int ties{ 0 };
	vector <unique_ptr<TicTacToe>> games;

};


#endif // !TIC_TAC_TOE_MANAGER_H
