cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/spi/spi-fsl-qspi.c 992 */;
	const struct dev_pm_ops cocci_id/* drivers/spi/spi-fsl-qspi.c 987 */;
	const struct of_device_id cocci_id/* drivers/spi/spi-fsl-qspi.c 976 */[];
	struct resource *cocci_id/* drivers/spi/spi-fsl-qspi.c 848 */;
	struct device_node *cocci_id/* drivers/spi/spi-fsl-qspi.c 847 */;
	struct spi_controller *cocci_id/* drivers/spi/spi-fsl-qspi.c 845 */;
	struct platform_device *cocci_id/* drivers/spi/spi-fsl-qspi.c 843 */;
	const struct spi_controller_mem_ops cocci_id/* drivers/spi/spi-fsl-qspi.c 836 */;
	struct device *cocci_id/* drivers/spi/spi-fsl-qspi.c 813 */;
	const char *cocci_id/* drivers/spi/spi-fsl-qspi.c 810 */;
	u32 cocci_id/* drivers/spi/spi-fsl-qspi.c 724 */;
	void __iomem *cocci_id/* drivers/spi/spi-fsl-qspi.c 723 */;
	struct fsl_qspi *cocci_id/* drivers/spi/spi-fsl-qspi.c 706 */;
	struct spi_mem_op *cocci_id/* drivers/spi/spi-fsl-qspi.c 704 */;
	struct spi_mem *cocci_id/* drivers/spi/spi-fsl-qspi.c 704 */;
	int cocci_id/* drivers/spi/spi-fsl-qspi.c 704 */;
	const struct spi_mem_op *cocci_id/* drivers/spi/spi-fsl-qspi.c 605 */;
	u8 *cocci_id/* drivers/spi/spi-fsl-qspi.c 589 */;
	unsigned long cocci_id/* drivers/spi/spi-fsl-qspi.c 528 */;
	struct spi_device *cocci_id/* drivers/spi/spi-fsl-qspi.c 526 */;
	void cocci_id/* drivers/spi/spi-fsl-qspi.c 492 */;
	u32 cocci_id/* drivers/spi/spi-fsl-qspi.c 420 */[4];
	bool cocci_id/* drivers/spi/spi-fsl-qspi.c 368 */;
	u8 cocci_id/* drivers/spi/spi-fsl-qspi.c 356 */;
	irqreturn_t cocci_id/* drivers/spi/spi-fsl-qspi.c 340 */;
	void *cocci_id/* drivers/spi/spi-fsl-qspi.c 340 */;
	struct fsl_qspi {
		void __iomem *iobase;
		void __iomem *ahb_addr;
		u32 memmap_phy;
		struct clk *clk,*clk_en;
		struct device *dev;
		struct completion c;
		const struct fsl_qspi_devtype_data *devtype_data;
		struct mutex lock;
		struct pm_qos_request pm_qos_req;
		int selected;
	} cocci_id/* drivers/spi/spi-fsl-qspi.c 265 */;
	const struct fsl_qspi_devtype_data cocci_id/* drivers/spi/spi-fsl-qspi.c 218 */;
	struct fsl_qspi_devtype_data {
		unsigned int rxfifo;
		unsigned int txfifo;
		int invalid_mstrid;
		unsigned int ahb_buf_size;
		unsigned int quirks;
		bool little_endian;
	} cocci_id/* drivers/spi/spi-fsl-qspi.c 200 */;
}
