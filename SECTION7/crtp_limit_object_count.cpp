#include <iostream>
#include <exception>

class too_many_object : std::exception {};

template<typename T, int MAXCOUNT>
class LimitObjectCount
{
	inline static int maxcnt = 0;
public:
	LimitObjectCount() 
	{ 
		if ( ++maxcnt > MAXCOUNT) 
			throw too_many_object(); 
	}
	~LimitObjectCount() { --maxcnt; }
};
class Player : public LimitObjectCount<Player, 5>
{
};
class Judge : public LimitObjectCount<Judge, 3>
{
};
int main()
{
//	LimitObjectCount obj1[6];
	Player p[3];
	Judge  j[5];
}


