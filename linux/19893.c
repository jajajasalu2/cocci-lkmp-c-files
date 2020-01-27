cocci_test_suite() {
	u32 **cocci_id/* arch/mips/mm/tlbex.c 996 */;
	unsigned long cocci_id/* arch/mips/mm/tlbex.c 947 */;
	long cocci_id/* arch/mips/mm/tlbex.c 896 */;
	enum vmalloc64_mode cocci_id/* arch/mips/mm/tlbex.c 894 */;
	int __maybe_unused cocci_id/* arch/mips/mm/tlbex.c 86 */;
	struct tlb_reg_save cocci_id/* arch/mips/mm/tlbex.c 72 */[NR_CPUS];
	enum tlb_write_entry cocci_id/* arch/mips/mm/tlbex.c 702 */;
	struct tlb_reg_save {
		unsigned long a;
		unsigned long b;
	}____cacheline_aligned_in_smp cocci_id/* arch/mips/mm/tlbex.c 67 */;
	struct work_registers {
		int r1;
		int r2;
		int r3;
	} cocci_id/* arch/mips/mm/tlbex.c 61 */;
	void cocci_id/* arch/mips/mm/tlbex.c 58 */(void);
	void (*cocci_id/* arch/mips/mm/tlbex.c 502 */)(u32 **);
	void __maybe_unused cocci_id/* arch/mips/mm/tlbex.c 480 */;
	u32 cocci_id/* arch/mips/mm/tlbex.c 456 */[64];
	int __init cocci_id/* arch/mips/mm/tlbex.c 43 */;
	struct tlb_reg_save cocci_id/* arch/mips/mm/tlbex.c 374 */;
	struct work_registers cocci_id/* arch/mips/mm/tlbex.c 355 */;
	enum vmalloc64_mode{not_refill, refill_scratch, refill_noscratch,} cocci_id/* arch/mips/mm/tlbex.c 353 */;
	unsigned int cocci_id/* arch/mips/mm/tlbex.c 336 */;
	int cocci_id/* arch/mips/mm/tlbex.c 333 */;
	void cocci_id/* arch/mips/mm/tlbex.c 333 */;
	struct uasm_reloc cocci_id/* arch/mips/mm/tlbex.c 315 */[128];
	struct uasm_label cocci_id/* arch/mips/mm/tlbex.c 314 */[128];
	u32 cocci_id/* arch/mips/mm/tlbex.c 311 */[128];
	const u32 *cocci_id/* arch/mips/mm/tlbex.c 260 */;
	u32 cocci_id/* arch/mips/mm/tlbex.c 259 */;
	const char *cocci_id/* arch/mips/mm/tlbex.c 257 */;
	const void *cocci_id/* arch/mips/mm/tlbex.c 257 */;
	unsigned cocci_id/* arch/mips/mm/tlbex.c 2566 */;
	ulong cocci_id/* arch/mips/mm/tlbex.c 2107 */;
	bool cocci_id/* arch/mips/mm/tlbex.c 2020 */;
	char *cocci_id/* arch/mips/mm/tlbex.c 1935 */;
	enum label_id cocci_id/* arch/mips/mm/tlbex.c 1848 */;
	enum label_id{label_second_part=1, label_leave, label_vmalloc, label_vmalloc_done, label_tlbw_hazard_0, label_split=label_tlbw_hazard_0 + 8, label_tlbl_goaround1, label_tlbl_goaround2, label_nopage_tlbl, label_nopage_tlbs, label_nopage_tlbm, label_smp_pgtable_change, label_r3000_write_probe_fail, label_large_segbits_fault,

#ifdef CONFIG_MIPS_HUGE_TLB_SUPPORT
 label_tlb_huge_update,

#endif
} cocci_id/* arch/mips/mm/tlbex.c 161 */;
	const int __maybe_unused cocci_id/* arch/mips/mm/tlbex.c 1587 */;
	void *cocci_id/* arch/mips/mm/tlbex.c 1578 */;
	struct uasm_reloc *cocci_id/* arch/mips/mm/tlbex.c 1529 */;
	struct uasm_label *cocci_id/* arch/mips/mm/tlbex.c 1528 */;
	u32 *cocci_id/* arch/mips/mm/tlbex.c 1527 */;
	const enum label_id cocci_id/* arch/mips/mm/tlbex.c 1408 */;
	const int cocci_id/* arch/mips/mm/tlbex.c 1113 */;
	struct uasm_reloc **cocci_id/* arch/mips/mm/tlbex.c 1107 */;
	struct uasm_label **cocci_id/* arch/mips/mm/tlbex.c 1106 */;
	struct mips_huge_tlb_info cocci_id/* arch/mips/mm/tlbex.c 1105 */;
	struct mips_huge_tlb_info {
		int huge_pte;
		int restore_scratch;
		bool need_reload_pte;
	} cocci_id/* arch/mips/mm/tlbex.c 1099 */;
}
