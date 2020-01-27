cocci_test_suite() {
	struct arch_hibernate_hdr_invariants *cocci_id/* arch/arm64/kernel/hibernate.c 95 */;
	struct arch_hibernate_hdr {
		struct arch_hibernate_hdr_invariants invariants;
		phys_addr_t ttbr1_el1;
		void (*reenter_kernel)(void);
		phys_addr_t __hyp_stub_vectors;
		u64 sleep_cpu_mpidr;
	} cocci_id/* arch/arm64/kernel/hibernate.c 79 */;
	struct arch_hibernate_hdr_invariants {
		char uts_version[__NEW_UTS_LEN + 1];
	} cocci_id/* arch/arm64/kernel/hibernate.c 74 */;
	char cocci_id/* arch/arm64/kernel/hibernate.c 61 */[];
	void __noreturn (*cocci_id/* arch/arm64/kernel/hibernate.c 492 */)(phys_addr_t,
									   phys_addr_t,
									   void *,
									   void *,
									   phys_addr_t,
									   phys_addr_t);
	phys_addr_t cocci_id/* arch/arm64/kernel/hibernate.c 491 */;
	pgd_t *cocci_id/* arch/arm64/kernel/hibernate.c 460 */;
	pud_t cocci_id/* arch/arm64/kernel/hibernate.c 443 */;
	pmd_t cocci_id/* arch/arm64/kernel/hibernate.c 408 */;
	pmd_t *cocci_id/* arch/arm64/kernel/hibernate.c 393 */;
	pud_t *cocci_id/* arch/arm64/kernel/hibernate.c 390 */;
	pte_t cocci_id/* arch/arm64/kernel/hibernate.c 344 */;
	pte_t *cocci_id/* arch/arm64/kernel/hibernate.c 342 */;
	unsigned long cocci_id/* arch/arm64/kernel/hibernate.c 342 */;
	void cocci_id/* arch/arm64/kernel/hibernate.c 342 */;
	struct sleep_stack_data cocci_id/* arch/arm64/kernel/hibernate.c 287 */;
	gfp_t cocci_id/* arch/arm64/kernel/hibernate.c 201 */;
	void *(*cocci_id/* arch/arm64/kernel/hibernate.c 200 */)(gfp_t mask);
	phys_addr_t *cocci_id/* arch/arm64/kernel/hibernate.c 199 */;
	size_t cocci_id/* arch/arm64/kernel/hibernate.c 197 */;
	struct arch_hibernate_hdr *cocci_id/* arch/arm64/kernel/hibernate.c 153 */;
	struct arch_hibernate_hdr_invariants cocci_id/* arch/arm64/kernel/hibernate.c 152 */;
	void *cocci_id/* arch/arm64/kernel/hibernate.c 149 */;
	int cocci_id/* arch/arm64/kernel/hibernate.c 149 */;
	unsigned int cocci_id/* arch/arm64/kernel/hibernate.c 119 */;
	void notrace cocci_id/* arch/arm64/kernel/hibernate.c 115 */;
}
