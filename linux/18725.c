cocci_test_suite() {
	void __init cocci_id/* arch/arm/mm/fault.c 588 */;
	int __init cocci_id/* arch/arm/mm/fault.c 578 */;
	const struct fsr_info *cocci_id/* arch/arm/mm/fault.c 531 */;
	const char *cocci_id/* arch/arm/mm/fault.c 514 */;
	int (*cocci_id/* arch/arm/mm/fault.c 513 */)(unsigned long,
						     unsigned int,
						     struct pt_regs *);
	void __init cocci_id/* arch/arm/mm/fault.c 512 */;
	struct fsr_info {
		int (*fn)(unsigned long addr, unsigned int fsr,
			  struct pt_regs *regs);
		int sig;
		int code;
		const char *name;
	} cocci_id/* arch/arm/mm/fault.c 498 */;
	pte_t *cocci_id/* arch/arm/mm/fault.c 48 */;
	long long cocci_id/* arch/arm/mm/fault.c 43 */;
	pmd_t *cocci_id/* arch/arm/mm/fault.c 412 */;
	pud_t *cocci_id/* arch/arm/mm/fault.c 411 */;
	pgd_t *cocci_id/* arch/arm/mm/fault.c 410 */;
	int __kprobes cocci_id/* arch/arm/mm/fault.c 237 */;
	vm_fault_t cocci_id/* arch/arm/mm/fault.c 207 */;
	struct vm_area_struct *cocci_id/* arch/arm/mm/fault.c 206 */;
	struct task_struct *cocci_id/* arch/arm/mm/fault.c 204 */;
	vm_fault_t __kprobes cocci_id/* arch/arm/mm/fault.c 202 */;
	bool cocci_id/* arch/arm/mm/fault.c 190 */;
	void __user *cocci_id/* arch/arm/mm/fault.c 163 */;
	int cocci_id/* arch/arm/mm/fault.c 136 */;
	struct pt_regs *cocci_id/* arch/arm/mm/fault.c 107 */;
	struct mm_struct *cocci_id/* arch/arm/mm/fault.c 106 */;
	unsigned long cocci_id/* arch/arm/mm/fault.c 106 */;
	unsigned int cocci_id/* arch/arm/mm/fault.c 106 */;
	void cocci_id/* arch/arm/mm/fault.c 105 */;
}
