cocci_test_suite() {
	enum{MMC_INT_STATUS=0x00, MMC_INT_ENABLE=0x04, MMC_SET_BUFFER=0x08, MMC_CMD=0x0C, MMC_ARG=0x10, MMC_RESP_0=0x14, MMC_RESP_1=0x18, MMC_RESP_2=0x1C, MMC_RESP_3=0x20, MMC_BLOCK_LENGTH=0x24, MMC_BLOCK_COUNT=0x28, MMC_STATE=0x2C, MMC_STAT_END_OF_CMD=1U << 0, MMC_STAT_END_OF_DATA=1U << 1, MMC_STAT_STATE_CHANGE=1U << 2, MMC_STAT_CMD_TIMEOUT=1U << 3, MMC_STATE_INSERTED=1U << 0, MMC_STATE_READ_ONLY=1U << 1,} cocci_id/* drivers/mmc/host/android-goldfish.c 56 */;
	struct platform_driver cocci_id/* drivers/mmc/host/android-goldfish.c 543 */;
	long cocci_id/* drivers/mmc/host/android-goldfish.c 462 */;
	struct goldfish_mmc_host cocci_id/* drivers/mmc/host/android-goldfish.c 454 */;
	dma_addr_t cocci_id/* drivers/mmc/host/android-goldfish.c 447 */;
	struct resource *cocci_id/* drivers/mmc/host/android-goldfish.c 444 */;
	struct platform_device *cocci_id/* drivers/mmc/host/android-goldfish.c 440 */;
	const struct mmc_host_ops cocci_id/* drivers/mmc/host/android-goldfish.c 434 */;
	uint32_t cocci_id/* drivers/mmc/host/android-goldfish.c 427 */;
	struct mmc_host *cocci_id/* drivers/mmc/host/android-goldfish.c 425 */;
	struct mmc_ios *cocci_id/* drivers/mmc/host/android-goldfish.c 417 */;
	enum dma_data_direction cocci_id/* drivers/mmc/host/android-goldfish.c 360 */;
	unsigned cocci_id/* drivers/mmc/host/android-goldfish.c 359 */;
	u32 cocci_id/* drivers/mmc/host/android-goldfish.c 335 */;
	struct mmc_request *cocci_id/* drivers/mmc/host/android-goldfish.c 309 */;
	u16 cocci_id/* drivers/mmc/host/android-goldfish.c 284 */;
	irqreturn_t cocci_id/* drivers/mmc/host/android-goldfish.c 281 */;
	void *cocci_id/* drivers/mmc/host/android-goldfish.c 281 */;
	struct mmc_command *cocci_id/* drivers/mmc/host/android-goldfish.c 254 */;
	struct goldfish_mmc_host *cocci_id/* drivers/mmc/host/android-goldfish.c 253 */;
	void cocci_id/* drivers/mmc/host/android-goldfish.c 253 */;
	struct mmc_data *cocci_id/* drivers/mmc/host/android-goldfish.c 243 */;
	struct device_attribute *cocci_id/* drivers/mmc/host/android-goldfish.c 136 */;
	char *cocci_id/* drivers/mmc/host/android-goldfish.c 136 */;
	struct device *cocci_id/* drivers/mmc/host/android-goldfish.c 135 */;
	ssize_t cocci_id/* drivers/mmc/host/android-goldfish.c 134 */;
	int cocci_id/* drivers/mmc/host/android-goldfish.c 128 */;
	struct goldfish_mmc_host {
		struct mmc_request *mrq;
		struct mmc_command *cmd;
		struct mmc_data *data;
		struct device *dev;
		unsigned char id;
		void *virt_base;
		unsigned int phys_base;
		int irq;
		unsigned char bus_mode;
		unsigned char hw_bus_mode;
		unsigned int sg_len;
		unsigned dma_done:1;
		unsigned dma_in_use:1;
		void __iomem *reg_base;
	} cocci_id/* drivers/mmc/host/android-goldfish.c 109 */;
}
