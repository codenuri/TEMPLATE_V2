#include <iostream>

class Window
{
public:
	void event_loop() 
	{
		Click();
	}
	virtual void Click()     { std::cout << "Window Click" << std::endl; }
	virtual void MouseMove() { }
};

class MainWindow : public Window 
{
public:
	void Click() override { std::cout << "MainWindow Click" << std::endl; }
};

int main()
{
	MainWindow w;
	w.event_loop();
}