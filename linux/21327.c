cocci_test_suite() {
	struct syscore_ops cocci_id/* arch/sh/mm/pmb.c 888 */;
	const struct file_operations cocci_id/* arch/sh/mm/pmb.c 854 */;
	struct inode *cocci_id/* arch/sh/mm/pmb.c 849 */;
	struct file *cocci_id/* arch/sh/mm/pmb.c 849 */;
	struct seq_file *cocci_id/* arch/sh/mm/pmb.c 815 */;
	bool cocci_id/* arch/sh/mm/pmb.c 810 */;
	char *cocci_id/* arch/sh/mm/pmb.c 775 */;
	int __init cocci_id/* arch/sh/mm/pmb.c 775 */;
	unsigned int cocci_id/* arch/sh/mm/pmb.c 77 */;
	void __init cocci_id/* arch/sh/mm/pmb.c 695 */;
	struct pmb_entry cocci_id/* arch/sh/mm/pmb.c 67 */[NR_PMB_ENTRIES];
	void cocci_id/* arch/sh/mm/pmb.c 64 */(struct pmb_entry *, int depth);
	struct {
		unsigned long size;
		int flag;
	} cocci_id/* arch/sh/mm/pmb.c 54 */[];
	int cocci_id/* arch/sh/mm/pmb.c 489 */;
	unsigned long __force cocci_id/* arch/sh/mm/pmb.c 464 */;
	struct vm_struct *cocci_id/* arch/sh/mm/pmb.c 417 */;
	void __iomem *cocci_id/* arch/sh/mm/pmb.c 410 */;
	struct pmb_entry {
		unsigned long vpn;
		unsigned long ppn;
		unsigned long flags;
		unsigned long size;
		raw_spinlock_t lock;
		int entry;
		struct pmb_entry *link;
	} cocci_id/* arch/sh/mm/pmb.c 36 */;
	phys_addr_t cocci_id/* arch/sh/mm/pmb.c 335 */;
	unsigned long cocci_id/* arch/sh/mm/pmb.c 310 */;
	struct pmb_entry *cocci_id/* arch/sh/mm/pmb.c 308 */;
	void cocci_id/* arch/sh/mm/pmb.c 308 */;
	struct pmb_entry cocci_id/* arch/sh/mm/pmb.c 265 */;
	void *cocci_id/* arch/sh/mm/pmb.c 241 */;
	u64 cocci_id/* arch/sh/mm/pmb.c 120 */;
	pgprot_t cocci_id/* arch/sh/mm/pmb.c 117 */;
}
