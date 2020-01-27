cocci_test_suite() {
	struct spi_message *cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_spi.c 97 */;
	unsigned long cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_spi.c 72 */;
	u16 cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_spi.c 71 */;
	irqreturn_t cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_spi.c 69 */;
	struct spi_board_info cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_spi.c 61 */;
	struct flash_platform_data cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_spi.c 55 */;
	struct mtd_partition cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_spi.c 48 */;
	char cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_spi.c 46 */[64];
	struct netup_spi {
		struct device *dev;
		struct spi_master *master;
		struct netup_spi_regs __iomem *regs;
		u8 __iomem *mmio;
		spinlock_t lock;
		wait_queue_head_t waitq;
		enum netup_spi_state state;
	} cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_spi.c 36 */;
	struct netup_spi_regs {
		__u8 data[1024];
		__le16 control_stat;
		__le16 clock_divider;
	}__packed __aligned(1) cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_spi.c 30 */;
	enum netup_spi_state{SPI_STATE_START, SPI_STATE_DONE,} cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_spi.c 25 */;
	void cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_spi.c 220 */;
	struct netup_spi_regs __iomem *cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_spi.c 194 */;
	struct netup_spi cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_spi.c 179 */;
	struct netup_spi *cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_spi.c 176 */;
	struct spi_master *cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_spi.c 175 */;
	struct netup_unidvb_dev *cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_spi.c 173 */;
	int cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_spi.c 173 */;
	struct spi_device *cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_spi.c 168 */;
	u32 cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_spi.c 102 */;
	struct spi_transfer *cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_spi.c 100 */;
}
