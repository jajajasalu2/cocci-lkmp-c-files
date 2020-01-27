cocci_test_suite() {
	struct task_struct cocci_id/* arch/s390/mm/fault.c 787 */;
	struct thread_struct *cocci_id/* arch/s390/mm/fault.c 780 */;
	pid_t cocci_id/* arch/s390/mm/fault.c 699 */;
	__u16 cocci_id/* arch/s390/mm/fault.c 698 */;
	struct ext_code cocci_id/* arch/s390/mm/fault.c 694 */;
	struct pfault_refbk cocci_id/* arch/s390/mm/fault.c 648 */;
	int __init cocci_id/* arch/s390/mm/fault.c 62 */;
	struct pfault_refbk {
		u16 refdiagc;
		u16 reffcode;
		u16 refdwlen;
		u16 refversn;
		u64 refgaddr;
		u64 refselmk;
		u64 refcmpmk;
		u64 reserved;
	}__attribute__((packed,aligned(8))) cocci_id/* arch/s390/mm/fault.c 608 */;
	char *cocci_id/* arch/s390/mm/fault.c 600 */;
	vm_fault_t cocci_id/* arch/s390/mm/fault.c 585 */;
	struct pt_regs *cocci_id/* arch/s390/mm/fault.c 582 */;
	void cocci_id/* arch/s390/mm/fault.c 582 */;
	enum fault_type{KERNEL_FAULT, USER_FAULT, VDSO_FAULT, GMAP_FAULT,} cocci_id/* arch/s390/mm/fault.c 53 */;
	unsigned int cocci_id/* arch/s390/mm/fault.c 394 */;
	enum fault_type cocci_id/* arch/s390/mm/fault.c 391 */;
	struct vm_area_struct *cocci_id/* arch/s390/mm/fault.c 390 */;
	struct mm_struct *cocci_id/* arch/s390/mm/fault.c 389 */;
	struct task_struct *cocci_id/* arch/s390/mm/fault.c 388 */;
	struct gmap *cocci_id/* arch/s390/mm/fault.c 387 */;
	u16 __user *cocci_id/* arch/s390/mm/fault.c 306 */;
	u16 cocci_id/* arch/s390/mm/fault.c 303 */;
	void __user *cocci_id/* arch/s390/mm/fault.c 298 */;
	const struct exception_table_entry *cocci_id/* arch/s390/mm/fault.c 254 */;
	long cocci_id/* arch/s390/mm/fault.c 212 */;
	unsigned long *cocci_id/* arch/s390/mm/fault.c 108 */;
	unsigned long cocci_id/* arch/s390/mm/fault.c 106 */;
	void *cocci_id/* arch/s390/mm/fault.c 104 */;
	int cocci_id/* arch/s390/mm/fault.c 104 */;
}
