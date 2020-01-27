cocci_test_suite() {
	u16 cocci_id/* drivers/spi/spi-bitbang.c 98 */;
	u16 *cocci_id/* drivers/spi/spi-bitbang.c 95 */;
	const u16 *cocci_id/* drivers/spi/spi-bitbang.c 94 */;
	struct spi_transfer *cocci_id/* drivers/spi/spi-bitbang.c 89 */;
	u32 (*cocci_id/* drivers/spi/spi-bitbang.c 84 */)(struct spi_device *spi,
							  unsigned nsecs,
							  u32 word, u8 bits,
							  unsigned flags);
	struct spi_device *cocci_id/* drivers/spi/spi-bitbang.c 83 */;
	unsigned cocci_id/* drivers/spi/spi-bitbang.c 82 */;
	u8 cocci_id/* drivers/spi/spi-bitbang.c 70 */;
	u8 *cocci_id/* drivers/spi/spi-bitbang.c 67 */;
	const u8 *cocci_id/* drivers/spi/spi-bitbang.c 66 */;
	struct spi_bitbang_cs {
		unsigned nsecs;
		u32 (*txrx_word)(struct spi_device *spi, unsigned nsecs,
				 u32 word, u8 bits, unsigned flags);
		unsigned (*txrx_bufs)(struct spi_device *,
				      u32 (*txrx_word)(struct spi_device *spi, unsigned nsecs, u32 word, u8 bits, unsigned flags),
				      unsigned, struct spi_transfer *,
				      unsigned);
	} cocci_id/* drivers/spi/spi-bitbang.c 40 */;
	struct spi_master *cocci_id/* drivers/spi/spi-bitbang.c 331 */;
	bool cocci_id/* drivers/spi/spi-bitbang.c 311 */;
	struct spi_bitbang *cocci_id/* drivers/spi/spi-bitbang.c 224 */;
	struct spi_bitbang_cs *cocci_id/* drivers/spi/spi-bitbang.c 222 */;
	int cocci_id/* drivers/spi/spi-bitbang.c 220 */;
	void cocci_id/* drivers/spi/spi-bitbang.c 214 */;
	u32 cocci_id/* drivers/spi/spi-bitbang.c 126 */;
	u32 *cocci_id/* drivers/spi/spi-bitbang.c 123 */;
	const u32 *cocci_id/* drivers/spi/spi-bitbang.c 122 */;
}
