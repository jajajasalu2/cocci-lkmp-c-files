cocci_test_suite() {
	struct sysinfo_2_2_2 *cocci_id/* arch/s390/kernel/lgr.c 86 */;
	struct sysinfo_1_1_1 *cocci_id/* arch/s390/kernel/lgr.c 69 */;
	void *cocci_id/* arch/s390/kernel/lgr.c 69 */;
	char *cocci_id/* arch/s390/kernel/lgr.c 58 */;
	int cocci_id/* arch/s390/kernel/lgr.c 58 */;
	void cocci_id/* arch/s390/kernel/lgr.c 58 */;
	struct debug_info *cocci_id/* arch/s390/kernel/lgr.c 53 */;
	struct lgr_info cocci_id/* arch/s390/kernel/lgr.c 52 */;
	char cocci_id/* arch/s390/kernel/lgr.c 50 */[PAGE_SIZE]__aligned(PAGE_SIZE);
	struct lgr_info {
		u64 stfle_fac_list[4];
		u32 level;
		char manufacturer[16];
		char type[4];
		char sequence[16];
		char plant[4];
		char model[16];
		u16 lpar_number;
		char name[8];
		u8 vm_count;
		struct {
			char name[8];
			char cpi[16];
		} vm[VM_LEVEL_MAX];
	}__packed __aligned(8) cocci_id/* arch/s390/kernel/lgr.c 25 */;
	int __init cocci_id/* arch/s390/kernel/lgr.c 176 */;
	struct timer_list cocci_id/* arch/s390/kernel/lgr.c 163 */;
	struct timer_list *cocci_id/* arch/s390/kernel/lgr.c 157 */;
	void cocci_id/* arch/s390/kernel/lgr.c 152 */(void);
	unsigned long cocci_id/* arch/s390/kernel/lgr.c 139 */;
	struct lgr_info *cocci_id/* arch/s390/kernel/lgr.c 117 */;
	u8 cocci_id/* arch/s390/kernel/lgr.c 105 */;
	struct sysinfo_3_2_2 *cocci_id/* arch/s390/kernel/lgr.c 100 */;
}
