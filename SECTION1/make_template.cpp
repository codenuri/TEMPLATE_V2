template<typename T> 
T square1(T a)
{
	return a * a;
}
template<class T> 
T square2(T a)
{
	return a * a;
}
auto square3(auto a) 
{
	return a * a;
}
int main()
{
	square1<int>(3);
	square2<int>(3);
	square3<int>(3);

	square1(3);
	square2(3);
	square3(3);
}