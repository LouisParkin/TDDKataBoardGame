#include "board.h"

Board::Board():
  _boardInternalState()
{
  initializeBoard();
}

Board::~Board()
{

}

void Board::initializeBoard()
{
  for(int x = 0; x < 5; ++x)
  {
    QVector<int> row;
    for(int y = 0; y < 5; ++y)
    {
      row.append(-1);
    }
    _boardInternalState.append(row);
  }
}

QString Board::get_grid_state()
{
  QString state = QString();

  for(int x = 0; x < 5; ++x)
  {
    for(int y = 0; y < 5; ++y)
    {
      state = state + QString(translateToSymbol(_boardInternalState.at(x).at(y)));
    }
    if(x != 4)
    state = state + QString('\n');
  }
  return state;
}

char Board::translateToSymbol(int input)
{
  switch (input)
  {
    case 0: return 'O';
    case 1: return 'X';
  }
  return '-';
}

