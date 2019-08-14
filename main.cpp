#include <iostream>

struct free_throws {
    std::string name;
    int made;
    int attempts;
    float percent;
};

free_throws &accumulate_1(free_throws &target, const free_throws &source);

free_throws accumulate_2(free_throws &target, const free_throws &source);

void swap_1(int *pa, int *pb);

void swap_2(int &pa, int &pb);


free_throws &accumulate_1(free_throws &target, const free_throws &source) {
    target.attempts += source.attempts;
    target.made += source.made;
    return target;
}

free_throws accumulate_2(free_throws &target, const free_throws &source) {
    target.attempts += source.attempts;
    target.made += source.made;
    return target;
}

void swap_1(int *pa, int *pb) {
    int a = *pa;
    int b = *pb;
    *pa = b;
    *pb = a;
}

void swap_2(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void swap_3(int *pa, int *pb) {
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
}

int main() {
    free_throws one = {"Ifelas Branch", 13, 14};
    free_throws two = {"Andor Knott", 10, 16};
    free_throws three = {"Minnie Max", 7, 9};
    int a = 1, b = 2;

    free_throws fa = accumulate_1(one, two);
    free_throws fb = accumulate_2(two, three);


    std::cout << "a, b = " << a << ", " << b << std::endl;
    std::cout << "a, b = " << a << ", " << b << std::endl;


}