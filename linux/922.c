cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/mtd/nand/raw/tmio_nand.c 498 */;
	pm_message_t cocci_id/* drivers/mtd/nand/raw/tmio_nand.c 468 */;
	struct resource *cocci_id/* drivers/mtd/nand/raw/tmio_nand.c 361 */;
	struct tmio_nand_data *cocci_id/* drivers/mtd/nand/raw/tmio_nand.c 360 */;
	void cocci_id/* drivers/mtd/nand/raw/tmio_nand.c 349 */;
	const struct mfd_cell *cocci_id/* drivers/mtd/nand/raw/tmio_nand.c 307 */;
	struct platform_device *cocci_id/* drivers/mtd/nand/raw/tmio_nand.c 305 */;
	int cocci_id/* drivers/mtd/nand/raw/tmio_nand.c 305 */;
	unsigned char *cocci_id/* drivers/mtd/nand/raw/tmio_nand.c 288 */;
	unsigned int cocci_id/* drivers/mtd/nand/raw/tmio_nand.c 270 */;
	u_char *cocci_id/* drivers/mtd/nand/raw/tmio_nand.c 267 */;
	const u_char *cocci_id/* drivers/mtd/nand/raw/tmio_nand.c 266 */;
	struct nand_chip *cocci_id/* drivers/mtd/nand/raw/tmio_nand.c 266 */;
	u_char cocci_id/* drivers/mtd/nand/raw/tmio_nand.c 223 */;
	long cocci_id/* drivers/mtd/nand/raw/tmio_nand.c 189 */;
	irqreturn_t cocci_id/* drivers/mtd/nand/raw/tmio_nand.c 169 */;
	void *cocci_id/* drivers/mtd/nand/raw/tmio_nand.c 169 */;
	u8 cocci_id/* drivers/mtd/nand/raw/tmio_nand.c 136 */;
	struct tmio_nand cocci_id/* drivers/mtd/nand/raw/tmio_nand.c 124 */;
	struct tmio_nand *cocci_id/* drivers/mtd/nand/raw/tmio_nand.c 122 */;
	struct mtd_info *cocci_id/* drivers/mtd/nand/raw/tmio_nand.c 122 */;
	struct tmio_nand {
		struct nand_chip chip;
		struct completion comp;
		struct platform_device *dev;
		void __iomem *ccr;
		void __iomem *fcr;
		unsigned long fcr_base;
		unsigned int irq;
		u8 read;
		unsigned read_good:1;
	} cocci_id/* drivers/mtd/nand/raw/tmio_nand.c 105 */;
}
