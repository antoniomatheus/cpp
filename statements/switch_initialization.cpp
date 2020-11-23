#include <cstdio>

enum class Color {
    Mauve,
    Pink,
    Russet
};

struct Result {
    const char* name;
    Color color;
};

Result observe_shrub(const char* name) {
    return Result{ name, Color::Russet };
}

int main() {
    const char* description;
    switch (const auto result = observe_shrub("Zaphod"); result.color) {
        case Color::Mauve: {
            description = "mauvey shade of pink russet";
            break;
        } case Color::Pink: {
            description = "pink shade of mauvey russet";
            break;
        } case Color::Russet: {
            description = "russety shade of pink mauve";
            break;
        } default: {
            description = "enigmatic shade of whitish black";
        }
    }

    printf("The other Shaltanac's joopleberry shrub is always a "
           "more %s.", description);
}