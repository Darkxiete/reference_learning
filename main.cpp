#include <iostream>

struct free_throws {
    std::string name;
    int made;
    int attempts;
    float percent;
};

free_throws &accumulate_1(free_throws &target, const free_throws &source);

free_throws accumulate_2(free_throws &target, const free_throws &source);


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

free_throws accumulate_3(free_throws target, const free_throws source) {
    target.attempts += source.attempts;
    target.made += source.made;
    return target;
}

int main() {
    free_throws one = {"Ifelas Branch", 13, 14};
    free_throws two = {"Andor Knott", 10, 16};
    free_throws three = {"Minnie Max", 7, 9};
    free_throws a = accumulate_1(one, two);
    free_throws b = accumulate_2(two, three);
    free_throws c = accumulate_3(three, three);
    std::cout << a.made << std::endl;
    std::cout << b.made << std::endl;
    std::cout << c.made << std::endl;
}