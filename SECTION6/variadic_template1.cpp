template<typename T1, typename T2> class pair
{
};
			
template<typename ... Ts > class tuple
{
};

int main()
{
	pair<int, double> p2;

	tuple t; // C++17 부터.
	tuple<> t0;
	tuple<int> t1;
	tuple<int, double> t2; // Ts : int, double
}

