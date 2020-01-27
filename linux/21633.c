cocci_test_suite() {
	struct pt_regs *cocci_id/* arch/unicore32/mm/fault.c 89 */;
	unsigned int cocci_id/* arch/unicore32/mm/fault.c 89 */;
	struct mm_struct *cocci_id/* arch/unicore32/mm/fault.c 88 */;
	unsigned long cocci_id/* arch/unicore32/mm/fault.c 88 */;
	void cocci_id/* arch/unicore32/mm/fault.c 88 */;
	pte_t *cocci_id/* arch/unicore32/mm/fault.c 51 */;
	const struct fsr_info *cocci_id/* arch/unicore32/mm/fault.c 459 */;
	const char *cocci_id/* arch/unicore32/mm/fault.c 442 */;
	int (*cocci_id/* arch/unicore32/mm/fault.c 441 */)(unsigned long,
							   unsigned int,
							   struct pt_regs *);
	void __init cocci_id/* arch/unicore32/mm/fault.c 440 */;
	struct fsr_info {
		int (*fn)(unsigned long addr, unsigned int fsr,
			  struct pt_regs *regs);
		int sig;
		int code;
		const char *name;
	} cocci_id/* arch/unicore32/mm/fault.c 397 */[];
	pud_t *cocci_id/* arch/unicore32/mm/fault.c 356 */;
	pmd_t *cocci_id/* arch/unicore32/mm/fault.c 340 */;
	pgd_t *cocci_id/* arch/unicore32/mm/fault.c 339 */;
	struct vm_area_struct *cocci_id/* arch/unicore32/mm/fault.c 165 */;
	struct task_struct *cocci_id/* arch/unicore32/mm/fault.c 163 */;
	vm_fault_t cocci_id/* arch/unicore32/mm/fault.c 162 */;
	bool cocci_id/* arch/unicore32/mm/fault.c 150 */;
	void __user *cocci_id/* arch/unicore32/mm/fault.c 124 */;
	int cocci_id/* arch/unicore32/mm/fault.c 117 */;
}
