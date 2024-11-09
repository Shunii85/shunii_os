void io_hlt(void);
void write_mem8(int addr, int data);

void HariMain(void)
{
	int i; /* 変数宣言。iという変数は、32ビットの整数型 */
	char *p; /* pは1バイト 番地用の変数 */

	p = (char *) 0xa0000; /* 番地を代入 */
	for (i = 0; i <= 0xaffff; i++) {
		p[i] = i & 0x0f;
	}

	for (;;) {
		io_hlt();
	}
}
