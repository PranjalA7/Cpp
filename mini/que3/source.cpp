void display()
    {
        
        cout<<"\nAccount number = "<<accno;
        cout<<"\nAccount name = "<<name;
        cout<<"\nAccount balance = "<<balance;
    } 
    void accept()
    {
        cout<<"\nAEnter account number = ";
        cin>>accno;
        cout<<"\nAEnter account name = ";
        cin>>name;
        cout<<"\nAEnter account balance = ";
        cin>>balance;       
        
    }
};




class rectangle
{
    int length;
    int width;
 
public:
    rectangle()
    {
    }
    rectangle(int l, int w)
    {
        length = l;
        width = w;
    }
 
    rectangle operator+(rectangle &r3);
    rectangle operator-(rectangle &r3);
    rectangle operator==(rectangle &r3);
    rectangle operator!=(rectangle &r3);
    rectangle &operator++();
    rectangle operator++(int);
    rectangle operator-();
    rectangle operator+(int x);
    friend rectangle operator+(int x, rectangle &r3);
    friend std::ostream& operator<<(std::ostream &,const rectangle &);
    //* >> [] () ->
 
    void display()
    {
        std::cout << length << " " << width << std::endl;
    }
};
std::ostream& operator<<(std::ostream &os,const rectangle &r3)
{
    os<<r3.length;
    os<<" ";
    os<<r3.width;
    return os;
}

rectangle rectangle::operator-(rectangle &r3)
{
    rectangle minusobj;
    minusobj.length = this->length - r3.length;
    minusobj.width = this->width - r3.width;
    return minusobj;
}
 
rectangle rectangle::operator+(rectangle &r3)
{
    rectangle obj;
    obj.length = this->length + r3.length;
    obj.width = this->width + r3.width;
    return obj;
}
 
rectangle rectangle::operator==(rectangle &r3)
{
    rectangle obj;
    obj.length = this->length == r3.length;
    obj.width = this->width == r3.width;
 
    return obj;
}
 
rectangle rectangle::operator!=(rectangle &r3)
{
    rectangle obj;
    obj.length = this->length == r3.length;
    obj.width = this->width == r3.width;
    return obj;
}
 
rectangle &rectangle::operator++() // pre
{
    ++this->length;
    ++this->width;
    return *this;
}
rectangle rectangle::operator++(int) // post
{
    rectangle temp = *this;
    this->length++;
    this->width++;
    return temp;
}
 
rectangle rectangle::operator-()
{
    rectangle temp;
    temp.length = -this->length;
    temp.width = -this->width;
    return temp;
}
 
rectangle rectangle::operator+(int x)
{
    rectangle obj;
    obj.length = this->length + x;
    obj.width = this->width + x;
    return obj;
}
 
rectangle operator+(int x, rectangle &r3)
{
    rectangle obj;
    obj.length = x + r3.length;
    obj.width = x + r3.width;
    return obj;
}
 
int main()
{
    rectangle r1(7, 4);
    rectangle r2(7, 6);
 
    // rectangle r3=r1+r2;
    // r3.display();
    // rectangle r3 = r1 == r2;
    // r3.display();
 
    // rectangle r3 =r2++;
    // r3.display();
    // r2.display();
 
    // rectangle r4 =++r2;
    // r4.display();
    // r2.display();
 
    // rectangle r3=-r2;
    // r3.display();
    // r2.display();
 
    // rectangle r3=r2+10;
    // r3.display();
    // r2.display();
 
    rectangle r3=10+r2; // operator(10+r2)
    //r3.display();
    std::cout<<r3<<std::endl<<r2<<std::endl;
    return 0;
}
 
 
 
// #include<iostream>
// #include<cstring>
 
// class Product
// {
//     char pname[30];
//     public:
//         Product()
//         {
//             strcpy(pname,"Laptop");
//         }
//         Product(char *p)
//         {
//             strcpy(pname,p);
//         }
//         char& operator[](int index)
//         {
//             return pname[index];
//         }
//         void operator()()
//         {
//             std::cout<<pname;
//         }
// };
// int main()
// {
//     Product p1;
//     char ch = p1[0];
//     std::cout<<"ch = "<<ch<<std::endl;
 
//     p1[1]='A';
    
//     p1();
 
 
//     return 0;
// }
 
 
// #include<iostream>
 
// class Mystack
// {
//     int size;
//     int top;
//     int *arr;
//     public:
//         Mystack()
//         {
//             size=2;
//             top=-1;
//             arr=new int[size];
//         }
//          Mystack(int s)
//         {
//             size=s;
//             top=-1;
//             arr=new int[size];
//         }
//         void push(int ele)
//         {
//             if(top!=size-1)
//                 arr[++top]=ele;
//             else
//                 std::cout<<"\n stack overflow";
//         }
//         int pop()
//         {
//             if(top!=-1)
//                 return arr[top--];
//             else
//                 std::cout<<"\n stack underflow";
//         }
//         void display()
//         {
//             for(int i=0;i<=top;i++)
//             {
//                 std::cout<<arr[i]<<std::endl;
//             }
//         }
//         ~Mystack()
//         {
//             delete arr;
//         }
// };
// class CreateObject
// {
//     Mystack *m;
//     public:
//         CreateObject()
//         {
//             m=new Mystack;
//         }
//         CreateObject(int s)
//         {
//             m=new Mystack(s);
//         }
//         ~CreateObject()
//         {
//             delete m;
//         }
//         Mystack& operator*()
//         {
//             return *m;
//         }
//         Mystack* operator->()
//         {
//             return m;
//         }
// };
// int main()
// {
//     CreateObject obj;
//     obj->push(10);
//     obj->push(20);
//     obj->display();
 
//     //(*obj).push(10);
 
//     //(*obj).display();
// }
 
// // // Header Guard
// #ifndef HEADER_H_NAME
// #define HEADER_H_NAME
// /*...
// ...*/
// #endif