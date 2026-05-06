#include "domain_review.hpp"
#include <cassert>

int main() {
    DomainReview item{55, 20, 14, 48};
    assert(domain_review_score(item) == 136);
    assert(domain_review_lane(item) == "watch");
}
