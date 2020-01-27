cocci_test_suite() {
	unsigned int cocci_id/* drivers/spi/spi-npcm-pspi.c 68 */;
	struct platform_driver cocci_id/* drivers/spi/spi-npcm-pspi.c 479 */;
	const struct of_device_id cocci_id/* drivers/spi/spi-npcm-pspi.c 473 */[];
	struct device_node *cocci_id/* drivers/spi/spi-npcm-pspi.c 344 */;
	unsigned long cocci_id/* drivers/spi/spi-npcm-pspi.c 343 */;
	struct platform_device *cocci_id/* drivers/spi/spi-npcm-pspi.c 339 */;
	u8 cocci_id/* drivers/spi/spi-npcm-pspi.c 296 */;
	irqreturn_t cocci_id/* drivers/spi/spi-npcm-pspi.c 293 */;
	void *cocci_id/* drivers/spi/spi-npcm-pspi.c 293 */;
	int cocci_id/* drivers/spi/spi-npcm-pspi.c 293 */;
	struct spi_master *cocci_id/* drivers/spi/spi-npcm-pspi.c 268 */;
	struct npcm_pspi {
		struct completion xfer_done;
		struct regmap *rst_regmap;
		struct spi_master *master;
		unsigned int tx_bytes;
		unsigned int rx_bytes;
		void __iomem *base;
		bool is_save_param;
		u8 bits_per_word;
		const u8 *tx_buf;
		struct clk *clk;
		u32 speed_hz;
		u8 *rx_buf;
		u16 mode;
		u32 id;
	} cocci_id/* drivers/spi/spi-npcm-pspi.c 21 */;
	struct spi_transfer *cocci_id/* drivers/spi/spi-npcm-pspi.c 167 */;
	u32 cocci_id/* drivers/spi/spi-npcm-pspi.c 155 */;
	struct spi_device *cocci_id/* drivers/spi/spi-npcm-pspi.c 109 */;
	u16 cocci_id/* drivers/spi/spi-npcm-pspi.c 102 */;
	struct npcm_pspi *cocci_id/* drivers/spi/spi-npcm-pspi.c 100 */;
	void cocci_id/* drivers/spi/spi-npcm-pspi.c 100 */;
}
