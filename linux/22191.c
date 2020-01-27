cocci_test_suite() {
	enum ttu_flags cocci_id/* mm/memory-failure.c 954 */;
	struct page **cocci_id/* mm/memory-failure.c 952 */;
	bool cocci_id/* mm/memory-failure.c 951 */;
	enum mf_result cocci_id/* mm/memory-failure.c 875 */;
	enum mf_action_page_type cocci_id/* mm/memory-failure.c 874 */;
	void cocci_id/* mm/memory-failure.c 874 */;
	dev_t cocci_id/* mm/memory-failure.c 84 */;
	struct page_state {
		unsigned long mask;
		unsigned long res;
		enum mf_action_page_type type;
		int (*action)(struct page *p, unsigned long pfn);
	} cocci_id/* mm/memory-failure.c 821 */[];
	u64 cocci_id/* mm/memory-failure.c 73 */;
	u32 cocci_id/* mm/memory-failure.c 71 */;
	atomic_long_t cocci_id/* mm/memory-failure.c 66 */;
	const char *constcocci_id/* mm/memory-failure.c 523 */[];
	const char *cocci_id/* mm/memory-failure.c 516 */[];
	struct address_space *cocci_id/* mm/memory-failure.c 474 */;
	struct anon_vma_chain *cocci_id/* mm/memory-failure.c 448 */;
	pgoff_t cocci_id/* mm/memory-failure.c 439 */;
	struct anon_vma *cocci_id/* mm/memory-failure.c 438 */;
	struct to_kill cocci_id/* mm/memory-failure.c 313 */;
	struct to_kill *cocci_id/* mm/memory-failure.c 311 */;
	struct list_head *cocci_id/* mm/memory-failure.c 309 */;
	struct vm_area_struct *cocci_id/* mm/memory-failure.c 308 */;
	struct task_struct *cocci_id/* mm/memory-failure.c 307 */;
	pte_t *cocci_id/* mm/memory-failure.c 272 */;
	pmd_t *cocci_id/* mm/memory-failure.c 271 */;
	pud_t *cocci_id/* mm/memory-failure.c 270 */;
	p4d_t *cocci_id/* mm/memory-failure.c 269 */;
	pgd_t *cocci_id/* mm/memory-failure.c 268 */;
	void __user *cocci_id/* mm/memory-failure.c 219 */;
	short cocci_id/* mm/memory-failure.c 212 */;
	struct to_kill {
		struct list_head nd;
		struct task_struct *tsk;
		unsigned long addr;
		short size_shift;
	} cocci_id/* mm/memory-failure.c 197 */;
	struct page *cocci_id/* mm/memory-failure.c 1612 */;
	unsigned long cocci_id/* mm/memory-failure.c 1612 */;
	int cocci_id/* mm/memory-failure.c 1612 */;
	struct memory_failure_cpu *cocci_id/* mm/memory-failure.c 1487 */;
	int __init cocci_id/* mm/memory-failure.c 1485 */;
	struct work_struct *cocci_id/* mm/memory-failure.c 1464 */;
	struct memory_failure_entry cocci_id/* mm/memory-failure.c 1447 */;
	struct memory_failure_cpu {
		DECLARE_KFIFO(fifo,struct memory_failure_entry,
			      MEMORY_FAILURE_FIFO_SIZE);
		spinlock_t lock;
		struct work_struct work;
	} cocci_id/* mm/memory-failure.c 1418 */;
	struct memory_failure_entry {
		unsigned long pfn;
		int flags;
	} cocci_id/* mm/memory-failure.c 1413 */;
	struct dev_pagemap *cocci_id/* mm/memory-failure.c 1239 */;
	dax_entry_t cocci_id/* mm/memory-failure.c 1152 */;
	loff_t cocci_id/* mm/memory-failure.c 1151 */;
	const bool cocci_id/* mm/memory-failure.c 1146 */;
	struct page_state *cocci_id/* mm/memory-failure.c 1050 */;
	__typeof__(struct memory_failure_cpu) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
