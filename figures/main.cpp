#include <iostream>
#include <Point.h>
#include "Circle.h"
#include "Line.h"
#include "Triangle.h"
#include "Plex.h"

using namespace std;

int main()
{
  setlocale(LC_ALL, "RUS");
  double x = 0, y = 0;
  cout << "Ââåäèòå êîîðäèíàòû òî÷êè 1:\n";
  cin >> x >> y;
  double x1, y1;
  cout << "Ââåäèòå êîîðäèíàòû òî÷êè 2:\n";
  cin >> x1 >> y1;
  TPoint point1(x, y), point2(x1, y1);
  if (point1 == point2)
    cout << "Òî÷êè ñîâïàäàþò\n";
  else
    cout << "Òî÷êè íå ñîâïàäàþò\n";
  double x2, y2;
  cout << "Ââåäèòå êîîäèíàòû åùå îäíîé òî÷êè:\n";
  cin >> x2 >> y2;
  TPlex pl(&point1, &point2);
  TPoint p(x2, y2);
  TPlex plex(&pl, &p);
  cout << "Ëîìàíàÿ êðèâàÿ ñ êîîðäèíàòàìè:\n";
  plex.Show();
  return 0;
}
