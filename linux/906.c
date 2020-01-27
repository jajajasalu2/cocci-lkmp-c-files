cocci_test_suite() {
	struct resource *cocci_id/* drivers/mtd/nand/raw/oxnas_nand.c 81 */;
	struct mtd_info *cocci_id/* drivers/mtd/nand/raw/oxnas_nand.c 80 */;
	struct device_node *cocci_id/* drivers/mtd/nand/raw/oxnas_nand.c 76 */;
	struct platform_device *cocci_id/* drivers/mtd/nand/raw/oxnas_nand.c 74 */;
	struct oxnas_nand_ctrl *cocci_id/* drivers/mtd/nand/raw/oxnas_nand.c 63 */;
	unsigned int cocci_id/* drivers/mtd/nand/raw/oxnas_nand.c 61 */;
	struct nand_chip *cocci_id/* drivers/mtd/nand/raw/oxnas_nand.c 60 */;
	int cocci_id/* drivers/mtd/nand/raw/oxnas_nand.c 60 */;
	void cocci_id/* drivers/mtd/nand/raw/oxnas_nand.c 60 */;
	const u8 *cocci_id/* drivers/mtd/nand/raw/oxnas_nand.c 51 */;
	u8 *cocci_id/* drivers/mtd/nand/raw/oxnas_nand.c 44 */;
	uint8_t cocci_id/* drivers/mtd/nand/raw/oxnas_nand.c 37 */;
	struct oxnas_nand_ctrl {
		struct nand_controller base;
		void __iomem *io_base;
		struct clk *clk;
		struct nand_chip *chips[OXNAS_NAND_MAX_CHIPS];
	} cocci_id/* drivers/mtd/nand/raw/oxnas_nand.c 30 */;
	struct platform_driver cocci_id/* drivers/mtd/nand/raw/oxnas_nand.c 187 */;
	const struct of_device_id cocci_id/* drivers/mtd/nand/raw/oxnas_nand.c 181 */[];
	struct nand_chip cocci_id/* drivers/mtd/nand/raw/oxnas_nand.c 115 */;
}
