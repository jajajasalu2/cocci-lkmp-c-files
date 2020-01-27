cocci_test_suite() {
	const struct resource cocci_id/* drivers/mfd/intel-lpss.c 88 */[];
	struct intel_lpss {
		const struct intel_lpss_platform_info *info;
		enum intel_lpss_dev_type type;
		struct clk *clk;
		struct clk_lookup *clock;
		struct mfd_cell *cell;
		struct device *dev;
		void __iomem *priv;
		u32 priv_ctx[LPSS_PRIV_REG_COUNT];
		int devid;
		u32 caps;
		u32 active_ltr;
		u32 idle_ltr;
		struct dentry *debugfs;
	} cocci_id/* drivers/mfd/intel-lpss.c 72 */;
	enum intel_lpss_dev_type{LPSS_DEV_I2C=0, LPSS_DEV_UART, LPSS_DEV_SPI,} cocci_id/* drivers/mfd/intel-lpss.c 66 */;
	void __exit cocci_id/* drivers/mfd/intel-lpss.c 523 */;
	int __init cocci_id/* drivers/mfd/intel-lpss.c 516 */;
	void *cocci_id/* drivers/mfd/intel-lpss.c 461 */;
	const struct intel_lpss_platform_info *cocci_id/* drivers/mfd/intel-lpss.c 375 */;
	char cocci_id/* drivers/mfd/intel-lpss.c 324 */[24];
	struct clk *cocci_id/* drivers/mfd/intel-lpss.c 323 */;
	char cocci_id/* drivers/mfd/intel-lpss.c 293 */[32];
	struct clk **cocci_id/* drivers/mfd/intel-lpss.c 291 */;
	const char *cocci_id/* drivers/mfd/intel-lpss.c 290 */;
	u32 cocci_id/* drivers/mfd/intel-lpss.c 253 */;
	const struct intel_lpss *cocci_id/* drivers/mfd/intel-lpss.c 251 */;
	resource_size_t cocci_id/* drivers/mfd/intel-lpss.c 246 */;
	bool cocci_id/* drivers/mfd/intel-lpss.c 239 */;
	unsigned int cocci_id/* drivers/mfd/intel-lpss.c 211 */;
	const struct mfd_cell *cocci_id/* drivers/mfd/intel-lpss.c 210 */;
	struct intel_lpss *cocci_id/* drivers/mfd/intel-lpss.c 208 */;
	int cocci_id/* drivers/mfd/intel-lpss.c 208 */;
	s32 cocci_id/* drivers/mfd/intel-lpss.c 161 */;
	struct device *cocci_id/* drivers/mfd/intel-lpss.c 161 */;
	void cocci_id/* drivers/mfd/intel-lpss.c 131 */;
	struct dentry *cocci_id/* drivers/mfd/intel-lpss.c 129 */;
	const struct mfd_cell cocci_id/* drivers/mfd/intel-lpss.c 110 */;
}