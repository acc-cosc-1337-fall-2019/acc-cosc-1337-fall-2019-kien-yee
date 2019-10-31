//h
#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

#include"tic_tac_toe.h"
#include<functional>

using std::vector;

class TicTacToeManager
{
public:
	void save_game(TicTacToe& game);
	friend ostream& operator <<(ostream& out, const TicTacToeManager& m);


private:
	void update_winner_count(string winner);
	int x_wins{ 0 };
	int o_win{ 0 };
	int ties{ 0 };
	vector <std::reference_wrapper<TicTacToe>> games;

};


#endif // !TIC_TAC_TOE_MANAGER_H
