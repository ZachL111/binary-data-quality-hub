#include "policy.hpp"
#include <cassert>

int main() {
    Signal signal_case_1{80, 75, 26, 20, 12};
    assert(score_signal(signal_case_1) == 91);
    assert(classify_signal(signal_case_1) == "review");
    Signal signal_case_2{83, 82, 23, 5, 11};
    assert(score_signal(signal_case_2) == 186);
    assert(classify_signal(signal_case_2) == "accept");
    Signal signal_case_3{82, 88, 15, 9, 9};
    assert(score_signal(signal_case_3) == 192);
    assert(classify_signal(signal_case_3) == "accept");
}
