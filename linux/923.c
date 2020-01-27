cocci_test_suite() {
	struct elm_info {
		struct device *dev;
		void __iomem *elm_base;
		struct completion elm_completion;
		struct list_head list;
		enum bch_ecc bch_type;
		struct elm_registers elm_regs;
		int ecc_steps;
		int ecc_syndrome_size;
	} cocci_id/* drivers/mtd/nand/raw/omap_elm.c 72 */;
	struct elm_registers {
		u32 elm_irqenable;
		u32 elm_sysconfig;
		u32 elm_location_config;
		u32 elm_page_ctrl;
		u32 elm_syndrome_fragment_6[ERROR_VECTOR_MAX];
		u32 elm_syndrome_fragment_5[ERROR_VECTOR_MAX];
		u32 elm_syndrome_fragment_4[ERROR_VECTOR_MAX];
		u32 elm_syndrome_fragment_3[ERROR_VECTOR_MAX];
		u32 elm_syndrome_fragment_2[ERROR_VECTOR_MAX];
		u32 elm_syndrome_fragment_1[ERROR_VECTOR_MAX];
		u32 elm_syndrome_fragment_0[ERROR_VECTOR_MAX];
	} cocci_id/* drivers/mtd/nand/raw/omap_elm.c 58 */;
	struct platform_driver cocci_id/* drivers/mtd/nand/raw/omap_elm.c 557 */;
	const struct of_device_id cocci_id/* drivers/mtd/nand/raw/omap_elm.c 550 */[];
	struct elm_registers *cocci_id/* drivers/mtd/nand/raw/omap_elm.c 488 */;
	struct resource *cocci_id/* drivers/mtd/nand/raw/omap_elm.c 384 */;
	struct platform_device *cocci_id/* drivers/mtd/nand/raw/omap_elm.c 381 */;
	irqreturn_t cocci_id/* drivers/mtd/nand/raw/omap_elm.c 363 */;
	void *cocci_id/* drivers/mtd/nand/raw/omap_elm.c 363 */;
	struct elm_errorvec *cocci_id/* drivers/mtd/nand/raw/omap_elm.c 337 */;
	u8 *cocci_id/* drivers/mtd/nand/raw/omap_elm.c 336 */;
	u32 *cocci_id/* drivers/mtd/nand/raw/omap_elm.c 177 */;
	bool cocci_id/* drivers/mtd/nand/raw/omap_elm.c 140 */;
	void cocci_id/* drivers/mtd/nand/raw/omap_elm.c 139 */;
	struct elm_info *cocci_id/* drivers/mtd/nand/raw/omap_elm.c 104 */;
	u32 cocci_id/* drivers/mtd/nand/raw/omap_elm.c 103 */;
	enum bch_ecc cocci_id/* drivers/mtd/nand/raw/omap_elm.c 100 */;
	struct device *cocci_id/* drivers/mtd/nand/raw/omap_elm.c 100 */;
	int cocci_id/* drivers/mtd/nand/raw/omap_elm.c 100 */;
}
