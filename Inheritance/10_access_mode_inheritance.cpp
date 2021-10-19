#include <iostream>
using namespace std;

class Base {
   private:
    int pvt = 1;

   protected:
    int prot = 2;

   public:
    int pub = 3;

    // access private member
    int getPVT() {
        return pvt;
    }
};

class PrivateDerived : private Base {
   public:
    // function to access protected member from Base
    int getProt() {
        return prot;
    }

    // function to access private member
    int getPub() {
        return pub;
    }
};

class PublicDerived : public Base {
   public:
    // access protected member from Base
    int getProt() {
        return prot;
    }
};

class ProtectedDerived : protected Base {
   public:
    // access protected member from Base
    int getProt() {
        return prot;
    }

    // access public member from Base
    int getPub() {
        return pub;
    }
};

int main() 
{
    PrivateDerived object1;
    PublicDerived object2;
    ProtectedDerived object3;

    cout<<"\nProgram Name: - Write a Program in C++ Language to Access mode in inheritance.";
    cout<<"\nName : - Sarthak Mishra ";
    cout<<"\nEnrollement no.: - A2345920084";
    cout<<"\nSection: - 3CSE2 Evening";
    cout<<"\n--------------------------------------------------------------------\n";

    cout<<"\n\n________For Private Class________\n";
    cout << "Private cannot be accessed." << endl;
    cout << "Protected = " << object1.getProt() << endl;
    cout << "Public = " << object1.getPub() << endl;

    cout<<"\n\n________For Public Class________\n";
    cout << "Private of public class = " << object2.getPVT() << endl;
    cout << "Protected of public class = " << object2.getProt() << endl;
    cout << "Public of public class = " << object2.pub << endl;

    cout<<"\n\n________For Protected Class________\n";
    cout << "Private cannot be accessed." << endl;
    cout << "Protected = " << object3.getProt() << endl;
    cout << "Public = " << object3.getPub() << endl;
    return 0;
}