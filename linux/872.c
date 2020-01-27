cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/mtd/nand/raw/mpc5121_nfc.c 821 */;
	const struct of_device_id cocci_id/* drivers/mtd/nand/raw/mpc5121_nfc.c 815 */[];
	const __be32 *cocci_id/* drivers/mtd/nand/raw/mpc5121_nfc.c 615 */;
	unsigned long cocci_id/* drivers/mtd/nand/raw/mpc5121_nfc.c 614 */;
	struct resource cocci_id/* drivers/mtd/nand/raw/mpc5121_nfc.c 611 */;
	struct clk *cocci_id/* drivers/mtd/nand/raw/mpc5121_nfc.c 608 */;
	struct platform_device *cocci_id/* drivers/mtd/nand/raw/mpc5121_nfc.c 605 */;
	struct device *cocci_id/* drivers/mtd/nand/raw/mpc5121_nfc.c 593 */;
	struct mpc512x_reset_module *cocci_id/* drivers/mtd/nand/raw/mpc5121_nfc.c 518 */;
	const u_char *cocci_id/* drivers/mtd/nand/raw/mpc5121_nfc.c 491 */;
	uint cocci_id/* drivers/mtd/nand/raw/mpc5121_nfc.c 450 */;
	u_char *cocci_id/* drivers/mtd/nand/raw/mpc5121_nfc.c 445 */;
	u8 *cocci_id/* drivers/mtd/nand/raw/mpc5121_nfc.c 394 */;
	unsigned cocci_id/* drivers/mtd/nand/raw/mpc5121_nfc.c 320 */;
	u8 cocci_id/* drivers/mtd/nand/raw/mpc5121_nfc.c 295 */;
	void cocci_id/* drivers/mtd/nand/raw/mpc5121_nfc.c 291 */;
	struct device_node *cocci_id/* drivers/mtd/nand/raw/mpc5121_nfc.c 273 */;
	struct mpc5121_nfc_prv *cocci_id/* drivers/mtd/nand/raw/mpc5121_nfc.c 272 */;
	struct nand_chip *cocci_id/* drivers/mtd/nand/raw/mpc5121_nfc.c 271 */;
	struct mtd_info *cocci_id/* drivers/mtd/nand/raw/mpc5121_nfc.c 269 */;
	int cocci_id/* drivers/mtd/nand/raw/mpc5121_nfc.c 269 */;
	u32 cocci_id/* drivers/mtd/nand/raw/mpc5121_nfc.c 235 */;
	irqreturn_t cocci_id/* drivers/mtd/nand/raw/mpc5121_nfc.c 199 */;
	void *cocci_id/* drivers/mtd/nand/raw/mpc5121_nfc.c 199 */;
	u16 cocci_id/* drivers/mtd/nand/raw/mpc5121_nfc.c 151 */;
	void cocci_id/* drivers/mtd/nand/raw/mpc5121_nfc.c 118 */(struct mtd_info *mtd);
	struct mpc5121_nfc_prv {
		struct nand_chip chip;
		int irq;
		void __iomem *regs;
		struct clk *clk;
		wait_queue_head_t irq_waitq;
		uint column;
		int spareonly;
		void __iomem *csreg;
		struct device *dev;
	} cocci_id/* drivers/mtd/nand/raw/mpc5121_nfc.c 106 */;
}
