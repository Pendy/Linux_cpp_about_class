#include "StudentHead.h"
Date::Date(int y, int m, int d)
{year=y;month=m;day=d;}
void Date::SetDate(int y, int m, int d)
{year=y; month=m; day=d;}
void Date::PrintDate()const
{cout<<year<<"/"<<month<<"/"<< day << endl;}