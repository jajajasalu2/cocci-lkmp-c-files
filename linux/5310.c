cocci_test_suite() {
	struct pci_driver cocci_id/* drivers/ata/sata_inic162x.c 889 */;
	const struct pci_device_id cocci_id/* drivers/ata/sata_inic162x.c 884 */[];
	void __iomem *const*cocci_id/* drivers/ata/sata_inic162x.c 824 */;
	struct inic_host_priv *cocci_id/* drivers/ata/sata_inic162x.c 823 */;
	struct ata_host *cocci_id/* drivers/ata/sata_inic162x.c 822 */;
	const struct ata_port_info *cocci_id/* drivers/ata/sata_inic162x.c 821 */[];
	const struct pci_device_id *cocci_id/* drivers/ata/sata_inic162x.c 819 */;
	struct pci_dev *cocci_id/* drivers/ata/sata_inic162x.c 819 */;
	const struct ata_port_info cocci_id/* drivers/ata/sata_inic162x.c 748 */;
	struct ata_port_operations cocci_id/* drivers/ata/sata_inic162x.c 727 */;
	struct inic_pkt cocci_id/* drivers/ata/sata_inic162x.c 712 */;
	struct device *cocci_id/* drivers/ata/sata_inic162x.c 702 */;
	struct ata_port *cocci_id/* drivers/ata/sata_inic162x.c 666 */;
	void cocci_id/* drivers/ata/sata_inic162x.c 666 */;
	enum{MMIO_BAR_PCI=5, MMIO_BAR_CARDBUS=1, NR_PORTS=2, IDMA_CPB_TBL_SIZE=4 * 32, INIC_DMA_BOUNDARY=0xffffff, HOST_ACTRL=0x08, HOST_CTL=0x7c, HOST_STAT=0x7e, HOST_IRQ_STAT=0xbc, HOST_IRQ_MASK=0xbe, PORT_SIZE=0x40, PORT_TF_DATA=0x00, PORT_TF_FEATURE=0x01, PORT_TF_NSECT=0x02, PORT_TF_LBAL=0x03, PORT_TF_LBAM=0x04, PORT_TF_LBAH=0x05, PORT_TF_DEVICE=0x06, PORT_TF_COMMAND=0x07, PORT_TF_ALT_STAT=0x08, PORT_IRQ_STAT=0x09, PORT_IRQ_MASK=0x0a, PORT_PRD_CTL=0x0b, PORT_PRD_ADDR=0x0c, PORT_PRD_XFERLEN=0x10, PORT_CPB_CPBLAR=0x18, PORT_CPB_PTQFIFO=0x1c, PORT_IDMA_CTL=0x14, PORT_IDMA_STAT=0x16, PORT_RPQ_FIFO=0x1e, PORT_RPQ_CNT=0x1f, PORT_SCR=0x20, HCTL_LEDEN=(1 << 3), HCTL_IRQOFF=(1 << 8), HCTL_FTHD0=(1 << 10), HCTL_FTHD1=(1 << 11), HCTL_PWRDWN=(1 << 12), HCTL_SOFTRST=(1 << 13), HCTL_RPGSEL=(1 << 15), HCTL_KNOWN_BITS=HCTL_IRQOFF | HCTL_PWRDWN | HCTL_SOFTRST | HCTL_RPGSEL, HIRQ_PORT0=(1 << 0), HIRQ_PORT1=(1 << 1), HIRQ_SOFT=(1 << 14), HIRQ_GLOBAL=(1 << 15), PIRQ_OFFLINE=(1 << 0), PIRQ_ONLINE=(1 << 1), PIRQ_COMPLETE=(1 << 2), PIRQ_FATAL=(1 << 3), PIRQ_ATA=(1 << 4), PIRQ_REPLY=(1 << 5), PIRQ_PENDING=(1 << 7), PIRQ_ERR=PIRQ_OFFLINE | PIRQ_ONLINE | PIRQ_FATAL, PIRQ_MASK_DEFAULT=PIRQ_REPLY | PIRQ_ATA, PIRQ_MASK_FREEZE=0xff, PRD_CTL_START=(1 << 0), PRD_CTL_WR=(1 << 3), PRD_CTL_DMAEN=(1 << 7), IDMA_CTL_RST_ATA=(1 << 2), IDMA_CTL_RST_IDMA=(1 << 5), IDMA_CTL_GO=(1 << 7), IDMA_CTL_ATA_NIEN=(1 << 8), IDMA_STAT_PERR=(1 << 0), IDMA_STAT_CPBERR=(1 << 1), IDMA_STAT_LGCY=(1 << 3), IDMA_STAT_UIRQ=(1 << 4), IDMA_STAT_STPD=(1 << 5), IDMA_STAT_PSD=(1 << 6), IDMA_STAT_DONE=(1 << 7), IDMA_STAT_ERR=IDMA_STAT_PERR | IDMA_STAT_CPBERR, CPB_CTL_VALID=(1 << 0), CPB_CTL_QUEUED=(1 << 1), CPB_CTL_DATA=(1 << 2), CPB_CTL_IEN=(1 << 3), CPB_CTL_DEVDIR=(1 << 4), CPB_RESP_DONE=(1 << 0), CPB_RESP_REL=(1 << 1), CPB_RESP_IGNORED=(1 << 2), CPB_RESP_ATA_ERR=(1 << 3), CPB_RESP_SPURIOUS=(1 << 4), CPB_RESP_UNDERFLOW=(1 << 5), CPB_RESP_OVERFLOW=(1 << 6), CPB_RESP_CPB_ERR=(1 << 7), PRD_DRAIN=(1 << 1), PRD_CDB=(1 << 2), PRD_DIRECT_INTR=(1 << 3), PRD_DMA=(1 << 4), PRD_WRITE=(1 << 5), PRD_IOM=(1 << 6), PRD_END=(1 << 7),} cocci_id/* drivers/ata/sata_inic162x.c 65 */;
	struct ata_taskfile cocci_id/* drivers/ata/sata_inic162x.c 647 */;
	const unsigned long *cocci_id/* drivers/ata/sata_inic162x.c 626 */;
	unsigned long cocci_id/* drivers/ata/sata_inic162x.c 621 */;
	unsigned int *cocci_id/* drivers/ata/sata_inic162x.c 620 */;
	void __iomem *cocci_id/* drivers/ata/sata_inic162x.c 611 */;
	struct ata_link *cocci_id/* drivers/ata/sata_inic162x.c 609 */;
	struct ata_taskfile *cocci_id/* drivers/ata/sata_inic162x.c 573 */;
	struct inic_pkt *cocci_id/* drivers/ata/sata_inic162x.c 484 */;
	enum ata_completion_errors cocci_id/* drivers/ata/sata_inic162x.c 481 */;
	u8 cocci_id/* drivers/ata/sata_inic162x.c 462 */;
	unsigned int cocci_id/* drivers/ata/sata_inic162x.c 461 */;
	struct scatterlist *cocci_id/* drivers/ata/sata_inic162x.c 460 */;
	struct inic_prd *cocci_id/* drivers/ata/sata_inic162x.c 458 */;
	struct ata_queued_cmd *cocci_id/* drivers/ata/sata_inic162x.c 445 */;
	int cocci_id/* drivers/ata/sata_inic162x.c 445 */;
	irqreturn_t cocci_id/* drivers/ata/sata_inic162x.c 419 */;
	void *cocci_id/* drivers/ata/sata_inic162x.c 419 */;
	bool cocci_id/* drivers/ata/sata_inic162x.c 331 */;
	struct inic_cpb *cocci_id/* drivers/ata/sata_inic162x.c 330 */;
	struct inic_port_priv *cocci_id/* drivers/ata/sata_inic162x.c 329 */;
	struct ata_eh_info *cocci_id/* drivers/ata/sata_inic162x.c 328 */;
	u16 cocci_id/* drivers/ata/sata_inic162x.c 326 */;
	u32 cocci_id/* drivers/ata/sata_inic162x.c 306 */;
	u32 *cocci_id/* drivers/ata/sata_inic162x.c 291 */;
	unsigned cocci_id/* drivers/ata/sata_inic162x.c 291 */;
	const int cocci_id/* drivers/ata/sata_inic162x.c 258 */[];
	struct scsi_host_template cocci_id/* drivers/ata/sata_inic162x.c 245 */;
	struct inic_port_priv {
		struct inic_pkt *pkt;
		dma_addr_t pkt_dma;
		u32 *cpb_tbl;
		dma_addr_t cpb_tbl_dma;
	} cocci_id/* drivers/ata/sata_inic162x.c 238 */;
	struct inic_host_priv {
		void __iomem *mmio_base;
		u16 cached_hctl;
	} cocci_id/* drivers/ata/sata_inic162x.c 233 */;
	struct inic_pkt {
		struct inic_cpb cpb;
		struct inic_prd prd[LIBATA_MAX_PRD + 1];
		u8 cdb[ATAPI_CDB_LEN];
	}__packed cocci_id/* drivers/ata/sata_inic162x.c 227 */;
	struct inic_prd {
		__le32 mad;
		__le16 len;
		u8 rsvd;
		u8 flags;
	}__packed cocci_id/* drivers/ata/sata_inic162x.c 220 */;
	struct inic_cpb {
		u8 resp_flags;
		u8 error;
		u8 status;
		u8 ctl_flags;
		__le32 len;
		__le32 prd;
		u8 rsvd[4];
		u8 feature;
		u8 hob_feature;
		u8 device;
		u8 mirctl;
		u8 nsect;
		u8 hob_nsect;
		u8 lbal;
		u8 hob_lbal;
		u8 lbam;
		u8 hob_lbam;
		u8 lbah;
		u8 hob_lbah;
		u8 command;
		u8 ctl;
		u8 slave_error;
		u8 slave_status;
	}__packed cocci_id/* drivers/ata/sata_inic162x.c 191 */;
}
