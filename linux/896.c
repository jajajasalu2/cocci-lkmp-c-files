cocci_test_suite() {
	u32 cocci_id/* drivers/mtd/nand/raw/denali_dt.c 78 */;
	struct denali_chip *cocci_id/* drivers/mtd/nand/raw/denali_dt.c 77 */;
	struct device_node *cocci_id/* drivers/mtd/nand/raw/denali_dt.c 75 */;
	struct denali_controller *cocci_id/* drivers/mtd/nand/raw/denali_dt.c 74 */;
	int cocci_id/* drivers/mtd/nand/raw/denali_dt.c 74 */;
	const struct of_device_id cocci_id/* drivers/mtd/nand/raw/denali_dt.c 57 */[];
	const struct denali_dt_data cocci_id/* drivers/mtd/nand/raw/denali_dt.c 35 */;
	struct denali_dt_data {
		unsigned int revision;
		unsigned int caps;
		const struct nand_ecc_caps *ecc_caps;
	} cocci_id/* drivers/mtd/nand/raw/denali_dt.c 27 */;
	struct platform_driver cocci_id/* drivers/mtd/nand/raw/denali_dt.c 209 */;
	struct denali_dt {
		struct denali_controller controller;
		struct clk *clk;
		struct clk *clk_x;
		struct clk *clk_ecc;
	} cocci_id/* drivers/mtd/nand/raw/denali_dt.c 20 */;
	const struct denali_dt_data *cocci_id/* drivers/mtd/nand/raw/denali_dt.c 110 */;
	struct denali_dt *cocci_id/* drivers/mtd/nand/raw/denali_dt.c 109 */;
	struct resource *cocci_id/* drivers/mtd/nand/raw/denali_dt.c 108 */;
	struct device *cocci_id/* drivers/mtd/nand/raw/denali_dt.c 107 */;
	struct platform_device *cocci_id/* drivers/mtd/nand/raw/denali_dt.c 105 */;
}
