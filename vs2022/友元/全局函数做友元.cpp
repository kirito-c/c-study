//#include<iostream>
//using namespace std;
//
////建筑物
//class Building
//{
//	//goodGay全局函数是 Building好朋友 可以访问Building中私有的成员
//	friend void goodGay(Building* building);
//
//public:
//	//Building()
//	//{
//	//	m_SittingRoom = "客厅";
//	//	m_BedRoom = "卧室";
//	//}
//	Building() :m_BedRoom("卧室"), m_SittingRoom("客厅") {}
//
//	string m_SittingRoom;// 客厅
//
//private:
//	string m_BedRoom;
//};
//
////全局函数
//void goodGay(Building *building)
//{
//	cout << "好基友全局函数 正在访问：" << building->m_SittingRoom << endl;
//	
//	cout << "好基友全局函数 正在访问：" << building->m_BedRoom << endl;
//}
//
//void test01()
//{
//	Building building;
//	goodGay(&building);
//}
//int main()
//{
//	test01();
//
//
//	system("pause");
//	return 0;
//}