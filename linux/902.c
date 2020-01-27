cocci_test_suite() {
	struct resource *cocci_id/* drivers/mtd/nand/raw/brcmnand/bcm6368_nand.c 91 */;
	struct device *cocci_id/* drivers/mtd/nand/raw/brcmnand/bcm6368_nand.c 88 */;
	struct platform_device *cocci_id/* drivers/mtd/nand/raw/brcmnand/bcm6368_nand.c 86 */;
	int cocci_id/* drivers/mtd/nand/raw/brcmnand/bcm6368_nand.c 86 */;
	void cocci_id/* drivers/mtd/nand/raw/brcmnand/bcm6368_nand.c 68 */;
	u32 cocci_id/* drivers/mtd/nand/raw/brcmnand/bcm6368_nand.c 55 */;
	void __iomem *cocci_id/* drivers/mtd/nand/raw/brcmnand/bcm6368_nand.c 54 */;
	struct bcm6368_nand_soc cocci_id/* drivers/mtd/nand/raw/brcmnand/bcm6368_nand.c 53 */;
	struct bcm6368_nand_soc *cocci_id/* drivers/mtd/nand/raw/brcmnand/bcm6368_nand.c 52 */;
	bool cocci_id/* drivers/mtd/nand/raw/brcmnand/bcm6368_nand.c 50 */;
	struct brcmnand_soc *cocci_id/* drivers/mtd/nand/raw/brcmnand/bcm6368_nand.c 50 */;
	enum{BCM6368_NP_READ=BIT(0), BCM6368_BLOCK_ERASE=BIT(1), BCM6368_COPY_BACK=BIT(2), BCM6368_PAGE_PGM=BIT(3), BCM6368_CTRL_READY=BIT(4), BCM6368_DEV_RBPIN=BIT(5), BCM6368_ECC_ERR_UNC=BIT(6), BCM6368_ECC_ERR_CORR=BIT(7),} cocci_id/* drivers/mtd/nand/raw/brcmnand/bcm6368_nand.c 39 */;
	struct bcm6368_nand_soc {
		struct brcmnand_soc soc;
		void __iomem *base;
	} cocci_id/* drivers/mtd/nand/raw/brcmnand/bcm6368_nand.c 26 */;
	struct platform_driver cocci_id/* drivers/mtd/nand/raw/brcmnand/bcm6368_nand.c 121 */;
	const struct of_device_id cocci_id/* drivers/mtd/nand/raw/brcmnand/bcm6368_nand.c 115 */[];
}
