cocci_test_suite() {
	int cocci_id/* drivers/ata/sata_sil.c 98 */(struct pci_dev *pdev,
						    const struct pci_device_id *ent);
	struct ata_ioports *cocci_id/* drivers/ata/sata_sil.c 770 */;
	const struct ata_port_info *cocci_id/* drivers/ata/sata_sil.c 726 */[];
	struct ata_port_info cocci_id/* drivers/ata/sata_sil.c 725 */;
	const struct pci_device_id *cocci_id/* drivers/ata/sata_sil.c 722 */;
	unsigned long cocci_id/* drivers/ata/sata_sil.c 714 */;
	const struct dmi_system_id *cocci_id/* drivers/ata/sata_sil.c 711 */;
	void *cocci_id/* drivers/ata/sata_sil.c 706 */;
	const struct dmi_system_id cocci_id/* drivers/ata/sata_sil.c 698 */[];
	bool cocci_id/* drivers/ata/sata_sil.c 696 */;
	struct pci_dev *cocci_id/* drivers/ata/sata_sil.c 696 */;
	struct ata_host *cocci_id/* drivers/ata/sata_sil.c 651 */;
	unsigned char cocci_id/* drivers/ata/sata_sil.c 617 */[ATA_ID_PROD_LEN + 1];
	int cocci_id/* drivers/ata/sata_sil.c 615 */;
	struct ata_device *cocci_id/* drivers/ata/sata_sil.c 612 */;
	irqreturn_t cocci_id/* drivers/ata/sata_sil.c 507 */;
	struct ata_eh_info *cocci_id/* drivers/ata/sata_sil.c 422 */;
	u32 *cocci_id/* drivers/ata/sata_sil.c 398 */;
	struct ata_link *cocci_id/* drivers/ata/sata_sil.c 398 */;
	enum{SIL_MMIO_BAR=5, SIL_FLAG_NO_SATA_IRQ=(1 << 28), SIL_FLAG_RERR_ON_DMA_ACT=(1 << 29), SIL_FLAG_MOD15WRITE=(1 << 30), SIL_DFL_PORT_FLAGS=ATA_FLAG_SATA, sil_3112=0, sil_3112_no_sata_irq=1, sil_3512=2, sil_3114=3, SIL_SYSCFG=0x48, SIL_MASK_IDE0_INT=(1 << 22), SIL_MASK_IDE1_INT=(1 << 23), SIL_MASK_IDE2_INT=(1 << 24), SIL_MASK_IDE3_INT=(1 << 25), SIL_MASK_2PORT=SIL_MASK_IDE0_INT | SIL_MASK_IDE1_INT, SIL_MASK_4PORT=SIL_MASK_2PORT | SIL_MASK_IDE2_INT | SIL_MASK_IDE3_INT, SIL_INTR_STEERING=(1 << 1), SIL_DMA_ENABLE=(1 << 0), SIL_DMA_RDWR=(1 << 3), SIL_DMA_SATA_IRQ=(1 << 4), SIL_DMA_ACTIVE=(1 << 16), SIL_DMA_ERROR=(1 << 17), SIL_DMA_COMPLETE=(1 << 18), SIL_DMA_N_SATA_IRQ=(1 << 6), SIL_DMA_N_ACTIVE=(1 << 24), SIL_DMA_N_ERROR=(1 << 25), SIL_DMA_N_COMPLETE=(1 << 26), SIL_SIEN_N=(1 << 16), SIL_QUIRK_MOD15WRITE=(1 << 0), SIL_QUIRK_UDMA5MAX=(1 << 1),} cocci_id/* drivers/ata/sata_sil.c 37 */;
	struct ata_device **cocci_id/* drivers/ata/sata_sil.c 346 */;
	unsigned char cocci_id/* drivers/ata/sata_sil.c 330 */;
	enum ata_completion_errors cocci_id/* drivers/ata/sata_sil.c 320 */;
	u32 cocci_id/* drivers/ata/sata_sil.c 305 */;
	struct ata_bmdma_prd *cocci_id/* drivers/ata/sata_sil.c 297 */;
	struct scatterlist *cocci_id/* drivers/ata/sata_sil.c 295 */;
	u8 cocci_id/* drivers/ata/sata_sil.c 282 */;
	unsigned int cocci_id/* drivers/ata/sata_sil.c 278 */;
	void __iomem *cocci_id/* drivers/ata/sata_sil.c 267 */;
	struct ata_port *cocci_id/* drivers/ata/sata_sil.c 266 */;
	struct ata_queued_cmd *cocci_id/* drivers/ata/sata_sil.c 264 */;
	void cocci_id/* drivers/ata/sata_sil.c 264 */;
	const struct {
		unsigned long tf;
		unsigned long ctl;
		unsigned long bmdma;
		unsigned long bmdma2;
		unsigned long fifo_cfg;
		unsigned long scr;
		unsigned long sien;
		unsigned long xfer_mode;
		unsigned long sfis_cfg;
	} cocci_id/* drivers/ata/sata_sil.c 220 */[];
	const struct ata_port_info cocci_id/* drivers/ata/sata_sil.c 182 */[];
	struct ata_port_operations cocci_id/* drivers/ata/sata_sil.c 168 */;
	struct scsi_host_template cocci_id/* drivers/ata/sata_sil.c 159 */;
	struct pci_driver cocci_id/* drivers/ata/sata_sil.c 148 */;
	const struct sil_drivelist {
		const char *product;
		unsigned int quirk;
	} cocci_id/* drivers/ata/sata_sil.c 128 */[];
	const struct pci_device_id cocci_id/* drivers/ata/sata_sil.c 114 */[];
	void cocci_id/* drivers/ata/sata_sil.c 110 */(struct ata_port *ap);
	void cocci_id/* drivers/ata/sata_sil.c 107 */(struct ata_queued_cmd *qc);
	enum ata_completion_errors cocci_id/* drivers/ata/sata_sil.c 106 */(struct ata_queued_cmd *qc);
	int cocci_id/* drivers/ata/sata_sil.c 105 */(struct ata_link *link,
						     struct ata_device **r_failed);
	int cocci_id/* drivers/ata/sata_sil.c 104 */(struct ata_link *link,
						     unsigned int sc_reg,
						     u32 val);
	int cocci_id/* drivers/ata/sata_sil.c 103 */(struct ata_link *link,
						     unsigned int sc_reg,
						     u32 *val);
	void cocci_id/* drivers/ata/sata_sil.c 102 */(struct ata_device *dev);
	int cocci_id/* drivers/ata/sata_sil.c 100 */(struct pci_dev *pdev);
}
