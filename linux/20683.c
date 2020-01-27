cocci_test_suite() {
	long cocci_id/* arch/x86/mm/pageattr-test.c 52 */;
	struct split_state *cocci_id/* arch/x86/mm/pageattr-test.c 50 */;
	struct split_state {
		long lpg,gpg,spg,exec;
		long min_exec,max_exec;
	} cocci_id/* arch/x86/mm/pageattr-test.c 45 */;
	pte_t cocci_id/* arch/x86/mm/pageattr-test.c 40 */;
	struct task_struct *cocci_id/* arch/x86/mm/pageattr-test.c 268 */;
	void *__unusedcocci_id/* arch/x86/mm/pageattr-test.c 254 */;
	int cocci_id/* arch/x86/mm/pageattr-test.c 254 */;
	enum{NTEST=3 * 100, NPAGES=100,

#ifdef CONFIG_X86_64
 LPS=(1 << PMD_SHIFT),

#elif defined(CONFIG_X86_PAE)

	LPS=(1<<PMD_SHIFT),

#else

	LPS=(1<<22),

#endif
 GPS=(1 << 30),} cocci_id/* arch/x86/mm/pageattr-test.c 25 */;
	u64 cocci_id/* arch/x86/mm/pageattr-test.c 204 */;
	unsigned long cocci_id/* arch/x86/mm/pageattr-test.c 140 */;
	unsigned int cocci_id/* arch/x86/mm/pageattr-test.c 124 */;
	pte_t *cocci_id/* arch/x86/mm/pageattr-test.c 122 */;
	unsigned long *cocci_id/* arch/x86/mm/pageattr-test.c 121 */;
	struct split_state cocci_id/* arch/x86/mm/pageattr-test.c 120 */;
	void cocci_id/* arch/x86/mm/pageattr-test.c 118 */;
	unsigned long cocci_id/* arch/x86/mm/pageattr-test.c 115 */[NPAGES];
	struct page *cocci_id/* arch/x86/mm/pageattr-test.c 114 */[NPAGES];
	unsigned int cocci_id/* arch/x86/mm/pageattr-test.c 112 */[NTEST];
	unsigned long cocci_id/* arch/x86/mm/pageattr-test.c 111 */[NTEST];
}
