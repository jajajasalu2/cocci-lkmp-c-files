cocci_test_suite() {
	const struct nand_controller_ops cocci_id/* drivers/mtd/nand/raw/s3c2410.c 999 */;
	const struct mtd_ooblayout_ops cocci_id/* drivers/mtd/nand/raw/s3c2410.c 99 */;
	struct nand_chip *cocci_id/* drivers/mtd/nand/raw/s3c2410.c 926 */;
	void __iomem *cocci_id/* drivers/mtd/nand/raw/s3c2410.c 850 */;
	struct device_node *cocci_id/* drivers/mtd/nand/raw/s3c2410.c 848 */;
	const struct nand_sdr_timings *cocci_id/* drivers/mtd/nand/raw/s3c2410.c 816 */;
	const struct nand_data_interface *cocci_id/* drivers/mtd/nand/raw/s3c2410.c 811 */;
	struct mtd_info *cocci_id/* drivers/mtd/nand/raw/s3c2410.c 799 */;
	struct s3c2410_nand_set *cocci_id/* drivers/mtd/nand/raw/s3c2410.c 796 */;
	struct s3c2410_nand_mtd *cocci_id/* drivers/mtd/nand/raw/s3c2410.c 795 */;
	struct mtd_oob_region *cocci_id/* drivers/mtd/nand/raw/s3c2410.c 76 */;
	struct s3c2410_nand_info cocci_id/* drivers/mtd/nand/raw/s3c2410.c 723 */;
	void *cocci_id/* drivers/mtd/nand/raw/s3c2410.c 718 */;
	unsigned long cocci_id/* drivers/mtd/nand/raw/s3c2410.c 718 */;
	struct notifier_block *cocci_id/* drivers/mtd/nand/raw/s3c2410.c 717 */;
	const u_char *cocci_id/* drivers/mtd/nand/raw/s3c2410.c 619 */;
	u_char *cocci_id/* drivers/mtd/nand/raw/s3c2410.c 619 */;
	unsigned int cocci_id/* drivers/mtd/nand/raw/s3c2410.c 511 */;
	struct s3c2410_platform_nand *cocci_id/* drivers/mtd/nand/raw/s3c2410.c 290 */;
	enum s3c_nand_clk_state cocci_id/* drivers/mtd/nand/raw/s3c2410.c 228 */;
	void cocci_id/* drivers/mtd/nand/raw/s3c2410.c 227 */;
	struct s3c2410_nand_info *cocci_id/* drivers/mtd/nand/raw/s3c2410.c 213 */;
	int cocci_id/* drivers/mtd/nand/raw/s3c2410.c 213 */;
	struct s3c2410_nand_mtd cocci_id/* drivers/mtd/nand/raw/s3c2410.c 194 */;
	const struct s3c24XX_nand_devtype_data cocci_id/* drivers/mtd/nand/raw/s3c2410.c 178 */;
	struct s3c24XX_nand_devtype_data {
		enum s3c_cpu_type type;
	} cocci_id/* drivers/mtd/nand/raw/s3c2410.c 174 */;
	struct s3c2410_nand_info {
		struct nand_controller controller;
		struct s3c2410_nand_mtd *mtds;
		struct s3c2410_platform_nand *platform;
		struct device *device;
		struct clk *clk;
		void __iomem *regs;
		void __iomem *sel_reg;
		int sel_bit;
		int mtd_count;
		unsigned long save_sel;
		unsigned long clk_rate;
		enum s3c_nand_clk_state clk_state;
		enum s3c_cpu_type cpu_type;
#ifdef CONFIG_ARM_S3C24XX_CPUFREQ
		struct notifier_block freq_transition;
#endif
	} cocci_id/* drivers/mtd/nand/raw/s3c2410.c 150 */;
	struct platform_driver cocci_id/* drivers/mtd/nand/raw/s3c2410.c 1277 */;
	enum s3c_nand_clk_state{CLOCK_DISABLE=0, CLOCK_ENABLE, CLOCK_SUSPEND,} cocci_id/* drivers/mtd/nand/raw/s3c2410.c 127 */;
	const struct platform_device_id cocci_id/* drivers/mtd/nand/raw/s3c2410.c 1258 */[];
	enum s3c_cpu_type{TYPE_S3C2410, TYPE_S3C2412, TYPE_S3C2440,} cocci_id/* drivers/mtd/nand/raw/s3c2410.c 121 */;
	pm_message_t cocci_id/* drivers/mtd/nand/raw/s3c2410.c 1209 */;
	struct s3c2410_nand_mtd {
		struct nand_chip chip;
		struct s3c2410_nand_set *set;
		struct s3c2410_nand_info *info;
	} cocci_id/* drivers/mtd/nand/raw/s3c2410.c 115 */;
	struct resource *cocci_id/* drivers/mtd/nand/raw/s3c2410.c 1086 */;
	struct platform_device *cocci_id/* drivers/mtd/nand/raw/s3c2410.c 1080 */;
	char *cocci_id/* drivers/mtd/nand/raw/s3c2410.c 1052 */;
	const struct s3c24XX_nand_devtype_data *cocci_id/* drivers/mtd/nand/raw/s3c2410.c 1022 */;
	const struct of_device_id cocci_id/* drivers/mtd/nand/raw/s3c2410.c 1004 */[];
}
