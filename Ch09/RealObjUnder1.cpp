#include <iostream>
using std::cout;
using std::endl;

class Data
{
  private:
    int data;

  public:
    Data(int num) : data(num) {}
    void ShowData() { cout << "Data: " << data << endl; }
    void Add(int num) { data += num; }
};

int main(int argc, char const *argv[])
{
    Data obj(15);
    obj.Add(17);
    obj.ShowData();

    return 0;
}
