void io_hlt(void);
void write_mem8(int addr, int data);

void HariMain(void)
{
	int i; /* �ϐ��錾�Bi�Ƃ����ϐ��́A32�r�b�g�̐����^ */
	char *p; /* p��1�o�C�g �Ԓn�p�̕ϐ� */

	p = (char *) 0xa0000; /* �Ԓn���� */
	for (i = 0; i <= 0xaffff; i++) {
		p[i] = i & 0x0f;
	}

	for (;;) {
		io_hlt();
	}
}
