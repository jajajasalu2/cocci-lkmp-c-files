cocci_test_suite() {
	u32 cocci_id/* drivers/memory/emif.c 82 */;
	struct emif_regs *cocci_id/* drivers/memory/emif.c 80 */;
	struct seq_file *cocci_id/* drivers/memory/emif.c 79 */;
	unsigned long cocci_id/* drivers/memory/emif.c 74 */;
	spinlock_t cocci_id/* drivers/memory/emif.c 73 */;
	u8 cocci_id/* drivers/memory/emif.c 673 */;
	const struct lpddr2_timings *cocci_id/* drivers/memory/emif.c 672 */;
	bool cocci_id/* drivers/memory/emif.c 600 */;
	const struct emif_custom_configs *cocci_id/* drivers/memory/emif.c 600 */;
	struct emif_data {
		u8 duplicate;
		u8 temperature_level;
		u8 lpmode;
		struct list_head node;
		unsigned long irq_state;
		void __iomem *base;
		struct device *dev;
		const struct lpddr2_addressing *addressing;
		struct emif_regs *regs_cache[EMIF_MAX_NUM_FREQUENCIES];
		struct emif_regs *curr_regs;
		struct emif_platform_data *plat_data;
		struct dentry *debugfs_root;
		struct device_node *np_ddr;
	} cocci_id/* drivers/memory/emif.c 56 */;
	void __exit cocci_id/* drivers/memory/emif.c 197 */;
	struct platform_driver cocci_id/* drivers/memory/emif.c 1921 */;
	const struct of_device_id cocci_id/* drivers/memory/emif.c 1913 */[];
	void __attribute__((unused)) cocci_id/* drivers/memory/emif.c 1898 */;
	int cocci_id/* drivers/memory/emif.c 167 */;
	struct dentry *cocci_id/* drivers/memory/emif.c 166 */;
	int __init_or_module cocci_id/* drivers/memory/emif.c 164 */;
	const struct lpddr2_min_tck *cocci_id/* drivers/memory/emif.c 1619 */;
	int __exit cocci_id/* drivers/memory/emif.c 1597 */;
	const struct file_operations cocci_id/* drivers/memory/emif.c 158 */;
	struct resource *cocci_id/* drivers/memory/emif.c 1540 */;
	struct platform_device *cocci_id/* drivers/memory/emif.c 1537 */;
	struct inode *cocci_id/* drivers/memory/emif.c 153 */;
	struct file *cocci_id/* drivers/memory/emif.c 153 */;
	struct lpddr2_timings cocci_id/* drivers/memory/emif.c 1501 */;
	struct ddr_device_info cocci_id/* drivers/memory/emif.c 1471 */;
	struct emif_custom_configs *cocci_id/* drivers/memory/emif.c 1430 */;
	struct ddr_device_info *cocci_id/* drivers/memory/emif.c 1429 */;
	struct emif_data *__init_or_modulecocci_id/* drivers/memory/emif.c 1424 */;
	struct emif_data cocci_id/* drivers/memory/emif.c 1354 */;
	const __be32 *cocci_id/* drivers/memory/emif.c 1264 */;
	struct device_node *cocci_id/* drivers/memory/emif.c 1259 */;
	struct emif_platform_data *cocci_id/* drivers/memory/emif.c 1201 */;
	struct emif_regs **cocci_id/* drivers/memory/emif.c 118 */;
	const struct ddr_device_info *cocci_id/* drivers/memory/emif.c 1139 */;
	const struct lpddr2_addressing *cocci_id/* drivers/memory/emif.c 1138 */;
	void __init_or_module cocci_id/* drivers/memory/emif.c 1134 */;
	void __iomem *cocci_id/* drivers/memory/emif.c 1079 */;
	struct emif_data *cocci_id/* drivers/memory/emif.c 1077 */;
	void cocci_id/* drivers/memory/emif.c 1077 */;
	struct device *cocci_id/* drivers/memory/emif.c 1015 */;
	irqreturn_t cocci_id/* drivers/memory/emif.c 1010 */;
	void *cocci_id/* drivers/memory/emif.c 1010 */;
}