cocci_test_suite() {
	int cocci_id/* drivers/mtd/nand/raw/mtk_ecc.c 91 */[];
	enum mtk_ecc_regs{ECC_ENCPAR00, ECC_ENCIRQ_EN, ECC_ENCIRQ_STA, ECC_DECDONE, ECC_DECIRQ_EN, ECC_DECIRQ_STA,} cocci_id/* drivers/mtd/nand/raw/mtk_ecc.c 82 */;
	const u8 cocci_id/* drivers/mtd/nand/raw/mtk_ecc.c 68 */[];
	struct platform_driver cocci_id/* drivers/mtd/nand/raw/mtk_ecc.c 582 */;
	struct mtk_ecc {
		struct device *dev;
		const struct mtk_ecc_caps *caps;
		void __iomem *regs;
		struct clk *clk;
		struct completion done;
		struct mutex lock;
		u32 sectors;
		u8 *eccdata;
	} cocci_id/* drivers/mtd/nand/raw/mtk_ecc.c 54 */;
	struct resource *cocci_id/* drivers/mtd/nand/raw/mtk_ecc.c 498 */;
	struct device *cocci_id/* drivers/mtd/nand/raw/mtk_ecc.c 496 */;
	const struct of_device_id cocci_id/* drivers/mtd/nand/raw/mtk_ecc.c 480 */[];
	const struct mtk_ecc_caps cocci_id/* drivers/mtd/nand/raw/mtk_ecc.c 450 */;
	unsigned int cocci_id/* drivers/mtd/nand/raw/mtk_ecc.c 444 */;
	struct mtk_ecc_caps {
		u32 err_mask;
		const u8 *ecc_strength;
		const u32 *ecc_regs;
		u8 num_ecc_strength;
		u8 ecc_mode_shift;
		u32 parity_bits;
		int pg_irq_sel;
	} cocci_id/* drivers/mtd/nand/raw/mtk_ecc.c 44 */;
	int cocci_id/* drivers/mtd/nand/raw/mtk_ecc.c 428 */;
	const u8 *cocci_id/* drivers/mtd/nand/raw/mtk_ecc.c 427 */;
	u32 *cocci_id/* drivers/mtd/nand/raw/mtk_ecc.c 425 */;
	struct mtk_ecc *cocci_id/* drivers/mtd/nand/raw/mtk_ecc.c 425 */;
	void cocci_id/* drivers/mtd/nand/raw/mtk_ecc.c 425 */;
	dma_addr_t cocci_id/* drivers/mtd/nand/raw/mtk_ecc.c 381 */;
	u8 *cocci_id/* drivers/mtd/nand/raw/mtk_ecc.c 379 */;
	enum mtk_ecc_operation cocci_id/* drivers/mtd/nand/raw/mtk_ecc.c 338 */;
	u16 cocci_id/* drivers/mtd/nand/raw/mtk_ecc.c 295 */;
	struct platform_device *cocci_id/* drivers/mtd/nand/raw/mtk_ecc.c 258 */;
	struct device_node *cocci_id/* drivers/mtd/nand/raw/mtk_ecc.c 256 */;
	struct mtk_ecc_stats *cocci_id/* drivers/mtd/nand/raw/mtk_ecc.c 212 */;
	u32 cocci_id/* drivers/mtd/nand/raw/mtk_ecc.c 167 */;
	struct mtk_ecc_config *cocci_id/* drivers/mtd/nand/raw/mtk_ecc.c 165 */;
	irqreturn_t cocci_id/* drivers/mtd/nand/raw/mtk_ecc.c 133 */;
	void *cocci_id/* drivers/mtd/nand/raw/mtk_ecc.c 133 */;
}
