class MyClass
{
	public:
		int x; //Public attribute
	private:
		int y; //Private attribute
};

int main()
{
	MyClass myObj;

	myObj.x = 25; // Allowed (public)
	myObj.y = 50; // Not allowed (private)
	
	return 0;
}
