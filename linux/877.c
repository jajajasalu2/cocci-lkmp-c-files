cocci_test_suite() {
	u32 cocci_id/* drivers/mtd/nand/raw/fsl_upm.c 80 */;
	unsigned int cocci_id/* drivers/mtd/nand/raw/fsl_upm.c 77 */;
	void cocci_id/* drivers/mtd/nand/raw/fsl_upm.c 77 */;
	struct nand_chip *cocci_id/* drivers/mtd/nand/raw/fsl_upm.c 51 */;
	struct fsl_upm_nand cocci_id/* drivers/mtd/nand/raw/fsl_upm.c 47 */;
	struct platform_driver cocci_id/* drivers/mtd/nand/raw/fsl_upm.c 343 */;
	const struct of_device_id cocci_id/* drivers/mtd/nand/raw/fsl_upm.c 337 */[];
	struct fsl_upm_nand {
		struct device *dev;
		struct nand_chip chip;
		int last_ctrl;
		struct mtd_partition *parts;
		struct fsl_upm upm;
		uint8_t upm_addr_offset;
		uint8_t upm_cmd_offset;
		void __iomem *io_base;
		int rnb_gpio[NAND_MAX_CHIPS];
		uint32_t mchip_offsets[NAND_MAX_CHIPS];
		uint32_t mchip_count;
		uint32_t mchip_number;
		int chip_delay;
		uint32_t wait_flags;
	} cocci_id/* drivers/mtd/nand/raw/fsl_upm.c 28 */;
	uint32_t cocci_id/* drivers/mtd/nand/raw/fsl_upm.c 228 */;
	const __be32 *cocci_id/* drivers/mtd/nand/raw/fsl_upm.c 204 */;
	struct resource cocci_id/* drivers/mtd/nand/raw/fsl_upm.c 203 */;
	struct platform_device *cocci_id/* drivers/mtd/nand/raw/fsl_upm.c 200 */;
	u64 cocci_id/* drivers/mtd/nand/raw/fsl_upm.c 181 */;
	struct device_node *cocci_id/* drivers/mtd/nand/raw/fsl_upm.c 157 */;
	struct mtd_info *cocci_id/* drivers/mtd/nand/raw/fsl_upm.c 155 */;
	const struct resource *cocci_id/* drivers/mtd/nand/raw/fsl_upm.c 153 */;
	const struct device_node *cocci_id/* drivers/mtd/nand/raw/fsl_upm.c 152 */;
	struct fsl_upm_nand *cocci_id/* drivers/mtd/nand/raw/fsl_upm.c 151 */;
	int cocci_id/* drivers/mtd/nand/raw/fsl_upm.c 151 */;
	const uint8_t *cocci_id/* drivers/mtd/nand/raw/fsl_upm.c 137 */;
	uint8_t *cocci_id/* drivers/mtd/nand/raw/fsl_upm.c 128 */;
	uint8_t cocci_id/* drivers/mtd/nand/raw/fsl_upm.c 121 */;
}
