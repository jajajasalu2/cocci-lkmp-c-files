cocci_test_suite() {
	void __exit cocci_id/* drivers/bus/sunxi-rsb.c 773 */;
	int __init cocci_id/* drivers/bus/sunxi-rsb.c 759 */;
	struct platform_driver cocci_id/* drivers/bus/sunxi-rsb.c 750 */;
	unsigned long cocci_id/* drivers/bus/sunxi-rsb.c 629 */;
	struct resource *cocci_id/* drivers/bus/sunxi-rsb.c 627 */;
	struct platform_device *cocci_id/* drivers/bus/sunxi-rsb.c 623 */;
	const struct of_device_id cocci_id/* drivers/bus/sunxi-rsb.c 617 */[];
	u8 cocci_id/* drivers/bus/sunxi-rsb.c 552 */;
	u32 cocci_id/* drivers/bus/sunxi-rsb.c 551 */;
	struct device_node *cocci_id/* drivers/bus/sunxi-rsb.c 550 */;
	struct device *cocci_id/* drivers/bus/sunxi-rsb.c 549 */;
	const struct sunxi_rsb_addr_map cocci_id/* drivers/bus/sunxi-rsb.c 530 */[];
	irqreturn_t cocci_id/* drivers/bus/sunxi-rsb.c 475 */;
	struct sunxi_rsb_ctx *cocci_id/* drivers/bus/sunxi-rsb.c 464 */;
	const char *cocci_id/* drivers/bus/sunxi-rsb.c 462 */;
	struct lock_class_key *cocci_id/* drivers/bus/sunxi-rsb.c 461 */;
	const struct regmap_config *cocci_id/* drivers/bus/sunxi-rsb.c 460 */;
	struct sunxi_rsb_device *cocci_id/* drivers/bus/sunxi-rsb.c 459 */;
	struct regmap *cocci_id/* drivers/bus/sunxi-rsb.c 459 */;
	struct regmap_bus cocci_id/* drivers/bus/sunxi-rsb.c 427 */;
	void *cocci_id/* drivers/bus/sunxi-rsb.c 420 */;
	void cocci_id/* drivers/bus/sunxi-rsb.c 420 */;
	unsigned int *cocci_id/* drivers/bus/sunxi-rsb.c 400 */;
	unsigned int cocci_id/* drivers/bus/sunxi-rsb.c 399 */;
	struct sunxi_rsb_ctx {
		struct sunxi_rsb_device *rdev;
		int size;
	} cocci_id/* drivers/bus/sunxi-rsb.c 394 */;
	const u32 *cocci_id/* drivers/bus/sunxi-rsb.c 357 */;
	u32 *cocci_id/* drivers/bus/sunxi-rsb.c 315 */;
	size_t cocci_id/* drivers/bus/sunxi-rsb.c 315 */;
	struct sunxi_rsb *cocci_id/* drivers/bus/sunxi-rsb.c 267 */;
	int cocci_id/* drivers/bus/sunxi-rsb.c 267 */;
	struct sunxi_rsb_driver *cocci_id/* drivers/bus/sunxi-rsb.c 259 */;
	u16 cocci_id/* drivers/bus/sunxi-rsb.c 199 */;
	const struct sunxi_rsb_driver *cocci_id/* drivers/bus/sunxi-rsb.c 141 */;
	struct device_driver *cocci_id/* drivers/bus/sunxi-rsb.c 134 */;
	struct bus_type cocci_id/* drivers/bus/sunxi-rsb.c 132 */;
	struct sunxi_rsb {
		struct device *dev;
		void __iomem *regs;
		struct clk *clk;
		struct reset_control *rstc;
		struct completion complete;
		struct mutex lock;
		unsigned int status;
	} cocci_id/* drivers/bus/sunxi-rsb.c 121 */;
	struct sunxi_rsb_addr_map {
		u16 hwaddr;
		u8 rtaddr;
	} cocci_id/* drivers/bus/sunxi-rsb.c 116 */;
}
