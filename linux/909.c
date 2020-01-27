cocci_test_suite() {
	uint8_t *cocci_id/* drivers/mtd/nand/raw/ndfc.c 92 */;
	uint32_t cocci_id/* drivers/mtd/nand/raw/ndfc.c 91 */;
	struct ndfc_controller *cocci_id/* drivers/mtd/nand/raw/ndfc.c 90 */;
	const u_char *cocci_id/* drivers/mtd/nand/raw/ndfc.c 88 */;
	u_char *cocci_id/* drivers/mtd/nand/raw/ndfc.c 88 */;
	struct nand_chip *cocci_id/* drivers/mtd/nand/raw/ndfc.c 87 */;
	int cocci_id/* drivers/mtd/nand/raw/ndfc.c 87 */;
	void cocci_id/* drivers/mtd/nand/raw/ndfc.c 76 */;
	unsigned int cocci_id/* drivers/mtd/nand/raw/ndfc.c 56 */;
	struct ndfc_controller cocci_id/* drivers/mtd/nand/raw/ndfc.c 40 */[NDFC_MAX_CS];
	struct ndfc_controller {
		struct platform_device *ofdev;
		void __iomem *ndfcbase;
		struct nand_chip chip;
		int chip_select;
		struct nand_controller ndfc_control;
	} cocci_id/* drivers/mtd/nand/raw/ndfc.c 32 */;
	struct platform_driver cocci_id/* drivers/mtd/nand/raw/ndfc.c 261 */;
	const struct of_device_id cocci_id/* drivers/mtd/nand/raw/ndfc.c 255 */[];
	u32 cocci_id/* drivers/mtd/nand/raw/ndfc.c 189 */;
	const __be32 *cocci_id/* drivers/mtd/nand/raw/ndfc.c 188 */;
	struct platform_device *cocci_id/* drivers/mtd/nand/raw/ndfc.c 185 */;
	struct mtd_info *cocci_id/* drivers/mtd/nand/raw/ndfc.c 137 */;
	struct device_node *cocci_id/* drivers/mtd/nand/raw/ndfc.c 133 */;
	const uint8_t *cocci_id/* drivers/mtd/nand/raw/ndfc.c 120 */;
	uint32_t *cocci_id/* drivers/mtd/nand/raw/ndfc.c 114 */;
}
