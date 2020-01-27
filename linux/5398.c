cocci_test_suite() {
	struct resource *cocci_id/* drivers/spi/spi-nxp-fspi.c 948 */;
	struct device_node *cocci_id/* drivers/spi/spi-nxp-fspi.c 947 */;
	struct spi_controller *cocci_id/* drivers/spi/spi-nxp-fspi.c 945 */;
	struct platform_device *cocci_id/* drivers/spi/spi-nxp-fspi.c 943 */;
	const struct spi_controller_mem_ops cocci_id/* drivers/spi/spi-nxp-fspi.c 936 */;
	struct device *cocci_id/* drivers/spi/spi-nxp-fspi.c 917 */;
	const char *cocci_id/* drivers/spi/spi-nxp-fspi.c 914 */;
	struct spi_mem_op *cocci_id/* drivers/spi/spi-nxp-fspi.c 825 */;
	struct spi_mem *cocci_id/* drivers/spi/spi-nxp-fspi.c 825 */;
	const struct spi_mem_op *cocci_id/* drivers/spi/spi-nxp-fspi.c 747 */;
	u32 *cocci_id/* drivers/spi/spi-nxp-fspi.c 674 */;
	u8 *cocci_id/* drivers/spi/spi-nxp-fspi.c 657 */;
	uint64_t cocci_id/* drivers/spi/spi-nxp-fspi.c 608 */;
	unsigned long cocci_id/* drivers/spi/spi-nxp-fspi.c 606 */;
	struct spi_device *cocci_id/* drivers/spi/spi-nxp-fspi.c 604 */;
	u32 cocci_id/* drivers/spi/spi-nxp-fspi.c 486 */[4];
	bool cocci_id/* drivers/spi/spi-nxp-fspi.c 448 */;
	int cocci_id/* drivers/spi/spi-nxp-fspi.c 446 */;
	u8 cocci_id/* drivers/spi/spi-nxp-fspi.c 379 */;
	irqreturn_t cocci_id/* drivers/spi/spi-nxp-fspi.c 364 */;
	u32 cocci_id/* drivers/spi/spi-nxp-fspi.c 356 */;
	struct nxp_fspi *cocci_id/* drivers/spi/spi-nxp-fspi.c 356 */;
	void __iomem *cocci_id/* drivers/spi/spi-nxp-fspi.c 356 */;
	void cocci_id/* drivers/spi/spi-nxp-fspi.c 348 */;
	struct nxp_fspi {
		void __iomem *iobase;
		void __iomem *ahb_addr;
		u32 memmap_phy;
		u32 memmap_phy_size;
		struct clk *clk,*clk_en;
		struct device *dev;
		struct completion c;
		const struct nxp_fspi_devtype_data *devtype_data;
		struct mutex lock;
		struct pm_qos_request pm_qos_req;
		int selected;
	} cocci_id/* drivers/spi/spi-nxp-fspi.c 327 */;
	const struct nxp_fspi_devtype_data cocci_id/* drivers/spi/spi-nxp-fspi.c 319 */;
	struct nxp_fspi_devtype_data {
		unsigned int rxfifo;
		unsigned int txfifo;
		unsigned int ahb_buf_size;
		unsigned int quirks;
		bool little_endian;
	} cocci_id/* drivers/spi/spi-nxp-fspi.c 311 */;
	struct platform_driver cocci_id/* drivers/spi/spi-nxp-fspi.c 1088 */;
	const struct dev_pm_ops cocci_id/* drivers/spi/spi-nxp-fspi.c 1083 */;
	void *cocci_id/* drivers/spi/spi-nxp-fspi.c 1078 */;
	const struct of_device_id cocci_id/* drivers/spi/spi-nxp-fspi.c 1077 */[];
}