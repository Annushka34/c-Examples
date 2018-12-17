//#include <iostream>
//using namespace std;
//class Base
//{
//public:
//	int a;
//	int b;
//	Base()
//	{
//		a = 0;
//		b = 1;
//	}
//	void virtual Show()
//	{
//		cout << "A = " << a << " B = " << b << endl;
//	}
//};
//class Derived : public virtual Base
//{
//	int c;
//public:
//	Derived()
//	{
//		c = 2;
//	}
//	Base::a;
//	Base::Show;
//	void Show()
//	{
//		cout << "C = " << c << " ";
//		Base::Show();
//	}
//};
//class Derived2 : public virtual Base
//{
//	int d;
//public:
//	Derived2()
//	{
//		d = 3;
//	}
//	void Show()
//	{
//		cout << "D = " << d << " ";
//		Base::Show();
//	}
//};
//class Der : public  Derived, public Derived2
//{
//public:
//	void Show() {
//		Derived::Show();
//	}
//};
////class Base
////{
////public:
////	int a;
////	int c;
////	int j;
////	Base()
////	{
////		a = 10;
////		c = 30;
////		j = 40;
////	}
////	void virtual Show() = 0;
////
////};
//
////class Derived : public virtual Base
////{
////public:
////	int b;
////	Base::a;
////	Derived()
////	{
////		b = 20;
////	}
////	void Show()
////	{
////		cout << "Derived\n";
////	}
////};
////class Derived2 : public virtual Base
////{
////	int k;
////public:
////	Derived2()
////	{
////		k = 60;
////	}
////	void Show()
////	{
////		cout << "Derived2\n";
////	}
////	void DoSome()
////	{
////
////	}
////};
////class Der : public Derived, public Derived2
////{
////	void Show()
////	{
////		cout << "Derived2\n";
////	}
////};
//void main()
//{
//	Derived obj;
//	obj.a;
//	obj.Show();
//	obj.Base::Show();
//	Base * ptr = &obj;
//	ptr->Show();
//	Derived2 der2;
//	der2.Show();
//	Der p;
//	//p.a = 10;
//	p.Derived::a = 10;
//	p.Show();
//	p.Derived2::a = 20;
//	p.Show();
//	/*Derived obj;
//	obj.a;
//	Derived2 obj2;
//	obj.Show();
//	obj.Base::Show();
//	Base * ptr = &obj;
//	ptr->Show();
//	ptr = &obj2;
//	ptr->Show();
//	Der der;
//	der.a = 20;
//	ptr = &der;*/
//}