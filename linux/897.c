cocci_test_suite() {
	const u_char *cocci_id/* drivers/mtd/nand/raw/au1550nd.c 86 */;
	u16 cocci_id/* drivers/mtd/nand/raw/au1550nd.c 74 */;
	struct platform_driver cocci_id/* drivers/mtd/nand/raw/au1550nd.c 477 */;
	struct resource *cocci_id/* drivers/mtd/nand/raw/au1550nd.c 382 */;
	struct au1550nd_platdata *cocci_id/* drivers/mtd/nand/raw/au1550nd.c 378 */;
	struct platform_device *cocci_id/* drivers/mtd/nand/raw/au1550nd.c 376 */;
	void __iomem *cocci_id/* drivers/mtd/nand/raw/au1550nd.c 357 */;
	u_char cocci_id/* drivers/mtd/nand/raw/au1550nd.c 32 */;
	unsigned long cocci_id/* drivers/mtd/nand/raw/au1550nd.c 246 */;
	struct au1550nd_ctx cocci_id/* drivers/mtd/nand/raw/au1550nd.c 243 */;
	struct au1550nd_ctx *cocci_id/* drivers/mtd/nand/raw/au1550nd.c 243 */;
	struct mtd_info *cocci_id/* drivers/mtd/nand/raw/au1550nd.c 242 */;
	int cocci_id/* drivers/mtd/nand/raw/au1550nd.c 240 */;
	struct nand_chip *cocci_id/* drivers/mtd/nand/raw/au1550nd.c 239 */;
	unsigned cocci_id/* drivers/mtd/nand/raw/au1550nd.c 239 */;
	void cocci_id/* drivers/mtd/nand/raw/au1550nd.c 239 */;
	struct au1550nd_ctx {
		struct nand_chip chip;
		int cs;
		void __iomem *base;
		void (*write_byte)(struct nand_chip *, u_char);
	} cocci_id/* drivers/mtd/nand/raw/au1550nd.c 18 */;
	u16 *cocci_id/* drivers/mtd/nand/raw/au1550nd.c 146 */;
	u_char *cocci_id/* drivers/mtd/nand/raw/au1550nd.c 104 */;
}
