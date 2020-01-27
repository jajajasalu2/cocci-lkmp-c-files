cocci_test_suite() {
	u32 cocci_id/* drivers/spi/spi-ath79.c 74 */;
	struct ath79_spi *cocci_id/* drivers/spi/spi-ath79.c 72 */;
	struct spi_device *cocci_id/* drivers/spi/spi-ath79.c 70 */;
	int cocci_id/* drivers/spi/spi-ath79.c 70 */;
	void cocci_id/* drivers/spi/spi-ath79.c 70 */;
	unsigned int cocci_id/* drivers/spi/spi-ath79.c 64 */;
	struct ath79_spi {
		struct spi_bitbang bitbang;
		u32 ioc_base;
		u32 reg_ctrl;
		void __iomem *base;
		struct clk *clk;
		unsigned int rrw_delay;
	} cocci_id/* drivers/spi/spi-ath79.c 40 */;
	struct platform_driver cocci_id/* drivers/spi/spi-ath79.c 237 */;
	const struct of_device_id cocci_id/* drivers/spi/spi-ath79.c 231 */[];
	unsigned long cocci_id/* drivers/spi/spi-ath79.c 142 */;
	struct ath79_spi_platform_data *cocci_id/* drivers/spi/spi-ath79.c 141 */;
	struct spi_master *cocci_id/* drivers/spi/spi-ath79.c 139 */;
	struct platform_device *cocci_id/* drivers/spi/spi-ath79.c 137 */;
	u8 cocci_id/* drivers/spi/spi-ath79.c 109 */;
	unsigned cocci_id/* drivers/spi/spi-ath79.c 109 */;
}
