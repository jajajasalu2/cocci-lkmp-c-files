cocci_test_suite() {
	struct ingenic_nfc cocci_id/* drivers/mtd/nand/raw/ingenic/ingenic_nand_drv.c 72 */;
	struct nand_controller *cocci_id/* drivers/mtd/nand/raw/ingenic/ingenic_nand_drv.c 70 */;
	struct ingenic_nand {
		struct nand_chip chip;
		struct list_head chip_list;
		struct gpio_desc *busy_gpio;
		struct gpio_desc *wp_gpio;
		unsigned int reading:1;
	} cocci_id/* drivers/mtd/nand/raw/ingenic/ingenic_nand_drv.c 56 */;
	struct platform_driver cocci_id/* drivers/mtd/nand/raw/ingenic/ingenic_nand_drv.c 516 */;
	const struct of_device_id cocci_id/* drivers/mtd/nand/raw/ingenic/ingenic_nand_drv.c 508 */[];
	const struct jz_soc_info cocci_id/* drivers/mtd/nand/raw/ingenic/ingenic_nand_drv.c 494 */;
	struct ingenic_nfc {
		struct device *dev;
		struct ingenic_ecc *ecc;
		const struct jz_soc_info *soc_info;
		struct nand_controller controller;
		unsigned int num_banks;
		struct list_head chips;
		int selected;
		struct ingenic_nand_cs cs[];
	} cocci_id/* drivers/mtd/nand/raw/ingenic/ingenic_nand_drv.c 45 */;
	struct ingenic_nand_cs {
		unsigned int bank;
		void __iomem *base;
	} cocci_id/* drivers/mtd/nand/raw/ingenic/ingenic_nand_drv.c 40 */;
	struct ingenic_nand cocci_id/* drivers/mtd/nand/raw/ingenic/ingenic_nand_drv.c 394 */;
	struct ingenic_nand *cocci_id/* drivers/mtd/nand/raw/ingenic/ingenic_nand_drv.c 390 */;
	void cocci_id/* drivers/mtd/nand/raw/ingenic/ingenic_nand_drv.c 388 */;
	struct jz_soc_info {
		unsigned long data_offset;
		unsigned long addr_offset;
		unsigned long cmd_offset;
		const struct mtd_ooblayout_ops *oob_layout;
	} cocci_id/* drivers/mtd/nand/raw/ingenic/ingenic_nand_drv.c 33 */;
	const __be32 *cocci_id/* drivers/mtd/nand/raw/ingenic/ingenic_nand_drv.c 315 */;
	struct device *cocci_id/* drivers/mtd/nand/raw/ingenic/ingenic_nand_drv.c 310 */;
	struct device_node *cocci_id/* drivers/mtd/nand/raw/ingenic/ingenic_nand_drv.c 307 */;
	struct platform_device *cocci_id/* drivers/mtd/nand/raw/ingenic/ingenic_nand_drv.c 305 */;
	const struct nand_controller_ops cocci_id/* drivers/mtd/nand/raw/ingenic/ingenic_nand_drv.c 301 */;
	struct ingenic_nfc *cocci_id/* drivers/mtd/nand/raw/ingenic/ingenic_nand_drv.c 235 */;
	struct mtd_info *cocci_id/* drivers/mtd/nand/raw/ingenic/ingenic_nand_drv.c 234 */;
	struct nand_chip *cocci_id/* drivers/mtd/nand/raw/ingenic/ingenic_nand_drv.c 232 */;
	int cocci_id/* drivers/mtd/nand/raw/ingenic/ingenic_nand_drv.c 232 */;
	struct ingenic_ecc_params cocci_id/* drivers/mtd/nand/raw/ingenic/ingenic_nand_drv.c 202 */;
	u8 *cocci_id/* drivers/mtd/nand/raw/ingenic/ingenic_nand_drv.c 198 */;
	const u8 *cocci_id/* drivers/mtd/nand/raw/ingenic/ingenic_nand_drv.c 197 */;
	struct ingenic_nand_cs *cocci_id/* drivers/mtd/nand/raw/ingenic/ingenic_nand_drv.c 165 */;
	unsigned int cocci_id/* drivers/mtd/nand/raw/ingenic/ingenic_nand_drv.c 161 */;
	const struct mtd_ooblayout_ops cocci_id/* drivers/mtd/nand/raw/ingenic/ingenic_nand_drv.c 140 */;
	struct nand_ecc_ctrl *cocci_id/* drivers/mtd/nand/raw/ingenic/ingenic_nand_drv.c 114 */;
	struct mtd_oob_region *cocci_id/* drivers/mtd/nand/raw/ingenic/ingenic_nand_drv.c 111 */;
}
