#include <iostream>

template<typename T> 
class Window
{
public:
	void event_loop() 	// void event_loop(Window* this)
	{
//		Click();		// this->Click();
		static_cast<T*>(this)->Click();
	}
	void Click()     { std::cout << "Window Click" << std::endl; }
	void MouseMove() { }
};

class MainWindow : public Window <MainWindow>
{
public:
	void Click() { std::cout << "MainWindow Click" << std::endl; }
};

int main()
{
	MainWindow w;
	w.event_loop();
}