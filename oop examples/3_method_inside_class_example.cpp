class MyClass //Pascal case
{
	public:
	int myMethod(int parameter) //Method/function defined inside the class
	{
		return parameter;
	}
};

//Outside the class example:
//void MyClass::myMethod()
//{
//	cout << "Hello World!";
//}

int main()
{
	MyClass myObj; // Object of MyClass
	myObj.myMethod(200); //argument inside the ()
	return 0;
}
