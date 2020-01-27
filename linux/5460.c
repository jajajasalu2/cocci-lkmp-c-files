cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/spi/spi-sprd-adi.c 563 */;
	const struct of_device_id cocci_id/* drivers/spi/spi-sprd-adi.c 555 */[];
	unsigned long cocci_id/* drivers/spi/spi-sprd-adi.c 489 */;
	struct sprd_adi cocci_id/* drivers/spi/spi-sprd-adi.c 475 */;
	struct resource *cocci_id/* drivers/spi/spi-sprd-adi.c 463 */;
	struct spi_controller *cocci_id/* drivers/spi/spi-sprd-adi.c 461 */;
	struct platform_device *cocci_id/* drivers/spi/spi-sprd-adi.c 458 */;
	const __be32 *cocci_id/* drivers/spi/spi-sprd-adi.c 414 */;
	struct device_node *cocci_id/* drivers/spi/spi-sprd-adi.c 412 */;
	void cocci_id/* drivers/spi/spi-sprd-adi.c 410 */;
	void *cocci_id/* drivers/spi/spi-sprd-adi.c 333 */;
	struct notifier_block *cocci_id/* drivers/spi/spi-sprd-adi.c 332 */;
	struct spi_transfer *cocci_id/* drivers/spi/spi-sprd-adi.c 277 */;
	struct spi_device *cocci_id/* drivers/spi/spi-sprd-adi.c 276 */;
	void __iomem *cocci_id/* drivers/spi/spi-sprd-adi.c 257 */;
	u32 *cocci_id/* drivers/spi/spi-sprd-adi.c 164 */;
	u32 cocci_id/* drivers/spi/spi-sprd-adi.c 120 */;
	struct sprd_adi *cocci_id/* drivers/spi/spi-sprd-adi.c 120 */;
	int cocci_id/* drivers/spi/spi-sprd-adi.c 120 */;
	struct sprd_adi {
		struct spi_controller *ctlr;
		struct device *dev;
		void __iomem *base;
		struct hwspinlock *hwlock;
		unsigned long slave_vbase;
		unsigned long slave_pbase;
		struct notifier_block restart_handler;
	} cocci_id/* drivers/spi/spi-sprd-adi.c 110 */;
}
