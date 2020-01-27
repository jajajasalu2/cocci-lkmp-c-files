cocci_test_suite() {
	const struct mtd_partition cocci_id/* drivers/mtd/nand/raw/ams-delta.c 48 */[];
	struct platform_driver cocci_id/* drivers/mtd/nand/raw/ams-delta.c 345 */;
	struct mtd_info *cocci_id/* drivers/mtd/nand/raw/ams-delta.c 337 */;
	struct ams_delta_nand *cocci_id/* drivers/mtd/nand/raw/ams-delta.c 336 */;
	struct platform_device *cocci_id/* drivers/mtd/nand/raw/ams-delta.c 334 */;
	int cocci_id/* drivers/mtd/nand/raw/ams-delta.c 334 */;
	struct ams_delta_nand {
		struct nand_controller base;
		struct nand_chip nand_chip;
		struct gpio_desc *gpiod_rdy;
		struct gpio_desc *gpiod_nce;
		struct gpio_desc *gpiod_nre;
		struct gpio_desc *gpiod_nwp;
		struct gpio_desc *gpiod_nwe;
		struct gpio_desc *gpiod_ale;
		struct gpio_desc *gpiod_cle;
		struct gpio_descs *data_gpiods;
		bool data_in;
	} cocci_id/* drivers/mtd/nand/raw/ams-delta.c 30 */;
	struct ams_delta_nand cocci_id/* drivers/mtd/nand/raw/ams-delta.c 230 */;
	const struct nand_controller_ops cocci_id/* drivers/mtd/nand/raw/ams-delta.c 214 */;
	const struct nand_op_instr *cocci_id/* drivers/mtd/nand/raw/ams-delta.c 163 */;
	const struct nand_operation *cocci_id/* drivers/mtd/nand/raw/ams-delta.c 160 */;
	struct nand_chip *cocci_id/* drivers/mtd/nand/raw/ams-delta.c 159 */;
	bool cocci_id/* drivers/mtd/nand/raw/ams-delta.c 154 */;
	void cocci_id/* drivers/mtd/nand/raw/ams-delta.c 154 */;
	u8 *cocci_id/* drivers/mtd/nand/raw/ams-delta.c 143 */;
	const u8 *cocci_id/* drivers/mtd/nand/raw/ams-delta.c 131 */;
	struct gpio_descs *cocci_id/* drivers/mtd/nand/raw/ams-delta.c 122 */;
}
