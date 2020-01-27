cocci_test_suite() {
	int cocci_id/* arch/arm64/mm/fault.c 843 */;
	int (*cocci_id/* arch/arm64/mm/fault.c 782 */)(unsigned long,
						       unsigned int,
						       struct pt_regs *);
	void __init cocci_id/* arch/arm64/mm/fault.c 781 */;
	struct fault_info __refdata cocci_id/* arch/arm64/mm/fault.c 770 */[];
	int __init cocci_id/* arch/arm64/mm/fault.c 762 */(unsigned long addr,
							   unsigned int esr,
							   struct pt_regs *regs);
	struct fault_info cocci_id/* arch/arm64/mm/fault.c 52 */[];
	const struct fault_info cocci_id/* arch/arm64/mm/fault.c 51 */[];
	int __kprobes cocci_id/* arch/arm64/mm/fault.c 442 */;
	struct fault_info {
		int (*fn)(unsigned long addr, unsigned int esr,
			  struct pt_regs *regs);
		int sig;
		int code;
		const char *name;
	} cocci_id/* arch/arm64/mm/fault.c 43 */;
	bool cocci_id/* arch/arm64/mm/fault.c 428 */;
	struct vm_area_struct *cocci_id/* arch/arm64/mm/fault.c 403 */;
	vm_fault_t cocci_id/* arch/arm64/mm/fault.c 400 */;
	struct mm_struct *cocci_id/* arch/arm64/mm/fault.c 400 */;
	void __user *cocci_id/* arch/arm64/mm/fault.c 390 */;
	const struct fault_info *cocci_id/* arch/arm64/mm/fault.c 387 */;
	const char *cocci_id/* arch/arm64/mm/fault.c 294 */;
	struct pt_regs *cocci_id/* arch/arm64/mm/fault.c 292 */;
	unsigned long cocci_id/* arch/arm64/mm/fault.c 291 */;
	unsigned int cocci_id/* arch/arm64/mm/fault.c 291 */;
	void cocci_id/* arch/arm64/mm/fault.c 291 */;
	u64 cocci_id/* arch/arm64/mm/fault.c 248 */;
	bool __kprobes cocci_id/* arch/arm64/mm/fault.c 243 */;
	pteval_t cocci_id/* arch/arm64/mm/fault.c 190 */;
	pte_t cocci_id/* arch/arm64/mm/fault.c 188 */;
	pte_t *cocci_id/* arch/arm64/mm/fault.c 187 */;
	pmd_t *cocci_id/* arch/arm64/mm/fault.c 149 */;
	pud_t *cocci_id/* arch/arm64/mm/fault.c 148 */;
	pgd_t cocci_id/* arch/arm64/mm/fault.c 121 */;
	pgd_t *cocci_id/* arch/arm64/mm/fault.c 120 */;
	__typeof__(int) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 438 */;
}
