#include<iostream>
using namespace std;


//vfptr（虚函数指针）v - virtual f - function ptr - pointer
//指针指向虚函数表(vftable) virtual function table 表内部记录一个虚函数的地址
//&Animal::speak
//当子类重写父类的虚函数时 子类中的虚函数表会替换成子类虚函数的地址


//动物类
class Animal
{
public:
	//虚函数 
	virtual void speak()
	{
		cout << "动物在说话" << endl;
	}
};

//猫类
class Cat:public Animal
{
public:
	void speak()
	{
		cout << "小猫在说话" << endl;
	}
};

//狗类
class Dog :public Animal
{
public:
	void speak()
	{
		cout << "小狗在说话" << endl;
	}
};
//执行说话的函数
//地址早绑定 在编译阶段就确定函数地址
//如果想执行让猫说话 那么这个函数地址就不能提前绑定 需要在运行阶段进行绑定 也就是地址晚绑定

//动态多态满足条件：
//1、继承关系
//2、子类要重写父类的虚函数（与重载不同，重载函数名一样 参数不同 重写是函数返回值 名 参数相同 

//动态多态的调用
//1、父类的指针或者引用 指向子类对象
void DoSpeak(Animal &animal) //Animal & animal = cat;父类引用指向子类对象(允许父子之间的类型转换) 
{
	animal.speak();
}

void test01()
{
	Cat cat;
	DoSpeak(cat);

	Dog dog;
	DoSpeak(dog);
}
void test02()
{
	cout << "sizeof Animal = " <<sizeof(Animal)<< endl;
}

int main()
{
	//test01();
	test02();

	system("pause");
	return 0;
}