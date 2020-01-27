cocci_test_suite() {
	struct mt7621_spi {
		struct spi_controller *master;
		void __iomem *base;
		unsigned int sys_freq;
		unsigned int speed;
		struct clk *clk;
		int pending_write;
	} cocci_id/* drivers/spi/spi-mt7621.c 53 */;
	struct platform_driver cocci_id/* drivers/spi/spi-mt7621.c 401 */;
	struct clk *cocci_id/* drivers/spi/spi-mt7621.c 331 */;
	void __iomem *cocci_id/* drivers/spi/spi-mt7621.c 329 */;
	struct spi_controller *cocci_id/* drivers/spi/spi-mt7621.c 327 */;
	const struct of_device_id *cocci_id/* drivers/spi/spi-mt7621.c 326 */;
	struct platform_device *cocci_id/* drivers/spi/spi-mt7621.c 324 */;
	const struct of_device_id cocci_id/* drivers/spi/spi-mt7621.c 318 */[];
	struct spi_transfer *cocci_id/* drivers/spi/spi-mt7621.c 253 */;
	struct spi_message *cocci_id/* drivers/spi/spi-mt7621.c 248 */;
	const u8 *cocci_id/* drivers/spi/spi-mt7621.c 204 */;
	struct mt7621_spi *cocci_id/* drivers/spi/spi-mt7621.c 198 */;
	void cocci_id/* drivers/spi/spi-mt7621.c 198 */;
	u8 *cocci_id/* drivers/spi/spi-mt7621.c 157 */;
	u32 cocci_id/* drivers/spi/spi-mt7621.c 104 */;
	struct spi_device *cocci_id/* drivers/spi/spi-mt7621.c 101 */;
	unsigned int cocci_id/* drivers/spi/spi-mt7621.c 101 */;
	int cocci_id/* drivers/spi/spi-mt7621.c 101 */;
}
