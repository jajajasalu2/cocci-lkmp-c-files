cocci_test_suite() {
	struct resource *cocci_id/* drivers/ata/pata_ep93xx.c 920 */;
	struct ata_host *cocci_id/* drivers/ata/pata_ep93xx.c 917 */;
	struct platform_device *cocci_id/* drivers/ata/pata_ep93xx.c 914 */;
	struct ata_port_operations cocci_id/* drivers/ata/pata_ep93xx.c 884 */;
	struct scsi_host_template cocci_id/* drivers/ata/pata_ep93xx.c 876 */;
	struct ata_link *cocci_id/* drivers/ata/pata_ep93xx.c 804 */;
	unsigned int *cocci_id/* drivers/ata/pata_ep93xx.c 804 */;
	u32 cocci_id/* drivers/ata/pata_ep93xx.c 708 */;
	struct ata_device *cocci_id/* drivers/ata/pata_ep93xx.c 707 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/ata/pata_ep93xx.c 704 */;
	struct dma_slave_config cocci_id/* drivers/ata/pata_ep93xx.c 652 */;
	dma_cap_mask_t cocci_id/* drivers/ata/pata_ep93xx.c 651 */;
	const struct platform_device *cocci_id/* drivers/ata/pata_ep93xx.c 650 */;
	struct dma_chan *cocci_id/* drivers/ata/pata_ep93xx.c 639 */;
	void *cocci_id/* drivers/ata/pata_ep93xx.c 639 */;
	struct ep93xx_pata_data *cocci_id/* drivers/ata/pata_ep93xx.c 615 */;
	unsigned long cocci_id/* drivers/ata/pata_ep93xx.c 613 */;
	struct ata_port *cocci_id/* drivers/ata/pata_ep93xx.c 612 */;
	unsigned int cocci_id/* drivers/ata/pata_ep93xx.c 612 */;
	int cocci_id/* drivers/ata/pata_ep93xx.c 612 */;
	enum{IDECTRL=0x00, IDECTRL_CS0N=(1 << 0), IDECTRL_CS1N=(1 << 1), IDECTRL_DIORN=(1 << 5), IDECTRL_DIOWN=(1 << 6), IDECTRL_INTRQ=(1 << 9), IDECTRL_IORDY=(1 << 10), IDECTRL_ADDR_CMD=0 + 2, IDECTRL_ADDR_DATA=(ATA_REG_DATA << 2) + 2, IDECTRL_ADDR_ERROR=(ATA_REG_ERR << 2) + 2, IDECTRL_ADDR_FEATURE=(ATA_REG_FEATURE << 2) + 2, IDECTRL_ADDR_NSECT=(ATA_REG_NSECT << 2) + 2, IDECTRL_ADDR_LBAL=(ATA_REG_LBAL << 2) + 2, IDECTRL_ADDR_LBAM=(ATA_REG_LBAM << 2) + 2, IDECTRL_ADDR_LBAH=(ATA_REG_LBAH << 2) + 2, IDECTRL_ADDR_DEVICE=(ATA_REG_DEVICE << 2) + 2, IDECTRL_ADDR_STATUS=(ATA_REG_STATUS << 2) + 2, IDECTRL_ADDR_COMMAND=(ATA_REG_CMD << 2) + 2, IDECTRL_ADDR_ALTSTATUS=(0x06 << 2) + 1, IDECTRL_ADDR_CTL=(0x06 << 2) + 1, IDECFG=0x04, IDECFG_IDEEN=(1 << 0), IDECFG_PIO=(1 << 1), IDECFG_MDMA=(1 << 2), IDECFG_UDMA=(1 << 3), IDECFG_MODE_SHIFT=4, IDECFG_MODE_MASK=(0xf << 4), IDECFG_WST_SHIFT=8, IDECFG_WST_MASK=(0x3 << 8), IDEMDMAOP=0x08, IDEUDMAOP=0x0c, IDEUDMAOP_UEN=(1 << 0), IDEUDMAOP_RWOP=(1 << 1), IDEDATAOUT=0x10, IDEDATAIN=0x14, IDEMDMADATAOUT=0x18, IDEMDMADATAIN=0x1c, IDEUDMADATAOUT=0x20, IDEUDMADATAIN=0x24, IDEUDMASTS=0x28, IDEUDMASTS_DMAIDE=(1 << 16), IDEUDMASTS_INTIDE=(1 << 17), IDEUDMASTS_SBUSY=(1 << 18), IDEUDMASTS_NDO=(1 << 24), IDEUDMASTS_NDI=(1 << 25), IDEUDMASTS_N4X=(1 << 26), IDEUDMADEBUG=0x2c,} cocci_id/* drivers/ata/pata_ep93xx.c 53 */;
	unsigned char cocci_id/* drivers/ata/pata_ep93xx.c 499 */[2];
	u16 *cocci_id/* drivers/ata/pata_ep93xx.c 484 */;
	unsigned char *cocci_id/* drivers/ata/pata_ep93xx.c 479 */;
	struct ata_queued_cmd *cocci_id/* drivers/ata/pata_ep93xx.c 478 */;
	const struct ata_taskfile *cocci_id/* drivers/ata/pata_ep93xx.c 447 */;
	struct ata_taskfile *cocci_id/* drivers/ata/pata_ep93xx.c 415 */;
	u8 cocci_id/* drivers/ata/pata_ep93xx.c 365 */;
	struct ata_timing cocci_id/* drivers/ata/pata_ep93xx.c 346 */;
	const struct ata_timing *cocci_id/* drivers/ata/pata_ep93xx.c 267 */;
	u16 cocci_id/* drivers/ata/pata_ep93xx.c 262 */;
	bool cocci_id/* drivers/ata/pata_ep93xx.c 159 */;
	void __iomem *cocci_id/* drivers/ata/pata_ep93xx.c 159 */;
	void cocci_id/* drivers/ata/pata_ep93xx.c 142 */;
	struct ep93xx_pata_data {
		const struct platform_device *pdev;
		void __iomem *ide_base;
		struct ata_timing t;
		bool iordy;
		unsigned long udma_in_phys;
		unsigned long udma_out_phys;
		struct dma_chan *dma_rx_channel;
		struct ep93xx_dma_data dma_rx_data;
		struct dma_chan *dma_tx_channel;
		struct ep93xx_dma_data dma_tx_data;
	} cocci_id/* drivers/ata/pata_ep93xx.c 127 */;
	struct platform_driver cocci_id/* drivers/ata/pata_ep93xx.c 1021 */;
}
