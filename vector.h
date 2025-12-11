class vector
{
private:
    unsigned int size;
    unsigned int capacity;
    int *data;

public:
    vector()
    {
        size = 0;
        capacity = 1;
        data = new int[capacity];
    };
    ~vector()
    {
        delete data;
    };

    void assign()
    {
    }
    int at(unsigned int i)
    {
        return data[i];
    }
    void back()
    {
    }
    void begin()
    {
    }
    int getCapacity()
    {
        return capacity;
    }
    void clear()
    {
    }
    int *getData()
    {
        return data;
    }
    void empty()
    {
    }
    void end()
    {
    }
    void erase()
    {
    }
    void front()
    {
    }
    void insert()
    {
    }
    int max_size()
    {
        return capacity;
    }
    void pop_back()
    {
    }
    void push_back()
    {
    }
    void rbegin()
    {
    }
    void rend()
    {
    }
    void reserve()
    {
    }
    void resize()
    {
    }
    void shrink_to_fit()
    {
    }
    int getSize()
    {
        return size;
    }
    void swap() {}
};
