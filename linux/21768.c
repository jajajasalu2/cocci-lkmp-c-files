cocci_test_suite() {
	void cocci_id/* arch/s390/mm/extmem.c 89 */;
	char *cocci_id/* arch/s390/mm/extmem.c 78 */[];
	struct dcss_segment {
		struct list_head list;
		char dcss_name[8];
		char res_name[16];
		unsigned long start_addr;
		unsigned long end;
		refcount_t ref_count;
		int do_nonshared;
		unsigned int vm_segtype;
		struct qrange range[6];
		int segcnt;
		struct resource *res;
	} cocci_id/* arch/s390/mm/extmem.c 62 */;
	char cocci_id/* arch/s390/mm/extmem.c 568 */[80];
	char cocci_id/* arch/s390/mm/extmem.c 567 */[160];
	struct qin64 {
		char qopcode;
		char rsrv1[3];
		char qrcode;
		char rsrv2[3];
		char qname[8];
		unsigned int qoutptr;
		short int qoutlen;
	} cocci_id/* arch/s390/mm/extmem.c 52 */;
	struct qout64 {
		unsigned long segstart;
		unsigned long segend;
		int segcnt;
		int segrcnt;
		struct qrange range[6];
	} cocci_id/* arch/s390/mm/extmem.c 44 */;
	struct qrange {
		unsigned long start;
		unsigned long end;
	} cocci_id/* arch/s390/mm/extmem.c 39 */;
	void *cocci_id/* arch/s390/mm/extmem.c 372 */;
	struct resource cocci_id/* arch/s390/mm/extmem.c 321 */;
	struct dcss_segment *cocci_id/* arch/s390/mm/extmem.c 297 */;
	unsigned long cocci_id/* arch/s390/mm/extmem.c 296 */;
	unsigned long *cocci_id/* arch/s390/mm/extmem.c 294 */;
	char *cocci_id/* arch/s390/mm/extmem.c 294 */;
	int cocci_id/* arch/s390/mm/extmem.c 293 */;
	struct qrange cocci_id/* arch/s390/mm/extmem.c 229 */;
	struct qout64 cocci_id/* arch/s390/mm/extmem.c 182 */;
	struct qin64 *cocci_id/* arch/s390/mm/extmem.c 170 */;
	struct qout64 *cocci_id/* arch/s390/mm/extmem.c 169 */;
	int *cocci_id/* arch/s390/mm/extmem.c 133 */;
	struct dcss_segment cocci_id/* arch/s390/mm/extmem.c 119 */;
	struct list_head *cocci_id/* arch/s390/mm/extmem.c 113 */;
	char cocci_id/* arch/s390/mm/extmem.c 112 */[9];
}
