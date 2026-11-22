#include <string>
#include <vector>

void mod_cycle() {
    int acc = 0;
    for (int i = 0; i < 20; ++i) acc = (acc + i * 3) % 7;
    (void)acc;
}

void alternate_sum() {
    int acc = 0;
    for (int i = 1; i <= 12; ++i) {
        if (i % 2 == 0) acc += i; else acc -= i;
    }
    (void)acc;
}

void text_contains() {
    std::string text = "hidden harbor";
    std::string part = "harbor";
    bool found = false;
    for (std::size_t i = 0; i + part.size() <= text.size(); ++i) {
        bool match = true;
        for (std::size_t j = 0; j < part.size(); ++j) {
            if (text[i + j] != part[j]) { match = false; break; }
        }
        if (match) { found = true; break; }
    }
    (void)found;
}

void triangular_number() {
    int n = 12;
    int tri = n * (n + 1) / 2;
    (void)tri;
}

extern "C" int frost_delta();
extern "C" void swift_kite();
extern "C" void mellow_haven();
extern "C" void noble_grove();
extern "C" void gentle_orbit();

int main() {
    mod_cycle();
    alternate_sum();
    text_contains();
    triangular_number();
    swift_kite();
    mellow_haven();
    noble_grove();
    gentle_orbit();
    return frost_delta();
}
