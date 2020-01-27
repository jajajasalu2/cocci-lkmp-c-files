cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/spi/spi-dln2.c 867 */;
	struct dln2_spi {
		struct platform_device *pdev;
		struct spi_master *master;
		u8 port;
		void *buf;
		u8 bpw;
		u32 speed;
		u16 mode;
		u8 cs;
	} cocci_id/* drivers/spi/spi-dln2.c 79 */;
	struct device *cocci_id/* drivers/spi/spi-dln2.c 683 */;
	struct dln2_platform_data *cocci_id/* drivers/spi/spi-dln2.c 682 */;
	struct platform_device *cocci_id/* drivers/spi/spi-dln2.c 678 */;
	struct spi_transfer *cocci_id/* drivers/spi/spi-dln2.c 653 */;
	struct spi_device *cocci_id/* drivers/spi/spi-dln2.c 595 */;
	struct spi_message *cocci_id/* drivers/spi/spi-dln2.c 591 */;
	struct spi_master *cocci_id/* drivers/spi/spi-dln2.c 590 */;
	struct {
		u8 port;
		__le16 size;
		u8 attr;
		u8 buf[DLN2_SPI_MAX_XFER_SIZE];
	}__packed *cocci_id/* drivers/spi/spi-dln2.c 492 */;
	struct {
		__le16 size;
		u8 buf[DLN2_SPI_MAX_XFER_SIZE];
	}__packed *cocci_id/* drivers/spi/spi-dln2.c 456 */;
	struct {
		u8 port;
		__le16 size;
		u8 attr;
	}__packed cocci_id/* drivers/spi/spi-dln2.c 451 */;
	__le32 *cocci_id/* drivers/spi/spi-dln2.c 404 */;
	u32 *cocci_id/* drivers/spi/spi-dln2.c 403 */;
	__le16 *cocci_id/* drivers/spi/spi-dln2.c 397 */;
	u16 *cocci_id/* drivers/spi/spi-dln2.c 396 */;
	u8 cocci_id/* drivers/spi/spi-dln2.c 388 */;
	u16 cocci_id/* drivers/spi/spi-dln2.c 388 */;
	const u8 *cocci_id/* drivers/spi/spi-dln2.c 388 */;
	u8 *cocci_id/* drivers/spi/spi-dln2.c 388 */;
	int cocci_id/* drivers/spi/spi-dln2.c 388 */;
	struct {
		u8 count;
		u8 frame_sizes[36];
	} *cocci_id/* drivers/spi/spi-dln2.c 323 */;
	struct {
		u8 port;
		u8 bpw;
	} cocci_id/* drivers/spi/spi-dln2.c 304 */;
	struct {
		u8 port;
		u8 mode;
	} cocci_id/* drivers/spi/spi-dln2.c 288 */;
	struct {
		u8 port;
		__le32 speed;
	}__packed cocci_id/* drivers/spi/spi-dln2.c 261 */;
	u32 cocci_id/* drivers/spi/spi-dln2.c 258 */;
	struct {
		__le32 speed;
	} cocci_id/* drivers/spi/spi-dln2.c 215 */;
	struct {
		__le16 cs_count;
	} cocci_id/* drivers/spi/spi-dln2.c 189 */;
	struct {
		u8 port;
	} cocci_id/* drivers/spi/spi-dln2.c 186 */;
	struct {
		u8 port;
		u8 cs;
	} cocci_id/* drivers/spi/spi-dln2.c 163 */;
	bool cocci_id/* drivers/spi/spi-dln2.c 161 */;
	struct dln2_spi *cocci_id/* drivers/spi/spi-dln2.c 161 */;
	unsigned cocci_id/* drivers/spi/spi-dln2.c 108 */;
	struct {
		u8 port;
		u8 wait_for_completion;
	} cocci_id/* drivers/spi/spi-dln2.c 104 */;
}
