class DynamicArray {
private:
    vector<int> arr;
public:

    DynamicArray(int capacity) {
        arr.reserve(capacity);
    }

    int get(int i) {
        return arr[i];
    }

    void set(int i, int n) {
        arr[i] = n;
    }

    void pushback(int n) {
        if (arr.size() == arr.capacity()) {
            resize();
        }
        arr.push_back(n);
    }

    int popback() {
        int a = arr.back();
        arr.pop_back();
        return a;
    }

    void resize() {
        arr.reserve(arr.capacity() * 2);
    }

    int getSize() {
        return arr.size();
    }

    int getCapacity() {
        return arr.capacity();
    }
};
