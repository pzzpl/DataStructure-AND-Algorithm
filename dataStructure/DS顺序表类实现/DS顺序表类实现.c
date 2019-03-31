#include<iostream>
using namespace std;
#define ok 0
#define error -1

// 顺序表类定义
class seqlist
{
private:
    int *list;
    int maxsize;
    int size;
public:
    seqlist();
    ~seqlist();
    void creat(int *p, int size_num)
    {
        int i;
        size = size_num;
        for(i = 0; i < size; i++)
        {
            list[i] = p[i];
        }
        list_display();
    }

    int list_size()
    {
        return size;
    }

    int list_insert(int i, int item)
    {
        if(size == maxsize)
        {
            cout << "error" << endl;
            return error;
        }
        else
        {
            if(i >= 1 && i <= size+1)
            {
                int j;
                for(j = size-1; j >= i-1; j--)
                {
                    list[j+1] = list[j];
                }
                list[i-1] = item;
                size++;
                list_display();
                return ok;
            }
            else
            {
                cout << "error" << endl;
                return error;
            }
        }
    }

    int list_del(int i)
    {
        if(i >= 1 && i <= size)
        {
            int j;
            for(j = i-1; j < size; j++)
            {
                list[j] = list[j+1];
            }
            size--;
            list_display();
            return ok;
        }
        else
        {
            cout << "error" << endl;
            return error;
        }
    }
    int list_get(int i)
    {
        if(i <= 0 || i > size)
        {
            cout << "error" << endl;
            return error;
        }
        else
        {
            cout << list[i-1] << endl;
            return ok;
        }
    }
    void list_display()
    {
        int i;
        cout << list_size() << " ";
        for(i = 0; i < size; i++)
            cout << list[i] << " ";
        cout << endl;
    }
};
seqlist::seqlist()
{
    maxsize = 1000;
    size = 0;
    list = new int [maxsize];
}
seqlist::~seqlist()
{
    delete []list;
}

int main()
{
    int size, i, loc, num;
    cin >> size;
    seqlist l;
    int *arr = new int [size];
    for(i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    l.creat(arr, size);
    cin >> loc >> num;
    l.list_insert(loc, num);
    cin >> loc >> num;
    l.list_insert(loc, num);
    cin >> loc;
    l.list_del(loc);
    cin >> loc;
    l.list_del(loc);
    cin >> loc;
    l.list_get(loc);
    cin >> loc;
    l.list_get(loc);
    delete []arr;
    return 0;
}
