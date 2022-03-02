#include "cmps.h"
int compmath(student a, student b)
{
	if (a.getmath() < b.getmath())
		return -1;
	else
		if (a.getmath() > b.getmath())
			return 1;
		else
			return 0;
}
int comphis(student a, student b)
{
	if (a.gethis() < b.gethis())
		return -1;
	else
		if (a.gethis() > b.gethis())
			return 1;
		else
			return 0;
}
int compeng(student a, student b)
{
	if (a.geteng() < b.geteng())
		return -1;
	else
		if (a.geteng() > b.geteng())
			return 1;
		else
			return 0;
}