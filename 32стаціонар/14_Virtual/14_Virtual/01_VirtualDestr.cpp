//#include<iostream>
//#include<string>
//using namespace std;
//class Material
//{
//protected:
//public:
//	string name;
//	Material()
//	{
//		name = "Metal\n";
//	}
//	void Show()
//	{
//		cout << "Material: " << name<<endl;
//	}
//};
//
//
//class Engine : public Material
//{
//protected:
//	int price;
//public:
//	string name;
//	Engine()
//	{
//		cout << "K:Engine\n";
//		price = 12500;
//		name = "engine material\n";
//	}
//	virtual void Show()
//	{
//		cout << "Base: Engine: "  << " price " << price << endl;
//	}
//	virtual ~Engine() { cout << "D:Engine\n"; }
//};
//
//class ExpenciveEngine : public Engine
//{
//	string decor;
//public:
//	ExpenciveEngine()
//	{
//		cout << "K:ExpenciveEngine\n";
//		decor = "stouns\n";
//	}
//	void Show()
//	{
//		Material::Show();
//		cout << "ExpenciveEngine: " << " price " << price <<" decor: "<< decor << endl;
//	}
//	~ExpenciveEngine() { cout << "D:ExpenciveEngine\n"; }
//};
//
//class CheapEngine : public Engine
//{
//	string decor;
//public:
//	CheapEngine()
//	{
//		cout << "K:CheapEngine\n";
//		price /= (1 + 20 / 100);
//	}
//	void Show()
//	{
//		Material::Show();
//		cout << "CheapEngine: " << " price " << price << endl;
//	}
//	~CheapEngine() { cout << "D:CheapEngine\n"; }
//};
//
//class Car : public Engine, Material
//{
//public:
//	Car()
//	{
//		Material::name = "Ford";
//		Engine::name = "BMW";
//		Engine::Material::name = "China";
//	}
//	void ShowCar()
//	{
//		Material::Show();
//		Engine::Show();
//		Engine::Material::Show();
//	}
//	~Car()
//	{
//		cout << "D:Car\n";		
//	}
//};
//
//
//void main()
//{	
//	Car c;
//	c.ShowCar();
//}