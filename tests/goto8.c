#include <stdlib.h>
#include <stdio.h>

int main() {
    int i;

    for (;;) {
        if (i > 0) {
            if (i == 5)
                goto end;
        }
        else {
            if (i == -5)
                goto end;
        }
    }

end:
    return 0;
}
