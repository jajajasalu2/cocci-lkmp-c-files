cocci_test_suite() {
	long cocci_id/* drivers/staging/isdn/hysdn/hysdn_boot.c 88 */;
	unsigned char cocci_id/* drivers/staging/isdn/hysdn/hysdn_boot.c 76 */;
	unsigned char *cocci_id/* drivers/staging/isdn/hysdn/hysdn_boot.c 72 */;
	struct boot_data *cocci_id/* drivers/staging/isdn/hysdn/hysdn_boot.c 70 */;
	int cocci_id/* drivers/staging/isdn/hysdn/hysdn_boot.c 70 */;
	void cocci_id/* drivers/staging/isdn/hysdn/hysdn_boot.c 69 */;
	u_char cocci_id/* drivers/staging/isdn/hysdn/hysdn_boot.c 342 */;
	u_char *cocci_id/* drivers/staging/isdn/hysdn/hysdn_boot.c 341 */;
	hysdn_card *cocci_id/* drivers/staging/isdn/hysdn/hysdn_boot.c 339 */;
	struct boot_data {
		unsigned short Cryptor;
		unsigned short Nrecs;
		unsigned char pof_state;
		unsigned char is_crypted;
		int BufSize;
		int last_error;
		unsigned short pof_recid;
		unsigned long pof_reclen;
		unsigned long pof_recoffset;
		union {
			unsigned char BootBuf[BOOT_BUF_SIZE];
			tPofRecHdr PofRecHdr;
			tPofFileHdr PofFileHdr;
			tPofTimeStamp PofTime;
		} buf;
	} cocci_id/* drivers/staging/isdn/hysdn/hysdn_boot.c 32 */;
	struct boot_data cocci_id/* drivers/staging/isdn/hysdn/hysdn_boot.c 283 */;
	unsigned char **cocci_id/* drivers/staging/isdn/hysdn/hysdn_boot.c 273 */;
	tPofRecHdr cocci_id/* drivers/staging/isdn/hysdn/hysdn_boot.c 204 */;
	unsigned short cocci_id/* drivers/staging/isdn/hysdn/hysdn_boot.c 202 */;
	tPofFileHdr cocci_id/* drivers/staging/isdn/hysdn/hysdn_boot.c 193 */;
}
