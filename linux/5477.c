cocci_test_suite() {
	struct orion_spi {
		struct spi_master *master;
		void __iomem *base;
		struct clk *clk;
		struct clk *axi_clk;
		const struct orion_spi_dev *devdata;
		int unused_hw_gpio;
		struct orion_child_options child[ORION_NUM_CHIPSELECTS];
	} cocci_id/* drivers/spi/spi-orion.c 95 */;
	struct orion_child_options {
		struct orion_direct_acc direct_access;
	} cocci_id/* drivers/spi/spi-orion.c 91 */;
	struct orion_direct_acc {
		void __iomem *vaddr;
		u32 size;
	} cocci_id/* drivers/spi/spi-orion.c 86 */;
	struct platform_driver cocci_id/* drivers/spi/spi-orion.c 837 */;
	const struct dev_pm_ops cocci_id/* drivers/spi/spi-orion.c 831 */;
	struct device *cocci_id/* drivers/spi/spi-orion.c 820 */;
	struct orion_spi_dev {
		enum orion_spi_type typ;
		unsigned long max_hz;
		unsigned int min_divisor;
		unsigned int max_divisor;
		u32 prescale_mask;
		bool is_errata_50mhz_ac;
	} cocci_id/* drivers/spi/spi-orion.c 72 */;
	char *cocci_id/* drivers/spi/spi-orion.c 708 */;
	struct orion_direct_acc *cocci_id/* drivers/spi/spi-orion.c 685 */;
	enum orion_spi_type{ORION_SPI, ARMADA_SPI,} cocci_id/* drivers/spi/spi-orion.c 67 */;
	struct device_node *cocci_id/* drivers/spi/spi-orion.c 599 */;
	unsigned long cocci_id/* drivers/spi/spi-orion.c 597 */;
	struct resource *cocci_id/* drivers/spi/spi-orion.c 596 */;
	struct spi_master *cocci_id/* drivers/spi/spi-orion.c 594 */;
	const struct of_device_id *cocci_id/* drivers/spi/spi-orion.c 592 */;
	struct platform_device *cocci_id/* drivers/spi/spi-orion.c 590 */;
	const struct of_device_id cocci_id/* drivers/spi/spi-orion.c 560 */[];
	const struct orion_spi_dev cocci_id/* drivers/spi/spi-orion.c 530 */;
	u16 *cocci_id/* drivers/spi/spi-orion.c 474 */;
	const u16 *cocci_id/* drivers/spi/spi-orion.c 473 */;
	u8 *cocci_id/* drivers/spi/spi-orion.c 464 */;
	const u8 *cocci_id/* drivers/spi/spi-orion.c 463 */;
	u32 *cocci_id/* drivers/spi/spi-orion.c 454 */;
	const u16 **cocci_id/* drivers/spi/spi-orion.c 395 */;
	u16 **cocci_id/* drivers/spi/spi-orion.c 395 */;
	const u8 **cocci_id/* drivers/spi/spi-orion.c 364 */;
	u8 **cocci_id/* drivers/spi/spi-orion.c 364 */;
	bool cocci_id/* drivers/spi/spi-orion.c 325 */;
	struct spi_transfer *cocci_id/* drivers/spi/spi-orion.c 291 */;
	struct orion_spi *cocci_id/* drivers/spi/spi-orion.c 256 */;
	u32 cocci_id/* drivers/spi/spi-orion.c 255 */;
	struct spi_device *cocci_id/* drivers/spi/spi-orion.c 253 */;
	unsigned int cocci_id/* drivers/spi/spi-orion.c 253 */;
	void cocci_id/* drivers/spi/spi-orion.c 252 */;
	unsigned cocci_id/* drivers/spi/spi-orion.c 159 */;
	const struct orion_spi_dev *cocci_id/* drivers/spi/spi-orion.c 140 */;
	int cocci_id/* drivers/spi/spi-orion.c 133 */;
	void __iomem *cocci_id/* drivers/spi/spi-orion.c 125 */;
}
