class MyClass // Class
{
	public: // Access specifier
		int myNum; // Two Attributes..
		string myString; 
};

int main()
{
	MyClass myObj; // Object of MyClass
	
	myObj.myNum = 15;
	myObj.myString = "My text";

	cout << myObj.myNum << "\n";
	cout << myObj.myString;

	return 0;
}
