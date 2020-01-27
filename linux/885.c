cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/mtd/nand/raw/mxic_nand.c 568 */;
	const struct of_device_id cocci_id/* drivers/mtd/nand/raw/mxic_nand.c 562 */[];
	struct mxic_nand_ctlr cocci_id/* drivers/mtd/nand/raw/mxic_nand.c 492 */;
	struct mtd_info *cocci_id/* drivers/mtd/nand/raw/mxic_nand.c 486 */;
	struct device_node *cocci_id/* drivers/mtd/nand/raw/mxic_nand.c 485 */;
	struct platform_device *cocci_id/* drivers/mtd/nand/raw/mxic_nand.c 483 */;
	const struct nand_controller_ops cocci_id/* drivers/mtd/nand/raw/mxic_nand.c 478 */;
	const struct nand_sdr_timings *cocci_id/* drivers/mtd/nand/raw/mxic_nand.c 455 */;
	const struct nand_data_interface *cocci_id/* drivers/mtd/nand/raw/mxic_nand.c 452 */;
	const struct nand_op_instr *cocci_id/* drivers/mtd/nand/raw/mxic_nand.c 392 */;
	bool cocci_id/* drivers/mtd/nand/raw/mxic_nand.c 389 */;
	const struct nand_operation *cocci_id/* drivers/mtd/nand/raw/mxic_nand.c 389 */;
	struct nand_chip *cocci_id/* drivers/mtd/nand/raw/mxic_nand.c 388 */;
	u32 cocci_id/* drivers/mtd/nand/raw/mxic_nand.c 346 */;
	void *cocci_id/* drivers/mtd/nand/raw/mxic_nand.c 340 */;
	unsigned int cocci_id/* drivers/mtd/nand/raw/mxic_nand.c 340 */;
	const void *cocci_id/* drivers/mtd/nand/raw/mxic_nand.c 339 */;
	irqreturn_t cocci_id/* drivers/mtd/nand/raw/mxic_nand.c 283 */;
	unsigned long cocci_id/* drivers/mtd/nand/raw/mxic_nand.c 231 */;
	u8 cocci_id/* drivers/mtd/nand/raw/mxic_nand.c 217 */;
	struct mxic_nand_ctlr *cocci_id/* drivers/mtd/nand/raw/mxic_nand.c 210 */;
	void cocci_id/* drivers/mtd/nand/raw/mxic_nand.c 210 */;
	int cocci_id/* drivers/mtd/nand/raw/mxic_nand.c 184 */;
	struct mxic_nand_ctlr {
		struct clk *ps_clk;
		struct clk *send_clk;
		struct clk *send_dly_clk;
		struct completion complete;
		void __iomem *regs;
		struct nand_controller controller;
		struct device *dev;
		struct nand_chip chip;
	} cocci_id/* drivers/mtd/nand/raw/mxic_nand.c 173 */;
}
