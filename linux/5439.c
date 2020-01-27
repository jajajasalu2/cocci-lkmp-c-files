cocci_test_suite() {
	struct resource *cocci_id/* drivers/spi/spi-iproc-qspi.c 97 */;
	struct bcm_qspi_soc_intc *cocci_id/* drivers/spi/spi-iproc-qspi.c 96 */;
	struct bcm_iproc_intc *cocci_id/* drivers/spi/spi-iproc-qspi.c 95 */;
	struct device *cocci_id/* drivers/spi/spi-iproc-qspi.c 94 */;
	struct platform_device *cocci_id/* drivers/spi/spi-iproc-qspi.c 92 */;
	int cocci_id/* drivers/spi/spi-iproc-qspi.c 92 */;
	unsigned long cocci_id/* drivers/spi/spi-iproc-qspi.c 76 */;
	bool cocci_id/* drivers/spi/spi-iproc-qspi.c 69 */;
	void cocci_id/* drivers/spi/spi-iproc-qspi.c 54 */;
	void __iomem *cocci_id/* drivers/spi/spi-iproc-qspi.c 33 */;
	struct bcm_iproc_intc cocci_id/* drivers/spi/spi-iproc-qspi.c 32 */;
	u32 cocci_id/* drivers/spi/spi-iproc-qspi.c 29 */;
	struct bcm_iproc_intc {
		struct bcm_qspi_soc_intc soc_intc;
		struct platform_device *pdev;
		void __iomem *int_reg;
		void __iomem *int_status_reg;
		spinlock_t soclock;
		bool big_endian;
	} cocci_id/* drivers/spi/spi-iproc-qspi.c 20 */;
	struct platform_driver cocci_id/* drivers/spi/spi-iproc-qspi.c 142 */;
	const struct of_device_id cocci_id/* drivers/spi/spi-iproc-qspi.c 135 */[];
}
