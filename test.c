/* std includes */
#include <stdio.h>  // for: printf
/* user includes */
#include "elog.h"

int main(int argc, char *argv[]) {
    log_error("I'm error! %s\n", "life");
    log_warn("I'm warn! %s\n", "is xxx");
    log_info("I'm info! %s\n", "I know");
    log_debug("I'm debug! %s\n", "your");
    log_verbose("I'm verbose! %s\n", "");
    return 0;
}
