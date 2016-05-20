#include <QString>
#include <QtTest>
#include <QCoreApplication>
#include "../JABG_Game/board.h"

class JABG_UnitTestsTest : public QObject
{
    Q_OBJECT

  public:
    JABG_UnitTestsTest();

  private Q_SLOTS:
    void initTestCase();
    void cleanupTestCase();
    void testCase1();

  private:
    Board* _gameBoard;
};

JABG_UnitTestsTest::JABG_UnitTestsTest()
{
}

void JABG_UnitTestsTest::initTestCase()
{
  _gameBoard = new Board();
}

void JABG_UnitTestsTest::cleanupTestCase()
{
  delete _gameBoard;
}

void JABG_UnitTestsTest::testCase1()
{
  QVERIFY2(_gameBoard->get_grid_state().compare("-----\n-----\n-----\n-----\n-----") == 0, "Board initial state not valid!");
}

QTEST_MAIN(JABG_UnitTestsTest)

#include "tst_jabg_unitteststest.moc"
