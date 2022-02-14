// GenericVector class template

#ifndef GENERICVECTOR_H
#define GENERICVECTOR_H

#include <iostream>
#include <vector>

template <typename T>
class GenericVector{
    private:
    std::vector<T> vec;

    public:
    void push(const T x) { 
        vec.push_back(x);
    }

    const T& last() const { 
        return vec[vec.size()-1]; 
    }

    void print() const {
        std::cout << "Elements in vector: ";
        for (T element : vec){
            std::cout << element;
            if(element != last())
                std::cout << ", "; 
        }
        std::cout << std::endl; 
    }
};

#endif