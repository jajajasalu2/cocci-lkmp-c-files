cocci_test_suite() {
	struct sunxi_ir {
		spinlock_t ir_lock;
		struct rc_dev *rc;
		void __iomem *base;
		int irq;
		int fifo_size;
		struct clk *clk;
		struct clk *apb_clk;
		struct reset_control *rst;
		const char *map_name;
	} cocci_id/* drivers/media/rc/sunxi-cir.c 92 */;
	struct sunxi_ir_quirks {
		bool has_reset;
		int fifo_size;
	} cocci_id/* drivers/media/rc/sunxi-cir.c 87 */;
	struct platform_driver cocci_id/* drivers/media/rc/sunxi-cir.c 363 */;
	const struct of_device_id cocci_id/* drivers/media/rc/sunxi-cir.c 346 */[];
	const struct sunxi_ir_quirks cocci_id/* drivers/media/rc/sunxi-cir.c 331 */;
	struct sunxi_ir cocci_id/* drivers/media/rc/sunxi-cir.c 159 */;
	u32 cocci_id/* drivers/media/rc/sunxi-cir.c 157 */;
	struct resource *cocci_id/* drivers/media/rc/sunxi-cir.c 155 */;
	const struct sunxi_ir_quirks *cocci_id/* drivers/media/rc/sunxi-cir.c 154 */;
	struct device_node *cocci_id/* drivers/media/rc/sunxi-cir.c 153 */;
	struct device *cocci_id/* drivers/media/rc/sunxi-cir.c 152 */;
	struct platform_device *cocci_id/* drivers/media/rc/sunxi-cir.c 147 */;
	struct ir_raw_event cocci_id/* drivers/media/rc/sunxi-cir.c 110 */;
	struct sunxi_ir *cocci_id/* drivers/media/rc/sunxi-cir.c 109 */;
	unsigned int cocci_id/* drivers/media/rc/sunxi-cir.c 108 */;
	unsigned char cocci_id/* drivers/media/rc/sunxi-cir.c 107 */;
	unsigned long cocci_id/* drivers/media/rc/sunxi-cir.c 106 */;
	irqreturn_t cocci_id/* drivers/media/rc/sunxi-cir.c 104 */;
	void *cocci_id/* drivers/media/rc/sunxi-cir.c 104 */;
	int cocci_id/* drivers/media/rc/sunxi-cir.c 104 */;
}
