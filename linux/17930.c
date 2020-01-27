cocci_test_suite() {
	struct chmc {
		struct list_head list;
		int portid;
		struct chmc_obp_mem_layout layout_prop;
		int layout_size;
		void __iomem *regs;
		u64 timing_control1;
		u64 timing_control2;
		u64 timing_control3;
		u64 timing_control4;
		u64 memaddr_control;
		struct chmc_bank_info logical_banks[CHMCTRL_NBANKS];
	} cocci_id/* arch/sparc/kernel/chmc.c 88 */;
	void __exit cocci_id/* arch/sparc/kernel/chmc.c 855 */;
	int __init cocci_id/* arch/sparc/kernel/chmc.c 827 */;
	bool cocci_id/* arch/sparc/kernel/chmc.c 820 */;
	struct platform_driver cocci_id/* arch/sparc/kernel/chmc.c 811 */;
	const struct of_device_id cocci_id/* arch/sparc/kernel/chmc.c 803 */[];
	struct platform_device *cocci_id/* arch/sparc/kernel/chmc.c 776 */;
	struct chmc *cocci_id/* arch/sparc/kernel/chmc.c 776 */;
	void cocci_id/* arch/sparc/kernel/chmc.c 776 */;
	struct chmc_bank_info {
		struct chmc *p;
		int bank_id;
		u64 raw_reg;
		int valid;
		int uk;
		int um;
		int lk;
		int lm;
		int interleave;
		unsigned long base;
		unsigned long size;
	} cocci_id/* arch/sparc/kernel/chmc.c 73 */;
	const void *cocci_id/* arch/sparc/kernel/chmc.c 697 */;
	struct device_node *cocci_id/* arch/sparc/kernel/chmc.c 695 */;
	u64 cocci_id/* arch/sparc/kernel/chmc.c 630 */;
	struct chmc_obp_mem_layout {
		char dimm_labels[CHMC_DIMMS_PER_MC][DIMM_LABEL_SZ];
		char symmetric;
		struct chmc_obp_map map[2];
	} cocci_id/* arch/sparc/kernel/chmc.c 56 */;
	struct chmc_obp_mem_layout *cocci_id/* arch/sparc/kernel/chmc.c 544 */;
	char *cocci_id/* arch/sparc/kernel/chmc.c 541 */;
	struct chmc_obp_map {
		unsigned char dimm_map[144];
		unsigned char pin_map[576];
	} cocci_id/* arch/sparc/kernel/chmc.c 49 */;
	struct chmc_bank_info *cocci_id/* arch/sparc/kernel/chmc.c 487 */;
	unsigned long cocci_id/* arch/sparc/kernel/chmc.c 487 */;
	int cocci_id/* arch/sparc/kernel/chmc.c 487 */;
	dimm_printer_t cocci_id/* arch/sparc/kernel/chmc.c 41 */;
	const u32 *cocci_id/* arch/sparc/kernel/chmc.c 402 */;
	const struct linux_prom64_registers *cocci_id/* arch/sparc/kernel/chmc.c 383 */;
	struct jbusmc *cocci_id/* arch/sparc/kernel/chmc.c 382 */;
	struct jbusmc_dimm_group *cocci_id/* arch/sparc/kernel/chmc.c 372 */;
	struct chmc_obp_map *cocci_id/* arch/sparc/kernel/chmc.c 253 */;
	struct jbusmc_obp_mem_layout *cocci_id/* arch/sparc/kernel/chmc.c 241 */;
	char **cocci_id/* arch/sparc/kernel/chmc.c 231 */;
	int *cocci_id/* arch/sparc/kernel/chmc.c 231 */;
	void *cocci_id/* arch/sparc/kernel/chmc.c 231 */;
	struct list_head *cocci_id/* arch/sparc/kernel/chmc.c 184 */;
	struct jbusmc {
		void __iomem *regs;
		u64 mc_reg_1;
		u32 portid;
		struct jbusmc_obp_mem_layout layout;
		int layout_len;
		int num_dimm_groups;
		struct jbusmc_dimm_group dimm_groups[JB_NUM_DIMM_GROUPS];
		struct list_head list;
	} cocci_id/* arch/sparc/kernel/chmc.c 170 */;
	struct jbusmc_dimm_group {
		struct jbusmc *controller;
		int index;
		u64 base_addr;
		u64 size;
	} cocci_id/* arch/sparc/kernel/chmc.c 163 */;
	struct jbusmc_obp_mem_layout {
		char dimm_labels[JB_NUM_DIMMS][DIMM_LABEL_SZ];
		char symmetric;
		struct jbusmc_obp_map map;
		char _pad;
	} cocci_id/* arch/sparc/kernel/chmc.c 146 */;
	struct jbusmc_obp_map {
		unsigned char dimm_map[18];
		unsigned char pin_map[144];
	} cocci_id/* arch/sparc/kernel/chmc.c 141 */;
}
