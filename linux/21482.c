cocci_test_suite() {
	struct insn_emulation *cocci_id/* arch/arm64/kernel/armv8_deprecated.c 96 */;
	void *cocci_id/* arch/arm64/kernel/armv8_deprecated.c 94 */;
	struct undef_hook *cocci_id/* arch/arm64/kernel/armv8_deprecated.c 65 */;
	struct insn_emulation_ops *cocci_id/* arch/arm64/kernel/armv8_deprecated.c 63 */;
	int __init cocci_id/* arch/arm64/kernel/armv8_deprecated.c 623 */;
	void cocci_id/* arch/arm64/kernel/armv8_deprecated.c 623 */;
	u32 cocci_id/* arch/arm64/kernel/armv8_deprecated.c 580 */;
	struct pt_regs *cocci_id/* arch/arm64/kernel/armv8_deprecated.c 580 */;
	int cocci_id/* arch/arm64/kernel/armv8_deprecated.c 580 */;
	unsigned long cocci_id/* arch/arm64/kernel/armv8_deprecated.c 575 */;
	char *cocci_id/* arch/arm64/kernel/armv8_deprecated.c 561 */;
	struct insn_emulation_ops cocci_id/* arch/arm64/kernel/armv8_deprecated.c 540 */;
	struct undef_hook cocci_id/* arch/arm64/kernel/armv8_deprecated.c 522 */[];
	bool cocci_id/* arch/arm64/kernel/armv8_deprecated.c 513 */;
	struct insn_emulation {
		struct list_head node;
		struct insn_emulation_ops *ops;
		int current_mode;
		int min;
		int max;
	} cocci_id/* arch/arm64/kernel/armv8_deprecated.c 51 */;
	struct insn_emulation_ops {
		const char *name;
		enum legacy_insn_status status;
		struct undef_hook *hooks;
		int (*set_hw_mode)(bool enable);
	} cocci_id/* arch/arm64/kernel/armv8_deprecated.c 44 */;
	enum legacy_insn_status{INSN_DEPRECATED, INSN_OBSOLETE,} cocci_id/* arch/arm64/kernel/armv8_deprecated.c 39 */;
	const void __user *cocci_id/* arch/arm64/kernel/armv8_deprecated.c 374 */;
	unsigned int __kprobes cocci_id/* arch/arm64/kernel/armv8_deprecated.c 353 */;
	enum insn_emulation_mode{INSN_UNDEF, INSN_EMULATE, INSN_HW,} cocci_id/* arch/arm64/kernel/armv8_deprecated.c 33 */;
	unsigned int *cocci_id/* arch/arm64/kernel/armv8_deprecated.c 319 */;
	unsigned int cocci_id/* arch/arm64/kernel/armv8_deprecated.c 319 */;
	enum insn_emulation_mode cocci_id/* arch/arm64/kernel/armv8_deprecated.c 211 */;
	loff_t *cocci_id/* arch/arm64/kernel/armv8_deprecated.c 207 */;
	size_t *cocci_id/* arch/arm64/kernel/armv8_deprecated.c 206 */;
	void __user *cocci_id/* arch/arm64/kernel/armv8_deprecated.c 206 */;
	struct ctl_table *cocci_id/* arch/arm64/kernel/armv8_deprecated.c 205 */;
	void __init cocci_id/* arch/arm64/kernel/armv8_deprecated.c 171 */;
}
