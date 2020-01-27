cocci_test_suite() {
	u32 cocci_id/* drivers/media/rc/ir-spi.c 95 */;
	struct rc_dev *cocci_id/* drivers/media/rc/ir-spi.c 95 */;
	u16 cocci_id/* drivers/media/rc/ir-spi.c 47 */;
	struct spi_transfer cocci_id/* drivers/media/rc/ir-spi.c 41 */;
	unsigned int *cocci_id/* drivers/media/rc/ir-spi.c 35 */;
	unsigned int cocci_id/* drivers/media/rc/ir-spi.c 35 */;
	struct ir_spi_data {
		u32 freq;
		bool negated;
		u16 tx_buf[IR_SPI_MAX_BUFSIZE];
		u16 pulse;
		u16 space;
		struct rc_dev *rc;
		struct spi_device *spi;
		struct regulator *regulator;
	} cocci_id/* drivers/media/rc/ir-spi.c 21 */;
	struct spi_driver cocci_id/* drivers/media/rc/ir-spi.c 166 */;
	const struct of_device_id cocci_id/* drivers/media/rc/ir-spi.c 160 */[];
	struct ir_spi_data *cocci_id/* drivers/media/rc/ir-spi.c 116 */;
	u8 cocci_id/* drivers/media/rc/ir-spi.c 115 */;
	struct spi_device *cocci_id/* drivers/media/rc/ir-spi.c 112 */;
	int cocci_id/* drivers/media/rc/ir-spi.c 112 */;
}
