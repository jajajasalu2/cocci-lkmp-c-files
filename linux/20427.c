cocci_test_suite() {
	struct pci_dev *cocci_id/* arch/x86/kernel/cpu/mtrr/mtrr.c 92 */;
	int __init cocci_id/* arch/x86/kernel/cpu/mtrr/mtrr.c 867 */;
	void cocci_id/* arch/x86/kernel/cpu/mtrr/mtrr.c 80 */(unsigned int reg,
							      unsigned long base,
							      unsigned long size,
							      mtrr_type type);
	const struct mtrr_ops *cocci_id/* arch/x86/kernel/cpu/mtrr/mtrr.c 78 */;
	const struct mtrr_ops *cocci_id/* arch/x86/kernel/cpu/mtrr/mtrr.c 76 */[X86_VENDOR_NUM];
	u64 cocci_id/* arch/x86/kernel/cpu/mtrr/mtrr.c 73 */;
	unsigned int cocci_id/* arch/x86/kernel/cpu/mtrr/mtrr.c 70 */[MTRR_MAX_VAR_RANGES];
	u32 cocci_id/* arch/x86/kernel/cpu/mtrr/mtrr.c 691 */;
	int __initdata cocci_id/* arch/x86/kernel/cpu/mtrr/mtrr.c 679 */;
	struct syscore_ops cocci_id/* arch/x86/kernel/cpu/mtrr/mtrr.c 674 */;
	struct mtrr_value cocci_id/* arch/x86/kernel/cpu/mtrr/mtrr.c 645 */[MTRR_MAX_VAR_RANGES];
	struct mtrr_value {
		mtrr_type ltype;
		unsigned long lbase;
		unsigned long lsize;
	} cocci_id/* arch/x86/kernel/cpu/mtrr/mtrr.c 639 */;
	bool cocci_id/* arch/x86/kernel/cpu/mtrr/mtrr.c 63 */;
	void __init cocci_id/* arch/x86/kernel/cpu/mtrr/mtrr.c 627 */;
	void cocci_id/* arch/x86/kernel/cpu/mtrr/mtrr.c 593 */;
	void *cocci_id/* arch/x86/kernel/cpu/mtrr/mtrr.c 577 */;
	unsigned long cocci_id/* arch/x86/kernel/cpu/mtrr/mtrr.c 567 */;
	int cocci_id/* arch/x86/kernel/cpu/mtrr/mtrr.c 567 */;
	unsigned int cocci_id/* arch/x86/kernel/cpu/mtrr/mtrr.c 453 */;
	mtrr_type cocci_id/* arch/x86/kernel/cpu/mtrr/mtrr.c 306 */;
	struct set_mtrr_data cocci_id/* arch/x86/kernel/cpu/mtrr/mtrr.c 232 */;
	struct set_mtrr_data *cocci_id/* arch/x86/kernel/cpu/mtrr/mtrr.c 163 */;
	struct set_mtrr_data {
		unsigned long smp_base;
		unsigned long smp_size;
		unsigned int smp_reg;
		mtrr_type smp_type;
	} cocci_id/* arch/x86/kernel/cpu/mtrr/mtrr.c 147 */;
}
