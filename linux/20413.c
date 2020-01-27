cocci_test_suite() {
	const struct cpuid_bit *cocci_id/* arch/x86/kernel/cpu/scattered.c 51 */;
	u32 cocci_id/* arch/x86/kernel/cpu/scattered.c 50 */[4];
	u32 cocci_id/* arch/x86/kernel/cpu/scattered.c 49 */;
	struct cpuinfo_x86 *cocci_id/* arch/x86/kernel/cpu/scattered.c 47 */;
	void cocci_id/* arch/x86/kernel/cpu/scattered.c 47 */;
	const struct cpuid_bit cocci_id/* arch/x86/kernel/cpu/scattered.c 26 */[];
	struct cpuid_bit {
		u16 feature;
		u8 reg;
		u8 bit;
		u32 level;
		u32 sub_leaf;
	} cocci_id/* arch/x86/kernel/cpu/scattered.c 13 */;
}
