cocci_test_suite() {
	void cocci_id/* arch/x86/kernel/early-quirks.c 797 */;
	int __init cocci_id/* arch/x86/kernel/early-quirks.c 737 */;
	struct acpi_table_header *cocci_id/* arch/x86/kernel/early-quirks.c 73 */;
	void __init cocci_id/* arch/x86/kernel/early-quirks.c 724 */(int bus);
	struct chipset cocci_id/* arch/x86/kernel/early-quirks.c 684 */[]__initdata;
	struct chipset {
		u32 vendor;
		u32 device;
		u32 class;
		u32 class_mask;
		u32 flags;
		void (*f)(int num, int slot, int func);
	} cocci_id/* arch/x86/kernel/early-quirks.c 675 */;
	u64 cocci_id/* arch/x86/kernel/early-quirks.c 623 */;
	u16 cocci_id/* arch/x86/kernel/early-quirks.c 622 */;
	void __iomem *cocci_id/* arch/x86/kernel/early-quirks.c 621 */;
	int cocci_id/* arch/x86/kernel/early-quirks.c 619 */;
	void __init cocci_id/* arch/x86/kernel/early-quirks.c 619 */;
	typeof(early_ops) cocci_id/* arch/x86/kernel/early-quirks.c 598 */;
	kernel_ulong_t cocci_id/* arch/x86/kernel/early-quirks.c 593 */;
	const struct intel_early_ops *cocci_id/* arch/x86/kernel/early-quirks.c 586 */;
	void __init cocci_id/* arch/x86/kernel/early-quirks.c 558 */;
	struct resource cocci_id/* arch/x86/kernel/early-quirks.c 555 */;
	const struct pci_device_id cocci_id/* arch/x86/kernel/early-quirks.c 518 */[]__initconst;
	const struct intel_early_ops cocci_id/* arch/x86/kernel/early-quirks.c 508 */;
	struct intel_early_ops {
		resource_size_t (*stolen_size)(int num, int slot, int func);
		resource_size_t (*stolen_base)(int num, int slot, int func,
					       resource_size_t size);
	} cocci_id/* arch/x86/kernel/early-quirks.c 462 */;
	resource_size_t __init cocci_id/* arch/x86/kernel/early-quirks.c 425 */;
	resource_size_t cocci_id/* arch/x86/kernel/early-quirks.c 342 */;
	u8 cocci_id/* arch/x86/kernel/early-quirks.c 137 */;
	u32 cocci_id/* arch/x86/kernel/early-quirks.c 136 */;
	u32 __init cocci_id/* arch/x86/kernel/early-quirks.c 116 */;
}
