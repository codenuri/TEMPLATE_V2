template<typename T> 
concept C = requires(T a, T b)
{
	a + b;						// simple requirement
	a.f1();


	typename T::value_type;		// type requirement
	

	{a + b} noexcept -> std::same_as<int>;	
								// compound requirement


	requires sizeof(T) > 4;		// nested requirement
};
