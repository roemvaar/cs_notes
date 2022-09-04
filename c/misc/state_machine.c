/* state_machine.c - State Machine implemented in C
 *
 * State machines are simple in C if you use function pointeres.
 * https://stackoverflow.com/questions/1371460/state-machines-tutorials
 * 
 * You need two arrays, one for state function pointers and one for
 * state transition rules.
 * Every function returns the code, you lookup state transition table by
 * state and return code to find the next state and then just execute it.
 */

#include <stdio.h>
#include <stdlib.h>

#define EXIT_STATE end
#define ENTRY_STATE entry

int entry_state(void);
int foo_state(void);
int bar_state(void);
int exit_state(void);

/* array and enum must be in sync! */
int (*state[])(void) = {entry_state, foo_state, bar_state, exit_state};

typedef enum state_codes {
    ENTRY,
    FOO,
    BAR,
    END,
} state_codes_t;

typedef enum ret_codes {
    OK,
    FAIL,
    REPEAT,
} ret_codes_t;

typedef struct transition {
    state_codes_t src_state;
    ret_codes_t ret_code;
    state_codes_t dst_state;
} transition_t;

/* transitions from end state aren't needed */
transition_t state_transition[] = {
    {ENTRY, OK, FOO},
    {ENTRY, FAIL, END},
    {FOO, OK, BAR},
    {FOO, FAIL, END},
    {FOO, REPEAT, FOO},
    {BAR, OK, END},
    {BAR, FAIL, END},
    {BAR, REPEAT, BAR}
};

int main(int argc, char* argv[])
{
    state_codes_t cur_state = ENTRY_STATE;
    ret_codes_t rc;
    int (*state_fun)(void);

    for(;;) {
        state_fun = state[cur_state]
    }

    return 0;
}
