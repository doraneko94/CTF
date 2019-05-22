// エラーメッセージを表示した後、終了する関数
void fatal(char *message) {
    char error_message[100];

    strcpy(error_message, "[!!] 致命的なエラー:");
    strncat(error_message, message, 79);
    perror(error_message);
    exit(-1);
}

// malloc()とエラー判定をセットにした関数
void *ec_malloc(unsigned int size) {
    void *ptr;
    ptr = malloc(size);
    if (ptr == NULL)
        fatal("ec_malloc()内のメモリ割り当てエラーが発生しました。");
    return ptr;
}