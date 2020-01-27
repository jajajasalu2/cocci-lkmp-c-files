cocci_test_suite() {
	struct spi_sh_data {
		void __iomem *addr;
		int irq;
		struct spi_master *master;
		struct list_head queue;
		struct work_struct ws;
		unsigned long cr1;
		wait_queue_head_t wait;
		spinlock_t lock;
		int width;
	} cocci_id/* drivers/spi/spi-sh.c 72 */;
	struct platform_driver cocci_id/* drivers/spi/spi-sh.c 505 */;
	struct spi_sh_data cocci_id/* drivers/spi/spi-sh.c 443 */;
	struct spi_master *cocci_id/* drivers/spi/spi-sh.c 428 */;
	struct resource *cocci_id/* drivers/spi/spi-sh.c 427 */;
	struct platform_device *cocci_id/* drivers/spi/spi-sh.c 425 */;
	irqreturn_t cocci_id/* drivers/spi/spi-sh.c 391 */;
	void *cocci_id/* drivers/spi/spi-sh.c 391 */;
	int cocci_id/* drivers/spi/spi-sh.c 391 */;
	struct spi_device *cocci_id/* drivers/spi/spi-sh.c 381 */;
	struct spi_message cocci_id/* drivers/spi/spi-sh.c 286 */;
	struct work_struct *cocci_id/* drivers/spi/spi-sh.c 274 */;
	unsigned char cocci_id/* drivers/spi/spi-sh.c 256 */;
	long cocci_id/* drivers/spi/spi-sh.c 225 */;
	unsigned char *cocci_id/* drivers/spi/spi-sh.c 224 */;
	struct spi_transfer *cocci_id/* drivers/spi/spi-sh.c 219 */;
	struct spi_message *cocci_id/* drivers/spi/spi-sh.c 218 */;
	struct spi_sh_data *cocci_id/* drivers/spi/spi-sh.c 123 */;
	void cocci_id/* drivers/spi/spi-sh.c 123 */;
	unsigned long cocci_id/* drivers/spi/spi-sh.c 113 */;
}
