cocci_test_suite() {
	struct txx9ndfmc_platform_data *cocci_id/* drivers/mtd/nand/raw/txx9ndfmc.c 86 */;
	struct txx9ndfmc_drvdata *cocci_id/* drivers/mtd/nand/raw/txx9ndfmc.c 85 */;
	void __iomem *cocci_id/* drivers/mtd/nand/raw/txx9ndfmc.c 83 */;
	unsigned int cocci_id/* drivers/mtd/nand/raw/txx9ndfmc.c 83 */;
	struct txx9ndfmc_priv *cocci_id/* drivers/mtd/nand/raw/txx9ndfmc.c 79 */;
	struct nand_chip *cocci_id/* drivers/mtd/nand/raw/txx9ndfmc.c 78 */;
	struct platform_device *cocci_id/* drivers/mtd/nand/raw/txx9ndfmc.c 76 */;
	struct mtd_info *cocci_id/* drivers/mtd/nand/raw/txx9ndfmc.c 76 */;
	struct txx9ndfmc_drvdata {
		struct mtd_info *mtds[MAX_TXX9NDFMC_DEV];
		void __iomem *base;
		unsigned char hold;
		unsigned char spw;
		struct nand_controller controller;
	} cocci_id/* drivers/mtd/nand/raw/txx9ndfmc.c 68 */;
	struct txx9ndfmc_priv {
		struct platform_device *dev;
		struct nand_chip chip;
		int cs;
		const char *mtdname;
	} cocci_id/* drivers/mtd/nand/raw/txx9ndfmc.c 60 */;
	struct platform_driver cocci_id/* drivers/mtd/nand/raw/txx9ndfmc.c 406 */;
	int __exit cocci_id/* drivers/mtd/nand/raw/txx9ndfmc.c 371 */;
	struct txx9ndfmc_priv cocci_id/* drivers/mtd/nand/raw/txx9ndfmc.c 316 */;
	struct resource *cocci_id/* drivers/mtd/nand/raw/txx9ndfmc.c 278 */;
	unsigned long cocci_id/* drivers/mtd/nand/raw/txx9ndfmc.c 277 */;
	int __init cocci_id/* drivers/mtd/nand/raw/txx9ndfmc.c 271 */;
	const struct nand_controller_ops cocci_id/* drivers/mtd/nand/raw/txx9ndfmc.c 267 */;
	int cocci_id/* drivers/mtd/nand/raw/txx9ndfmc.c 252 */;
	unsigned char *cocci_id/* drivers/mtd/nand/raw/txx9ndfmc.c 188 */;
	u32 cocci_id/* drivers/mtd/nand/raw/txx9ndfmc.c 173 */;
	uint8_t *cocci_id/* drivers/mtd/nand/raw/txx9ndfmc.c 169 */;
	const uint8_t *cocci_id/* drivers/mtd/nand/raw/txx9ndfmc.c 168 */;
	void cocci_id/* drivers/mtd/nand/raw/txx9ndfmc.c 131 */;
	uint8_t cocci_id/* drivers/mtd/nand/raw/txx9ndfmc.c 102 */;
}
