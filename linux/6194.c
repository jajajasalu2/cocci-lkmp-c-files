cocci_test_suite() {
	struct t7l66xb {
		void __iomem *scr;
		raw_spinlock_t lock;
		struct resource rscr;
		struct clk *clk48m;
		struct clk *clk32k;
		int irq;
		int irq_base;
	} cocci_id/* drivers/mfd/t7l66xb.c 66 */;
	struct platform_driver cocci_id/* drivers/mfd/t7l66xb.c 427 */;
	const struct resource cocci_id/* drivers/mfd/t7l66xb.c 39 */[];
	enum{T7L66XB_CELL_NAND, T7L66XB_CELL_MMC,} cocci_id/* drivers/mfd/t7l66xb.c 34 */;
	struct resource *cocci_id/* drivers/mfd/t7l66xb.c 310 */;
	struct t7l66xb_platform_data *cocci_id/* drivers/mfd/t7l66xb.c 308 */;
	pm_message_t cocci_id/* drivers/mfd/t7l66xb.c 269 */;
	unsigned int cocci_id/* drivers/mfd/t7l66xb.c 238 */;
	struct t7l66xb *cocci_id/* drivers/mfd/t7l66xb.c 237 */;
	struct platform_device *cocci_id/* drivers/mfd/t7l66xb.c 235 */;
	void cocci_id/* drivers/mfd/t7l66xb.c 235 */;
	struct irq_chip cocci_id/* drivers/mfd/t7l66xb.c 225 */;
	u8 cocci_id/* drivers/mfd/t7l66xb.c 203 */;
	unsigned long cocci_id/* drivers/mfd/t7l66xb.c 202 */;
	struct irq_data *cocci_id/* drivers/mfd/t7l66xb.c 199 */;
	struct irq_desc *cocci_id/* drivers/mfd/t7l66xb.c 184 */;
	struct mfd_cell cocci_id/* drivers/mfd/t7l66xb.c 164 */[];
	struct tmio_mmc_data cocci_id/* drivers/mfd/t7l66xb.c 140 */;
	int cocci_id/* drivers/mfd/t7l66xb.c 131 */;
}
