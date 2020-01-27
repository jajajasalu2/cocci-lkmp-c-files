cocci_test_suite() {
	struct kmmio_probe *cocci_id/* arch/x86/mm/kmmio.c 98 */;
	struct list_head cocci_id/* arch/x86/mm/kmmio.c 71 */[KMMIO_PAGE_TABLE_SIZE];
	struct notifier_block cocci_id/* arch/x86/mm/kmmio.c 603 */;
	unsigned long *cocci_id/* arch/x86/mm/kmmio.c 588 */;
	struct die_args *cocci_id/* arch/x86/mm/kmmio.c 587 */;
	struct notifier_block *cocci_id/* arch/x86/mm/kmmio.c 585 */;
	void *cocci_id/* arch/x86/mm/kmmio.c 585 */;
	struct kmmio_context {
		struct kmmio_fault_page *fpage;
		struct kmmio_probe *probe;
		unsigned long saved_flags;
		unsigned long addr;
		int active;
	} cocci_id/* arch/x86/mm/kmmio.c 57 */;
	struct kmmio_delayed_release {
		struct rcu_head rcu;
		struct kmmio_fault_page *release_list;
	} cocci_id/* arch/x86/mm/kmmio.c 52 */;
	struct kmmio_delayed_release cocci_id/* arch/x86/mm/kmmio.c 481 */;
	struct kmmio_delayed_release *cocci_id/* arch/x86/mm/kmmio.c 479 */;
	struct rcu_head *cocci_id/* arch/x86/mm/kmmio.c 477 */;
	const unsigned long cocci_id/* arch/x86/mm/kmmio.c 443 */;
	struct kmmio_fault_page **cocci_id/* arch/x86/mm/kmmio.c 410 */;
	struct kmmio_fault_page *cocci_id/* arch/x86/mm/kmmio.c 381 */;
	unsigned long cocci_id/* arch/x86/mm/kmmio.c 379 */;
	int cocci_id/* arch/x86/mm/kmmio.c 379 */;
	struct kmmio_fault_page {
		struct list_head list;
		struct kmmio_fault_page *release_next;
		unsigned long addr;
		pteval_t old_presence;
		bool armed;
		int count;
		bool scheduled_for_release;
	} cocci_id/* arch/x86/mm/kmmio.c 34 */;
	struct kmmio_context *cocci_id/* arch/x86/mm/kmmio.c 232 */;
	struct pt_regs *cocci_id/* arch/x86/mm/kmmio.c 230 */;
	pmd_t *cocci_id/* arch/x86/mm/kmmio.c 166 */;
	pte_t *cocci_id/* arch/x86/mm/kmmio.c 157 */;
	unsigned int cocci_id/* arch/x86/mm/kmmio.c 156 */;
	bool cocci_id/* arch/x86/mm/kmmio.c 154 */;
	pteval_t cocci_id/* arch/x86/mm/kmmio.c 143 */;
	pteval_t *cocci_id/* arch/x86/mm/kmmio.c 141 */;
	pmdval_t cocci_id/* arch/x86/mm/kmmio.c 130 */;
	pmd_t cocci_id/* arch/x86/mm/kmmio.c 129 */;
	pmdval_t *cocci_id/* arch/x86/mm/kmmio.c 127 */;
	void cocci_id/* arch/x86/mm/kmmio.c 127 */;
	struct list_head *cocci_id/* arch/x86/mm/kmmio.c 111 */;
	__typeof__(struct kmmio_context) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
