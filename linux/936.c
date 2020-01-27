cocci_test_suite() {
	struct gpiomtd *cocci_id/* drivers/mtd/nand/raw/gpio.c 75 */;
	unsigned int cocci_id/* drivers/mtd/nand/raw/gpio.c 73 */;
	struct nand_chip *cocci_id/* drivers/mtd/nand/raw/gpio.c 72 */;
	int cocci_id/* drivers/mtd/nand/raw/gpio.c 72 */;
	void cocci_id/* drivers/mtd/nand/raw/gpio.c 72 */;
	unsigned long cocci_id/* drivers/mtd/nand/raw/gpio.c 56 */;
	struct gpiomtd cocci_id/* drivers/mtd/nand/raw/gpio.c 42 */;
	struct mtd_info *cocci_id/* drivers/mtd/nand/raw/gpio.c 40 */;
	struct platform_driver cocci_id/* drivers/mtd/nand/raw/gpio.c 311 */;
	struct gpiomtd {
		void __iomem *io_sync;
		struct nand_chip nand_chip;
		struct gpio_nand_platdata plat;
		struct gpio_desc *nce;
		struct gpio_desc *cle;
		struct gpio_desc *ale;
		struct gpio_desc *rdy;
		struct gpio_desc *nwp;
	} cocci_id/* drivers/mtd/nand/raw/gpio.c 29 */;
	struct device *cocci_id/* drivers/mtd/nand/raw/gpio.c 211 */;
	struct platform_device *cocci_id/* drivers/mtd/nand/raw/gpio.c 180 */;
	struct resource *cocci_id/* drivers/mtd/nand/raw/gpio.c 179 */;
	struct gpio_nand_platdata *cocci_id/* drivers/mtd/nand/raw/gpio.c 164 */;
	const struct device *cocci_id/* drivers/mtd/nand/raw/gpio.c 163 */;
	u64 cocci_id/* drivers/mtd/nand/raw/gpio.c 133 */;
	u32 cocci_id/* drivers/mtd/nand/raw/gpio.c 110 */;
	const struct of_device_id cocci_id/* drivers/mtd/nand/raw/gpio.c 101 */[];
}
