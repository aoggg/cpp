#include <iostream>
#include <numeric>
#include <set>
#include <vector>

int main() {
    using namespace std;
    unsigned N;
    unsigned long S;
    cin >> N >> S;

    vector<unsigned long> A(N);
    for (auto& a : A)
        cin >> a;

    // Boil down to 0 <= S < X
    const auto sum{reduce(begin(A), end(A))};
    S %= sum;

    // Repeat A twice
    A.reserve(2 * N);
    for (unsigned i{}; i < N; ++i)
        A.emplace_back(A[i]);

    // Find the cumulative sum
    set<unsigned long> prefix_sum{};
    prefix_sum.emplace();
    for (unsigned long p{}; const auto a : A) {
        p += a;
        prefix_sum.insert(p);
    }

    // For each element p of the cumulative sums, check if (p + S) is contianed
    for (const auto p : prefix_sum)
        if (prefix_sum.contains(p + S)) {
            cout << "Yes" << endl;
            return 0;
        }

    cout << "No" << endl;
    return 0;
}
