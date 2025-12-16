#include "my_mastermind.h"

void rand_code(char *code) {
    char nums[9] = {'0','1','2','3','4','5','6','7','8'};

    srand((unsigned int)time(NULL));
    for (int i = 0; i < CODE_LEN; i++) {
        int j = i + (rand() % (9 - i));
        char temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
        code[i] = nums[i];
    }
    code[CODE_LEN] = '\0';
}


int is_code_valid(const char *code) {
    if (!code || my_strlen(code) != CODE_LEN) 
    {
        return 0;
    }

    for (int i = 0; i < CODE_LEN; i++) {
        char c = code[i];
        if (c < '0' || c > '8')
        {
            return 0;
        }

    }
    return 1;
}



int read_arguments_one_by_one(char *buffer, int len) {
    if (!buffer || len <= 0) return -1;

    int i = 0;
    char c;

    while (i < len - 1) {
        int n = (int)read(0, &c, 1);
        if (n <= 0) {
            return -1;
        }

        if (c == '\n') break;

        if (c == 0x04 || c == 0x1A) {
            if (i == 0)
            {
                return -1; 
            }   
            break;                   
        }

        buffer[i++] = c;
    }
    buffer[i] = '\0';
    return i;
}


void check_game(const char *secret_code, const char *user_guess, int *wellplaced, int *misplaced)
{
    *wellplaced = 0;
    *misplaced  = 0;

    int s[CODE_LEN] = {0};
    int g[CODE_LEN] = {0};

    for (int i = 0; i < CODE_LEN; i++) {
        if (user_guess[i] == secret_code[i])
        {
            (*wellplaced)++;
            s[i] = g[i] = 1;
        }
    }

    for (int i = 0; i < CODE_LEN; i++) {
        if (!g[i]) {
            for (int j = 0; j < CODE_LEN; j++) {
                if (!s[j] && user_guess[i] == secret_code[j]) {
                    (*misplaced)++;
                    s[j] = 1;
                    break;
                }
            }
        }
    }
}

int main(int argc, char **argv) {
    char secret_code[CODE_LEN + 1] = {0};     
    int attempt = MAX_ATTEMPTS;

    
    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "-c") == 0 && i + 1 < argc && is_code_valid(argv[i + 1])) {
            strncpy(secret_code, argv[i + 1], CODE_LEN);
            secret_code[CODE_LEN] = '\0';
            i++;
        } else if (strcmp(argv[i], "-t") == 0 && i + 1 < argc) {
            int t = atoi(argv[i + 1]);
            if (t > 0) attempt = t;
            i++;
        }
    }

    if (!is_code_valid(secret_code)) {
        rand_code(secret_code);
    }

    my_putstr("Will you find the secret code?\nPlease enter a valid guess\n");

    char user_guess[16];
    int round_no = 0;

    while (round_no < attempt) {
        my_putstr("---\nRound ");
        char round_str[20];
        sprintf(round_str, "%d", round_no + 1);
        my_putstr(round_str);
        my_putstr("\n>");

        int len = read_arguments_one_by_one(user_guess, (int)sizeof user_guess);
        if (len == -1) {
            my_putstr("\nEOF detected. Exiting game.\n");
            break;
        }

        if (!is_code_valid(user_guess)) {
            my_putstr("Incorrect input!\n");
            round_no++;            
            continue;              
        }

        int wellplaced = 0, misplaced = 0;
        check_game(secret_code, user_guess, &wellplaced, &misplaced);

        if (wellplaced == CODE_LEN) {
            my_putstr("Congratz! You did it!\n");
            break;
        }

        my_putstr("Well placed pieces: ");
        char wp[2]; sprintf(wp, "%d", wellplaced); my_putstr(wp); my_putstr("\n");
       
        my_putstr("Misplaced pieces: ");
        char mp[2]; sprintf(mp, "%d", misplaced); my_putstr(mp); my_putstr("\n");
        
        round_no++;                
    }

    if (round_no == attempt) {
        my_putstr("Sorry, you've used all attempts. The secret code was: ");
        my_putstr(secret_code);
        my_putstr("\n");
    }


    return 0;
}