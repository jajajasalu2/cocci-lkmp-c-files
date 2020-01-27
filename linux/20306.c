cocci_test_suite() {
	struct sim_dev_reg *cocci_id/* arch/x86/pci/ce4100.c 79 */;
	struct sim_reg_op {
		void (*init)(struct sim_dev_reg *reg);
		void (*read)(struct sim_dev_reg *reg, u32 value);
		void (*write)(struct sim_dev_reg *reg, u32 value);
	} cocci_id/* arch/x86/pci/ce4100.c 38 */;
	int __init cocci_id/* arch/x86/pci/ce4100.c 318 */;
	void cocci_id/* arch/x86/pci/ce4100.c 318 */;
	const struct pci_raw_ops cocci_id/* arch/x86/pci/ce4100.c 313 */;
	struct sim_dev_reg {
		int dev_func;
		int reg;
		void (*init)(struct sim_dev_reg *reg);
		void (*read)(struct sim_dev_reg *reg, u32 *value);
		void (*write)(struct sim_dev_reg *reg, u32 value);
		struct sim_reg sim_reg;
	} cocci_id/* arch/x86/pci/ce4100.c 29 */;
	unsigned long cocci_id/* arch/x86/pci/ce4100.c 245 */;
	struct sim_reg {
		u32 value;
		u32 mask;
	} cocci_id/* arch/x86/pci/ce4100.c 24 */;
	u32 cocci_id/* arch/x86/pci/ce4100.c 177 */;
	u32 *cocci_id/* arch/x86/pci/ce4100.c 175 */;
	unsigned int cocci_id/* arch/x86/pci/ce4100.c 175 */;
	int cocci_id/* arch/x86/pci/ce4100.c 175 */;
	uint32_t cocci_id/* arch/x86/pci/ce4100.c 168 */;
	void __init cocci_id/* arch/x86/pci/ce4100.c 156 */;
	struct sim_dev_reg cocci_id/* arch/x86/pci/ce4100.c 103 */[];
}
