cocci_test_suite() {
	struct tc6393xb {
		void __iomem *scr;
		struct gpio_chip gpio;
		struct clk *clk;
		raw_spinlock_t lock;
		struct {
			u8 fer;
			u16 ccr;
			u8 gpi_bcr[3];
			u8 gpo_dsr[3];
			u8 gpo_doecr[3];
		} suspend_state;
		struct resource rscr;
		struct resource *iomem;
		int irq;
		int irq_base;
	} cocci_id/* drivers/mfd/tc6393xb.c 88 */;
	void __exit cocci_id/* drivers/mfd/tc6393xb.c 843 */;
	int __init cocci_id/* drivers/mfd/tc6393xb.c 838 */;
	struct platform_driver cocci_id/* drivers/mfd/tc6393xb.c 827 */;
	pm_message_t cocci_id/* drivers/mfd/tc6393xb.c 760 */;
	struct resource *cocci_id/* drivers/mfd/tc6393xb.c 608 */;
	unsigned int cocci_id/* drivers/mfd/tc6393xb.c 571 */;
	struct platform_device *cocci_id/* drivers/mfd/tc6393xb.c 568 */;
	struct irq_chip cocci_id/* drivers/mfd/tc6393xb.c 561 */;
	struct irq_data *cocci_id/* drivers/mfd/tc6393xb.c 531 */;
	struct irq_desc *cocci_id/* drivers/mfd/tc6393xb.c 515 */;
	u8 cocci_id/* drivers/mfd/tc6393xb.c 438 */;
	struct tc6393xb *cocci_id/* drivers/mfd/tc6393xb.c 437 */;
	unsigned cocci_id/* drivers/mfd/tc6393xb.c 435 */;
	int cocci_id/* drivers/mfd/tc6393xb.c 435 */;
	struct gpio_chip *cocci_id/* drivers/mfd/tc6393xb.c 434 */;
	void cocci_id/* drivers/mfd/tc6393xb.c 434 */;
	struct mfd_cell cocci_id/* drivers/mfd/tc6393xb.c 386 */[];
	struct tmio_mmc_data cocci_id/* drivers/mfd/tc6393xb.c 380 */;
	const struct fb_videomode *cocci_id/* drivers/mfd/tc6393xb.c 331 */;
	bool cocci_id/* drivers/mfd/tc6393xb.c 309 */;
	u16 cocci_id/* drivers/mfd/tc6393xb.c 295 */;
	unsigned long cocci_id/* drivers/mfd/tc6393xb.c 294 */;
	struct tc6393xb_platform_data *cocci_id/* drivers/mfd/tc6393xb.c 264 */;
	struct resource cocci_id/* drivers/mfd/tc6393xb.c 195 */[];
	const struct resource cocci_id/* drivers/mfd/tc6393xb.c 167 */[];
	enum{TC6393XB_CELL_NAND, TC6393XB_CELL_MMC, TC6393XB_CELL_OHCI, TC6393XB_CELL_FB,} cocci_id/* drivers/mfd/tc6393xb.c 111 */;
}
