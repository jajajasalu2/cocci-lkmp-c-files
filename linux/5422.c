cocci_test_suite() {
	struct spi_transfer *cocci_id/* drivers/spi/spi-oc-tiny.c 80 */;
	int cocci_id/* drivers/spi/spi-oc-tiny.c 69 */;
	void cocci_id/* drivers/spi/spi-oc-tiny.c 69 */;
	struct tiny_spi *cocci_id/* drivers/spi/spi-oc-tiny.c 64 */;
	struct spi_device *cocci_id/* drivers/spi/spi-oc-tiny.c 62 */;
	unsigned int cocci_id/* drivers/spi/spi-oc-tiny.c 62 */;
	struct tiny_spi {
		struct spi_bitbang bitbang;
		struct completion done;
		void __iomem *base;
		int irq;
		unsigned int freq;
		unsigned int baudwidth;
		unsigned int baud;
		unsigned int speed_hz;
		unsigned int mode;
		unsigned int len;
		unsigned int txc,rxc;
		const u8 *txp;
		u8 *rxp;
		int gpio_cs_count;
		int *gpio_cs;
	} cocci_id/* drivers/spi/spi-oc-tiny.c 37 */;
	struct platform_driver cocci_id/* drivers/spi/spi-oc-tiny.c 340 */;
	const struct of_device_id cocci_id/* drivers/spi/spi-oc-tiny.c 333 */[];
	struct tiny_spi cocci_id/* drivers/spi/spi-oc-tiny.c 246 */;
	struct spi_master *cocci_id/* drivers/spi/spi-oc-tiny.c 242 */;
	struct tiny_spi_platform_data *cocci_id/* drivers/spi/spi-oc-tiny.c 240 */;
	u32 cocci_id/* drivers/spi/spi-oc-tiny.c 207 */;
	struct device_node *cocci_id/* drivers/spi/spi-oc-tiny.c 205 */;
	struct platform_device *cocci_id/* drivers/spi/spi-oc-tiny.c 202 */;
	irqreturn_t cocci_id/* drivers/spi/spi-oc-tiny.c 171 */;
	void *cocci_id/* drivers/spi/spi-oc-tiny.c 171 */;
	u8 *cocci_id/* drivers/spi/spi-oc-tiny.c 124 */;
	const u8 *cocci_id/* drivers/spi/spi-oc-tiny.c 123 */;
}
