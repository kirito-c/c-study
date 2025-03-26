#include <iostream>
#include <vector>
using namespace std;

//联系人的类
class Contact 
{
public:
    string name;
    string gender;
    int age;
    string phoneNumber;
    string address;

    Contact() 
    {

    }
    Contact(string n, string g, int a, string p, string addr)
        : name(n), gender(g), age(a), phoneNumber(p), address(addr) 
    {

    }
};

//通讯录类
class ContactList 
{
private:
    vector<Contact> contacts;//声明vector容器
public:
    // 初始化
    void init()
    {
        contacts.clear();//清空容器中的所有元素
    }

    void addContact()
    {
        string name, gender, phoneNumber, address;
        int age;
        cout << "要存储的联系人姓名是：";
        cin >> name;
        cout << "要存储的联系人性别是：";
        cin >> gender;
        cout << "要存储的联系人年龄是：";
        cin >> age;
        cout << "要存储的联系人电话是：";
        cin >> phoneNumber;
        cout << "要存储的联系人地址是：";
        cin >> address;
        contacts.push_back(Contact(name, gender, age, phoneNumber, address));
        cout << "添加成功！" << endl;
    }

    void showContacts() {
        cout << "姓名\t性别\t年龄\t电话\t地址" << endl;
        for (size_t i= 0; i < contacts.size(); i++)//遍历每一个对象
        {
            cout << contacts[i].name<<"\t"
                 << contacts[i].gender << "\t"
                 << contacts[i].age << "\t"
                 << contacts[i].phoneNumber << "\t"
                 << contacts[i].address << endl;
        }
    }
    // 根据姓名查找联系人
    int findByName(const string& name)
    {
        for (size_t i = 0; i < contacts.size();i++)//遍历
        {
            if (contacts[i].name == name)
            {
                return i;
            }
        }
        return -1;
    }

    // 删除联系人
    void deleteContact() 
    {
        string name;
        cout << "请输入删除联系人的姓名：";
        cin >> name;
        int find = findByName(name);
        if (find == -1) 
        {
            cout << "没有对应的联系人" << endl;
        }
        else 
        {
            contacts.erase(contacts.begin() + find);
            cout << "删除成功！" << endl;
        }
    }

    // 修改联系人信息
    void modifyContact() 
    {
        string name;
        cout << "想要修改的联系人是：";
        cin >> name;
        int find = findByName(name);
        if (find == -1) {
            cout << "该联系人不存在" << endl;
        }
        else {
            cout << "要修改的联系人姓名是：";
            cin >> contacts[find].name;
            cout << "要修改的联系人性别是：";
            cin >> contacts[find].gender;
            cout << "要修改的联系人年龄是：";
            cin >> contacts[find].age;
            cout << "要修改的联系人电话是：";
            cin >> contacts[find].phoneNumber;
            cout << "要修改的联系人地址是：";
            cin >> contacts[find].address;
            cout << "修改成功！" << endl;
        }
    }

    // 查找联系人
    void findContact() 
    {
        string name;
        cout << "想要查找的联系人是：";
        cin >> name;
        int find = findByName(name);
        if (find == -1) 
        {
            cout << "该联系人不存在" << endl;
        }
        else {
            cout << "姓名\t性别\t年龄\t电话\t地址" << endl;
            cout << contacts[find].name << "\t"
                 << contacts[find].gender << "\t"
                 << contacts[find].age << "\t"
                 << contacts[find].phoneNumber << "\t"
                 << contacts[find].address << endl;
        } 
    }
};

int main() 
{
    ContactList contactList;
    contactList.init();
    int choice;
    do 
    {
        cout << "通讯录管理系统" << endl;
        cout << "1. 添加联系人" << endl;
        cout << "2. 显示所有联系人" << endl;
        cout << "3. 删除联系人" << endl;
        cout << "4. 修改联系人信息" << endl;
        cout << "5. 查找联系人" << endl;
        cout << "0. 退出" << endl;
        cout << "请输入您的选择：";
        cin >> choice;

        switch (choice) 
        {
        case 1:
            contactList.addContact();
            break;
        case 2:
            contactList.showContacts();
            break;
        case 3:
            contactList.deleteContact();
            break;
        case 4:
            contactList.modifyContact();
            break;
        case 5:
            contactList.findContact();
            break;
        case 0:
            cout << "退出系统" << endl;
            break;
        default:
            cout << "无效的选项，请重新输入！" << endl;
        }
    } while (choice != 0);

    system("pause");
    return 0;
}