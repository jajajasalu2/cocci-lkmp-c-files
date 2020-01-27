cocci_test_suite() {
	struct brcmstb_gisb_arb_device {
		void __iomem *base;
		const int *gisb_offsets;
		bool big_endian;
		struct mutex lock;
		struct list_head next;
		u32 valid_mask;
		const char *master_names[sizeof(u32) * BITS_PER_BYTE];
		u32 saved_timeout;
	} cocci_id/* drivers/bus/brcmstb_gisb.c 87 */;
	int __init cocci_id/* drivers/bus/brcmstb_gisb.c 447 */;
	void cocci_id/* drivers/bus/brcmstb_gisb.c 447 */;
	struct platform_driver cocci_id/* drivers/bus/brcmstb_gisb.c 439 */;
	const struct dev_pm_ops cocci_id/* drivers/bus/brcmstb_gisb.c 434 */;
	struct device *cocci_id/* drivers/bus/brcmstb_gisb.c 421 */;
	const int cocci_id/* drivers/bus/brcmstb_gisb.c 42 */[];
	enum{ARB_TIMER, ARB_ERR_CAP_CLR, ARB_ERR_CAP_HI_ADDR, ARB_ERR_CAP_ADDR, ARB_ERR_CAP_STATUS, ARB_ERR_CAP_MASTER,} cocci_id/* drivers/bus/brcmstb_gisb.c 33 */;
	unsigned int cocci_id/* drivers/bus/brcmstb_gisb.c 321 */;
	struct resource *cocci_id/* drivers/bus/brcmstb_gisb.c 319 */;
	const struct of_device_id *cocci_id/* drivers/bus/brcmstb_gisb.c 318 */;
	struct device_node *cocci_id/* drivers/bus/brcmstb_gisb.c 316 */;
	struct platform_device *cocci_id/* drivers/bus/brcmstb_gisb.c 314 */;
	const struct of_device_id cocci_id/* drivers/bus/brcmstb_gisb.c 304 */[];
	struct attribute_group cocci_id/* drivers/bus/brcmstb_gisb.c 300 */;
	struct attribute *cocci_id/* drivers/bus/brcmstb_gisb.c 295 */[];
	struct notifier_block *cocci_id/* drivers/bus/brcmstb_gisb.c 276 */;
	unsigned long cocci_id/* drivers/bus/brcmstb_gisb.c 276 */;
	struct notifier_block cocci_id/* drivers/bus/brcmstb_gisb.c 268 */;
	int cocci_id/* drivers/bus/brcmstb_gisb.c 265 */(struct notifier_block *self,
							 unsigned long v,
							 void *p);
	irqreturn_t cocci_id/* drivers/bus/brcmstb_gisb.c 255 */;
	void *cocci_id/* drivers/bus/brcmstb_gisb.c 255 */;
	u32 cocci_id/* drivers/bus/brcmstb_gisb.c 230 */;
	struct brcmstb_gisb_arb_device *cocci_id/* drivers/bus/brcmstb_gisb.c 229 */;
	struct pt_regs *cocci_id/* drivers/bus/brcmstb_gisb.c 226 */;
	int cocci_id/* drivers/bus/brcmstb_gisb.c 226 */;
	char cocci_id/* drivers/bus/brcmstb_gisb.c 195 */[11];
	u64 cocci_id/* drivers/bus/brcmstb_gisb.c 192 */;
	const char *cocci_id/* drivers/bus/brcmstb_gisb.c 189 */;
	size_t cocci_id/* drivers/bus/brcmstb_gisb.c 157 */;
	char *cocci_id/* drivers/bus/brcmstb_gisb.c 143 */;
	struct device_attribute *cocci_id/* drivers/bus/brcmstb_gisb.c 142 */;
	ssize_t cocci_id/* drivers/bus/brcmstb_gisb.c 141 */;
}
