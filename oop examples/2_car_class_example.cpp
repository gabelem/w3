class Car
{
	public:
		string brand;
};

int main
{
	Car fstObj;
	Car sndObj;

	fstObj.brand = "Toyota";
	sndObj.brand = "Volvo";

	cout << fstObj.brand << "\n";
	cout << sndObj.brand << "\n";

	return 0;
}
