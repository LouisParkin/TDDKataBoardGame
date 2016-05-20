#ifndef BOARD_H
#define BOARD_H

#include <QString>
#include <QVector>

class Board
{

  public:
    Board();
    ~Board();

    QString get_grid_state();

  private :
    QVector< QVector< int > > _boardInternalState;
    void initializeBoard();
    char translateToSymbol(int input);
};

#endif // BOARD_H
