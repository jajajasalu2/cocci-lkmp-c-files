cocci_test_suite() {
	const struct pci_device_id *cocci_id/* drivers/platform/x86/pmc_atom.c 529 */;
	struct pci_dev *cocci_id/* drivers/platform/x86/pmc_atom.c 528 */;
	int __init cocci_id/* drivers/platform/x86/pmc_atom.c 526 */;
	void cocci_id/* drivers/platform/x86/pmc_atom.c 526 */;
	const struct pci_device_id cocci_id/* drivers/platform/x86/pmc_atom.c 520 */[];
	const struct pmc_clk cocci_id/* drivers/platform/x86/pmc_atom.c 51 */[];
	u32 cocci_id/* drivers/platform/x86/pmc_atom.c 49 */;
	struct pmc_dev cocci_id/* drivers/platform/x86/pmc_atom.c 48 */;
	struct pmc_data *cocci_id/* drivers/platform/x86/pmc_atom.c 477 */;
	const struct dmi_system_id *cocci_id/* drivers/platform/x86/pmc_atom.c 448 */;
	struct pmc_clk_data *cocci_id/* drivers/platform/x86/pmc_atom.c 447 */;
	struct platform_device *cocci_id/* drivers/platform/x86/pmc_atom.c 446 */;
	const struct pmc_data *cocci_id/* drivers/platform/x86/pmc_atom.c 444 */;
	void __iomem *cocci_id/* drivers/platform/x86/pmc_atom.c 443 */;
	struct pmc_dev {
		u32 base_addr;
		void __iomem *regmap;
		const struct pmc_reg_map *map;
#ifdef CONFIG_DEBUG_FS
		struct dentry *dbgfs_dir;
#endif
		bool init;
	} cocci_id/* drivers/platform/x86/pmc_atom.c 38 */;
	const struct dmi_system_id cocci_id/* drivers/platform/x86/pmc_atom.c 369 */[];
	struct dentry *cocci_id/* drivers/platform/x86/pmc_atom.c 346 */;
	struct pmc_data {
		const struct pmc_reg_map *map;
		const struct pmc_clk *clks;
	} cocci_id/* drivers/platform/x86/pmc_atom.c 33 */;
	u64 cocci_id/* drivers/platform/x86/pmc_atom.c 326 */;
	const struct pmc_reg_map *cocci_id/* drivers/platform/x86/pmc_atom.c 286 */;
	void *cocci_id/* drivers/platform/x86/pmc_atom.c 283 */;
	const struct pmc_bit_map *cocci_id/* drivers/platform/x86/pmc_atom.c 269 */;
	struct seq_file *cocci_id/* drivers/platform/x86/pmc_atom.c 268 */;
	struct pmc_reg_map {
		const struct pmc_bit_map *d3_sts_0;
		const struct pmc_bit_map *d3_sts_1;
		const struct pmc_bit_map *func_dis;
		const struct pmc_bit_map *func_dis_2;
		const struct pmc_bit_map *pss;
	} cocci_id/* drivers/platform/x86/pmc_atom.c 25 */;
	u16 cocci_id/* drivers/platform/x86/pmc_atom.c 239 */;
	struct pmc_dev *cocci_id/* drivers/platform/x86/pmc_atom.c 215 */;
	u32 *cocci_id/* drivers/platform/x86/pmc_atom.c 213 */;
	int cocci_id/* drivers/platform/x86/pmc_atom.c 213 */;
	struct pmc_bit_map {
		const char *name;
		u32 bit_mask;
	} cocci_id/* drivers/platform/x86/pmc_atom.c 20 */;
	const struct pmc_data cocci_id/* drivers/platform/x86/pmc_atom.c 193 */;
	const struct pmc_reg_map cocci_id/* drivers/platform/x86/pmc_atom.c 177 */;
	const struct pmc_bit_map cocci_id/* drivers/platform/x86/pmc_atom.c 132 */[];
	struct pmc_bit_map cocci_id/* drivers/platform/x86/pmc_atom.c 110 */[];
}
