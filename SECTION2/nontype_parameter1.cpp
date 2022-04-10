enum       Color1 {red, blue, green};
enum class Color2 {red, blue, green};

void foo(int a) {}

template<int N, 	double d, 
		 Color1 C1, Color2 C2, 
		 int* P, 	void(*FP)(int)> 
class NTTP
{
};

int main()
{
	int n = 10;
	static int s = 0;

	NTTP<10, 3.4, Color1::red, Color2::red, &s, &foo > t1;
//	NTTP<10, 3.4, Color1::red, Color2::red, &n, &foo > t2;
}