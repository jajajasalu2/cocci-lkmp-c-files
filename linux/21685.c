cocci_test_suite() {
	union {
		struct vdso_data data;
		u8 page[PAGE_SIZE];
	} cocci_id/* arch/s390/kernel/vdso.c 96 */;
	bool cocci_id/* arch/s390/kernel/vdso.c 85 */;
	char *cocci_id/* arch/s390/kernel/vdso.c 83 */;
	const struct vm_special_mapping cocci_id/* arch/s390/kernel/vdso.c 77 */;
	struct vm_fault *cocci_id/* arch/s390/kernel/vdso.c 44 */;
	vm_fault_t cocci_id/* arch/s390/kernel/vdso.c 43 */;
	const struct vm_special_mapping *cocci_id/* arch/s390/kernel/vdso.c 43 */;
	unsigned int __read_mostly cocci_id/* arch/s390/kernel/vdso.c 41 */;
	struct page **cocci_id/* arch/s390/kernel/vdso.c 35 */;
	unsigned int cocci_id/* arch/s390/kernel/vdso.c 34 */;
	void *cocci_id/* arch/s390/kernel/vdso.c 33 */;
	char cocci_id/* arch/s390/kernel/vdso.c 32 */;
	struct page *cocci_id/* arch/s390/kernel/vdso.c 257 */;
	int __init cocci_id/* arch/s390/kernel/vdso.c 246 */;
	unsigned long cocci_id/* arch/s390/kernel/vdso.c 188 */;
	struct vm_area_struct *cocci_id/* arch/s390/kernel/vdso.c 187 */;
	struct mm_struct *cocci_id/* arch/s390/kernel/vdso.c 186 */;
	struct linux_binprm *cocci_id/* arch/s390/kernel/vdso.c 184 */;
	int cocci_id/* arch/s390/kernel/vdso.c 184 */;
	void cocci_id/* arch/s390/kernel/vdso.c 167 */;
	unsigned long *cocci_id/* arch/s390/kernel/vdso.c 151 */;
	u64 *cocci_id/* arch/s390/kernel/vdso.c 148 */;
	struct vdso_per_cpu_data *cocci_id/* arch/s390/kernel/vdso.c 132 */;
	struct lowcore *cocci_id/* arch/s390/kernel/vdso.c 124 */;
	void __init cocci_id/* arch/s390/kernel/vdso.c 124 */;
	struct vdso_data cocci_id/* arch/s390/kernel/vdso.c 122 */;
	struct vdso_data *cocci_id/* arch/s390/kernel/vdso.c 100 */;
}
