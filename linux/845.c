cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/mtd/nand/onenand/samsung_mtd.c 992 */;
	const struct platform_device_id cocci_id/* drivers/mtd/nand/onenand/samsung_mtd.c 978 */[];
	const struct dev_pm_ops cocci_id/* drivers/mtd/nand/onenand/samsung_mtd.c 973 */;
	struct s3c_onenand cocci_id/* drivers/mtd/nand/onenand/samsung_mtd.c 850 */;
	struct onenand_chip cocci_id/* drivers/mtd/nand/onenand/samsung_mtd.c 845 */;
	struct mtd_info cocci_id/* drivers/mtd/nand/onenand/samsung_mtd.c 845 */;
	struct resource *cocci_id/* drivers/mtd/nand/onenand/samsung_mtd.c 839 */;
	struct onenand_platform_data *cocci_id/* drivers/mtd/nand/onenand/samsung_mtd.c 836 */;
	struct platform_device *cocci_id/* drivers/mtd/nand/onenand/samsung_mtd.c 834 */;
	struct device *cocci_id/* drivers/mtd/nand/onenand/samsung_mtd.c 729 */;
	unsigned long cocci_id/* drivers/mtd/nand/onenand/samsung_mtd.c 697 */;
	struct page *cocci_id/* drivers/mtd/nand/onenand/samsung_mtd.c 639 */;
	dma_addr_t cocci_id/* drivers/mtd/nand/onenand/samsung_mtd.c 583 */;
	irqreturn_t cocci_id/* drivers/mtd/nand/onenand/samsung_mtd.c 561 */;
	void *cocci_id/* drivers/mtd/nand/onenand/samsung_mtd.c 561 */;
	int (*cocci_id/* drivers/mtd/nand/onenand/samsung_mtd.c 515 */)(dma_addr_t dst,
									dma_addr_t src,
									size_t count,
									int direction);
	const unsigned char *cocci_id/* drivers/mtd/nand/onenand/samsung_mtd.c 505 */;
	size_t cocci_id/* drivers/mtd/nand/onenand/samsung_mtd.c 495 */;
	unsigned char *cocci_id/* drivers/mtd/nand/onenand/samsung_mtd.c 494 */;
	struct mtd_info *cocci_id/* drivers/mtd/nand/onenand/samsung_mtd.c 493 */;
	int cocci_id/* drivers/mtd/nand/onenand/samsung_mtd.c 493 */;
	struct onenand_chip *cocci_id/* drivers/mtd/nand/onenand/samsung_mtd.c 476 */;
	unsigned int *cocci_id/* drivers/mtd/nand/onenand/samsung_mtd.c 380 */;
	loff_t cocci_id/* drivers/mtd/nand/onenand/samsung_mtd.c 376 */;
	enum soc_type{TYPE_S3C6400, TYPE_S3C6410, TYPE_S5PC110,} cocci_id/* drivers/mtd/nand/onenand/samsung_mtd.c 27 */;
	void __iomem *cocci_id/* drivers/mtd/nand/onenand/samsung_mtd.c 216 */;
	unsigned short cocci_id/* drivers/mtd/nand/onenand/samsung_mtd.c 216 */;
	unsigned int cocci_id/* drivers/mtd/nand/onenand/samsung_mtd.c 184 */;
	unsigned cocci_id/* drivers/mtd/nand/onenand/samsung_mtd.c 179 */;
	void cocci_id/* drivers/mtd/nand/onenand/samsung_mtd.c 166 */;
	struct s3c_onenand *cocci_id/* drivers/mtd/nand/onenand/samsung_mtd.c 143 */;
	struct s3c_onenand {
		struct mtd_info *mtd;
		struct platform_device *pdev;
		enum soc_type type;
		void __iomem *base;
		void __iomem *ahb_addr;
		int bootram_command;
		void *page_buf;
		void *oob_buf;
		unsigned int (*mem_addr)(int fba, int fpa, int fsa);
		unsigned int (*cmd_map)(unsigned int type, unsigned int val);
		void __iomem *dma_addr;
		unsigned long phys_base;
		struct completion complete;
	} cocci_id/* drivers/mtd/nand/onenand/samsung_mtd.c 122 */;
}
