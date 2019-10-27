
#ifndef VECTOR_HPP
#define VECTOR_HPP

template <class T>
class Vector {
  private:
      int arr_size;
      int arr_capacity;
      int* arr;
  
  public:
      Vector(int size=0, T val=0);
      Vector(const Vector& v);
      Vector& operator=(const Vector& v);
      
      int size() const;
      int capacity() const;
      
      T& operator[](const int index);
      T at(const int index) const;
      
      void push_back(const int index);
      void pop_back(const int index);
}

#endif  // VECTOR_HPP
