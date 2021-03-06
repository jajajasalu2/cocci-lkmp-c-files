cocci_test_suite() {
	struct nand_chip *cocci_id/* drivers/mtd/nand/raw/omap2.c 920 */;
	u32 *cocci_id/* drivers/mtd/nand/raw/omap2.c 761 */;
	u8 cocci_id/* drivers/mtd/nand/raw/omap2.c 756 */;
	u8 cocci_id/* drivers/mtd/nand/raw/omap2.c 755 */[24];
	u8 cocci_id/* drivers/mtd/nand/raw/omap2.c 753 */[8];
	uint cocci_id/* drivers/mtd/nand/raw/omap2.c 752 */;
	void cocci_id/* drivers/mtd/nand/raw/omap2.c 724 */;
	irqreturn_t cocci_id/* drivers/mtd/nand/raw/omap2.c 569 */;
	unsigned cocci_id/* drivers/mtd/nand/raw/omap2.c 463 */;
	struct scatterlist cocci_id/* drivers/mtd/nand/raw/omap2.c 461 */;
	enum dma_data_direction cocci_id/* drivers/mtd/nand/raw/omap2.c 459 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/mtd/nand/raw/omap2.c 458 */;
	struct completion *cocci_id/* drivers/mtd/nand/raw/omap2.c 444 */;
	void *cocci_id/* drivers/mtd/nand/raw/omap2.c 442 */;
	uint32_t cocci_id/* drivers/mtd/nand/raw/omap2.c 345 */;
	u16 *cocci_id/* drivers/mtd/nand/raw/omap2.c 321 */;
	struct platform_driver cocci_id/* drivers/mtd/nand/raw/omap2.c 2302 */;
	const struct of_device_id cocci_id/* drivers/mtd/nand/raw/omap2.c 2296 */[];
	struct resource *cocci_id/* drivers/mtd/nand/raw/omap2.c 2175 */;
	struct nand_controller cocci_id/* drivers/mtd/nand/raw/omap2.c 2166 */;
	const struct nand_controller_ops cocci_id/* drivers/mtd/nand/raw/omap2.c 2161 */;
	struct dma_slave_config cocci_id/* drivers/mtd/nand/raw/omap2.c 1947 */;
	dma_cap_mask_t cocci_id/* drivers/mtd/nand/raw/omap2.c 1919 */;
	const struct mtd_ooblayout_ops cocci_id/* drivers/mtd/nand/raw/omap2.c 1860 */;
	struct mtd_oob_region *cocci_id/* drivers/mtd/nand/raw/omap2.c 1817 */;
	struct omap_nand_info cocci_id/* drivers/mtd/nand/raw/omap2.c 178 */;
	const char *cocci_id/* drivers/mtd/nand/raw/omap2.c 1754 */;
	struct device *cocci_id/* drivers/mtd/nand/raw/omap2.c 1750 */;
	const char *const cocci_id/* drivers/mtd/nand/raw/omap2.c 1743 */[];
	struct platform_device *cocci_id/* drivers/mtd/nand/raw/omap2.c 1682 */;
	struct device_node *cocci_id/* drivers/mtd/nand/raw/omap2.c 1680 */;
	bool cocci_id/* drivers/mtd/nand/raw/omap2.c 1679 */;
	uint8_t *cocci_id/* drivers/mtd/nand/raw/omap2.c 1632 */;
	const u8 *cocci_id/* drivers/mtd/nand/raw/omap2.c 1564 */;
	const uint8_t *cocci_id/* drivers/mtd/nand/raw/omap2.c 1523 */;
	unsigned int cocci_id/* drivers/mtd/nand/raw/omap2.c 1504 */;
	struct omap_nand_info {
		struct nand_chip nand;
		struct platform_device *pdev;
		int gpmc_cs;
		bool dev_ready;
		enum nand_io xfer_type;
		int devsize;
		enum omap_ecc ecc_opt;
		struct device_node *elm_of_node;
		unsigned long phys_base;
		struct completion comp;
		struct dma_chan *dma;
		int gpmc_irq_fifo;
		int gpmc_irq_count;
		enum{OMAP_NAND_IO_READ=0, OMAP_NAND_IO_WRITE,} iomode;
		u_char *buf;
		int buf_len;
		struct gpmc_nand_regs reg;
		struct gpmc_nand_ops *ops;
		bool flash_bbt;
		struct device *elm_dev;
		struct gpio_desc *ready_gpiod;
	} cocci_id/* drivers/mtd/nand/raw/omap2.c 144 */;
	struct elm_errorvec cocci_id/* drivers/mtd/nand/raw/omap2.c 1360 */[ERROR_VECTOR_MAX];
	u_char cocci_id/* drivers/mtd/nand/raw/omap2.c 136 */[];
	struct nand_ecc_ctrl *cocci_id/* drivers/mtd/nand/raw/omap2.c 1356 */;
	u32 cocci_id/* drivers/mtd/nand/raw/omap2.c 1148 */;
	unsigned long cocci_id/* drivers/mtd/nand/raw/omap2.c 1147 */;
	u8 *cocci_id/* drivers/mtd/nand/raw/omap2.c 1146 */;
	struct gpmc_nand_regs *cocci_id/* drivers/mtd/nand/raw/omap2.c 1145 */;
	struct omap_nand_info *cocci_id/* drivers/mtd/nand/raw/omap2.c 1143 */;
	const u_char *cocci_id/* drivers/mtd/nand/raw/omap2.c 1141 */;
	u_char *cocci_id/* drivers/mtd/nand/raw/omap2.c 1141 */;
	struct mtd_info *cocci_id/* drivers/mtd/nand/raw/omap2.c 1140 */;
	int cocci_id/* drivers/mtd/nand/raw/omap2.c 1140 */;
	u8 cocci_id/* drivers/mtd/nand/raw/omap2.c 1126 */[];
	enum omap_ecc cocci_id/* drivers/mtd/nand/raw/omap2.c 1040 */;
	void __maybe_unused cocci_id/* drivers/mtd/nand/raw/omap2.c 1034 */;
}
