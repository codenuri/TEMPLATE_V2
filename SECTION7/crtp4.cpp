#include <iostream>

class BaseWindow
{
public:
	void Click()     { }
	void MouseMove() { }
};

template<typename T> 
class Window : public BaseWindow
{
public:
	void event_loop()
	{	
		static_cast<T*>(this)->Click();	
	}
};
class MainWindow : public Window <MainWindow>
{
public:
	void Click() { }
};

class MainWindow2 : public Window <MainWindow2>
{
public:
	void Click() { }
};
int main()
{
	MainWindow w;
	w.event_loop();
}