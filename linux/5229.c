cocci_test_suite() {
	enum{SCR_SCONTROL_DET_ENABLE=0x00000001, SCR_SSTATUS_DET_PRESENT=0x00000001, SCR_SERROR_DIAG_X=0x04000000, SATA_DWC_TXFIFO_DEPTH=0x01FF, SATA_DWC_RXFIFO_DEPTH=0x01FF, SATA_DWC_DMACR_TMOD_TXCHEN=0x00000004, SATA_DWC_DMACR_TXCHEN=(0x00000001 | SATA_DWC_DMACR_TMOD_TXCHEN), SATA_DWC_DMACR_RXCHEN=(0x00000002 | SATA_DWC_DMACR_TMOD_TXCHEN), SATA_DWC_DMACR_TXRXCH_CLEAR=SATA_DWC_DMACR_TMOD_TXCHEN, SATA_DWC_INTPR_DMAT=0x00000001, SATA_DWC_INTPR_NEWFP=0x00000002, SATA_DWC_INTPR_PMABRT=0x00000004, SATA_DWC_INTPR_ERR=0x00000008, SATA_DWC_INTPR_NEWBIST=0x00000010, SATA_DWC_INTPR_IPF=0x10000000, SATA_DWC_INTMR_DMATM=0x00000001, SATA_DWC_INTMR_NEWFPM=0x00000002, SATA_DWC_INTMR_PMABRTM=0x00000004, SATA_DWC_INTMR_ERRM=0x00000008, SATA_DWC_INTMR_NEWBISTM=0x00000010, SATA_DWC_LLCR_SCRAMEN=0x00000001, SATA_DWC_LLCR_DESCRAMEN=0x00000002, SATA_DWC_LLCR_RPDEN=0x00000004, SATA_DWC_SERROR_ERR_BITS=0x0FFF0F03,} cocci_id/* drivers/ata/sata_dwc_460ex.c 97 */;
	struct ata_taskfile *cocci_id/* drivers/ata/sata_dwc_460ex.c 968 */;
	struct device *cocci_id/* drivers/ata/sata_dwc_460ex.c 854 */;
	struct ata_ioports *cocci_id/* drivers/ata/sata_dwc_460ex.c 829 */;
	struct sata_dwc_regs {
		u32 fptagr;
		u32 fpbor;
		u32 fptcr;
		u32 dmacr;
		u32 dbtsr;
		u32 intpr;
		u32 intmr;
		u32 errmr;
		u32 llcr;
		u32 phycr;
		u32 physr;
		u32 rxbistpd;
		u32 rxbistpd1;
		u32 rxbistpd2;
		u32 txbistpd;
		u32 txbistpd1;
		u32 txbistpd2;
		u32 bistcr;
		u32 bistfctr;
		u32 bistsr;
		u32 bistdecr;
		u32 res[15];
		u32 testr;
		u32 versionr;
		u32 idr;
		u32 unimpl[192];
		u32 dmadr[256];
	} cocci_id/* drivers/ata/sata_dwc_460ex.c 67 */;
	enum{SATA_DWC_MAX_PORTS=1, SATA_DWC_SCR_OFFSET=0x24, SATA_DWC_REG_OFFSET=0x64,} cocci_id/* drivers/ata/sata_dwc_460ex.c 59 */;
	irqreturn_t cocci_id/* drivers/ata/sata_dwc_460ex.c 503 */;
	struct ata_eh_info *cocci_id/* drivers/ata/sata_dwc_460ex.c 456 */;
	uint cocci_id/* drivers/ata/sata_dwc_460ex.c 453 */;
	u32 cocci_id/* drivers/ata/sata_dwc_460ex.c 440 */;
	struct sata_dwc_device *cocci_id/* drivers/ata/sata_dwc_460ex.c 440 */;
	void cocci_id/* drivers/ata/sata_dwc_460ex.c 440 */;
	struct ata_port *cocci_id/* drivers/ata/sata_dwc_460ex.c 433 */;
	u32 *cocci_id/* drivers/ata/sata_dwc_460ex.c 404 */;
	struct dma_slave_config cocci_id/* drivers/ata/sata_dwc_460ex.c 368 */;
	struct dma_async_tx_descriptor *cocci_id/* drivers/ata/sata_dwc_460ex.c 363 */;
	struct ata_queued_cmd *cocci_id/* drivers/ata/sata_dwc_460ex.c 363 */;
	unsigned int cocci_id/* drivers/ata/sata_dwc_460ex.c 337 */;
	u8 cocci_id/* drivers/ata/sata_dwc_460ex.c 336 */;
	struct sata_dwc_device_port *cocci_id/* drivers/ata/sata_dwc_460ex.c 335 */;
	struct ata_host *cocci_id/* drivers/ata/sata_dwc_460ex.c 333 */;
	unsigned long cocci_id/* drivers/ata/sata_dwc_460ex.c 331 */;
	void *cocci_id/* drivers/ata/sata_dwc_460ex.c 329 */;
	enum dma_data_direction cocci_id/* drivers/ata/sata_dwc_460ex.c 302 */;
	const char *cocci_id/* drivers/ata/sata_dwc_460ex.c 300 */;
	int cocci_id/* drivers/ata/sata_dwc_460ex.c 300 */;
	struct resource *cocci_id/* drivers/ata/sata_dwc_460ex.c 240 */;
	struct device_node *cocci_id/* drivers/ata/sata_dwc_460ex.c 239 */;
	struct platform_device *cocci_id/* drivers/ata/sata_dwc_460ex.c 236 */;
	dma_cap_mask_t cocci_id/* drivers/ata/sata_dwc_460ex.c 218 */;
	struct dw_dma_slave *cocci_id/* drivers/ata/sata_dwc_460ex.c 205 */;
	bool cocci_id/* drivers/ata/sata_dwc_460ex.c 203 */;
	struct dma_chan *cocci_id/* drivers/ata/sata_dwc_460ex.c 203 */;
	struct dw_dma_slave cocci_id/* drivers/ata/sata_dwc_460ex.c 196 */;
	void cocci_id/* drivers/ata/sata_dwc_460ex.c 189 */(struct sata_dwc_device_port *hsdevp,
							    u8 tag);
	void cocci_id/* drivers/ata/sata_dwc_460ex.c 188 */(struct ata_port *ap);
	void cocci_id/* drivers/ata/sata_dwc_460ex.c 187 */(struct ata_port *ap,
							    u32 check_status);
	int cocci_id/* drivers/ata/sata_dwc_460ex.c 185 */(struct ata_port *ap,
							   struct ata_queued_cmd *qc,
							   u32 check_status);
	void cocci_id/* drivers/ata/sata_dwc_460ex.c 184 */(struct ata_queued_cmd *qc,
							    u8 tag);
	enum{SATA_DWC_CMD_ISSUED_NOT=0, SATA_DWC_CMD_ISSUED_PEND=1, SATA_DWC_CMD_ISSUED_EXEC=2, SATA_DWC_CMD_ISSUED_NODATA=3, SATA_DWC_DMA_PENDING_NONE=0, SATA_DWC_DMA_PENDING_TX=1, SATA_DWC_DMA_PENDING_RX=2,} cocci_id/* drivers/ata/sata_dwc_460ex.c 170 */;
	struct sata_dwc_device_port {
		struct sata_dwc_device *hsdev;
		int cmd_issued[SATA_DWC_QCMD_MAX];
		int dma_pending[SATA_DWC_QCMD_MAX];
		struct dma_chan *chan;
		struct dma_async_tx_descriptor *desc[SATA_DWC_QCMD_MAX];
		u32 dma_interrupt_count;
	} cocci_id/* drivers/ata/sata_dwc_460ex.c 150 */;
	struct sata_dwc_device {
		struct device *dev;
		struct ata_probe_ent *pe;
		struct ata_host *host;
		struct sata_dwc_regs __iomem *sata_dwc_regs;
		u32 sactive_issued;
		u32 sactive_queued;
		struct phy *phy;
		phys_addr_t dmadr;
#ifdef CONFIG_SATA_DWC_OLD_DMA
		struct dw_dma_chip *dma;
#endif
	} cocci_id/* drivers/ata/sata_dwc_460ex.c 134 */;
	struct platform_driver cocci_id/* drivers/ata/sata_dwc_460ex.c 1316 */;
	const struct of_device_id cocci_id/* drivers/ata/sata_dwc_460ex.c 1310 */[];
	struct sata_dwc_regs cocci_id/* drivers/ata/sata_dwc_460ex.c 1229 */;
	const struct ata_port_info *cocci_id/* drivers/ata/sata_dwc_460ex.c 1208 */[];
	struct ata_port_info cocci_id/* drivers/ata/sata_dwc_460ex.c 1207 */;
	void __iomem *cocci_id/* drivers/ata/sata_dwc_460ex.c 1203 */;
	char *cocci_id/* drivers/ata/sata_dwc_460ex.c 1202 */;
	const struct ata_port_info cocci_id/* drivers/ata/sata_dwc_460ex.c 1189 */[];
	struct ata_port_operations cocci_id/* drivers/ata/sata_dwc_460ex.c 1169 */;
	struct scsi_host_template cocci_id/* drivers/ata/sata_dwc_460ex.c 1151 */;
	struct ata_link *cocci_id/* drivers/ata/sata_dwc_460ex.c 1121 */;
	unsigned int *cocci_id/* drivers/ata/sata_dwc_460ex.c 1121 */;
}
