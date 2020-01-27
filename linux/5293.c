cocci_test_suite() {
	const struct pdc2027x_udma_timing {
		u8 value0,value1,value2;
	} cocci_id/* drivers/ata/pata_pdc2027x.c 97 */[];
	const struct pdc2027x_mdma_timing {
		u8 value0,value1;
	} cocci_id/* drivers/ata/pata_pdc2027x.c 89 */[];
	const struct pdc2027x_pio_timing {
		u8 value0,value1,value2;
	} cocci_id/* drivers/ata/pata_pdc2027x.c 79 */[];
	struct ata_host *cocci_id/* drivers/ata/pata_pdc2027x.c 704 */;
	const struct ata_port_info *cocci_id/* drivers/ata/pata_pdc2027x.c 702 */[];
	const unsigned long cocci_id/* drivers/ata/pata_pdc2027x.c 699 */[];
	const struct pci_device_id *cocci_id/* drivers/ata/pata_pdc2027x.c 697 */;
	struct pci_dev *cocci_id/* drivers/ata/pata_pdc2027x.c 696 */;
	int cocci_id/* drivers/ata/pata_pdc2027x.c 69 */(struct ata_link *link,
							 struct ata_device **r_failed);
	int cocci_id/* drivers/ata/pata_pdc2027x.c 68 */(struct ata_port *ap);
	unsigned long cocci_id/* drivers/ata/pata_pdc2027x.c 67 */(struct ata_device *adev,
								   unsigned long mask);
	struct ata_ioports *cocci_id/* drivers/ata/pata_pdc2027x.c 669 */;
	int cocci_id/* drivers/ata/pata_pdc2027x.c 66 */(struct ata_queued_cmd *qc);
	void cocci_id/* drivers/ata/pata_pdc2027x.c 65 */(struct ata_port *ap,
							  struct ata_device *adev);
	int cocci_id/* drivers/ata/pata_pdc2027x.c 63 */(struct ata_link *link,
							 unsigned long deadline);
	int cocci_id/* drivers/ata/pata_pdc2027x.c 61 */(struct pci_dev *pdev);
	ktime_t cocci_id/* drivers/ata/pata_pdc2027x.c 603 */;
	int cocci_id/* drivers/ata/pata_pdc2027x.c 59 */(struct pci_dev *pdev,
							 const struct pci_device_id *ent);
	u16 cocci_id/* drivers/ata/pata_pdc2027x.c 515 */;
	long cocci_id/* drivers/ata/pata_pdc2027x.c 512 */;
	u8 *cocci_id/* drivers/ata/pata_pdc2027x.c 438 */;
	struct scsi_cmnd *cocci_id/* drivers/ata/pata_pdc2027x.c 437 */;
	struct ata_queued_cmd *cocci_id/* drivers/ata/pata_pdc2027x.c 435 */;
	enum{PDC_MMIO_BAR=5, PDC_UDMA_100=0, PDC_UDMA_133=1, PDC_100_MHZ=100000000, PDC_133_MHZ=133333333, PDC_SYS_CTL=0x1100, PDC_ATA_CTL=0x1104, PDC_GLOBAL_CTL=0x1108, PDC_CTCR0=0x110C, PDC_CTCR1=0x1110, PDC_BYTE_COUNT=0x1120, PDC_PLL_CTL=0x1202,} cocci_id/* drivers/ata/pata_pdc2027x.c 41 */;
	struct ata_device **cocci_id/* drivers/ata/pata_pdc2027x.c 396 */;
	void cocci_id/* drivers/ata/pata_pdc2027x.c 333 */;
	unsigned char cocci_id/* drivers/ata/pata_pdc2027x.c 263 */[ATA_ID_PROD_LEN + 1];
	unsigned long cocci_id/* drivers/ata/pata_pdc2027x.c 261 */;
	struct ata_link *cocci_id/* drivers/ata/pata_pdc2027x.c 245 */;
	u32 cocci_id/* drivers/ata/pata_pdc2027x.c 210 */;
	int cocci_id/* drivers/ata/pata_pdc2027x.c 208 */;
	u8 cocci_id/* drivers/ata/pata_pdc2027x.c 194 */;
	struct ata_port *cocci_id/* drivers/ata/pata_pdc2027x.c 192 */;
	struct ata_device *cocci_id/* drivers/ata/pata_pdc2027x.c 192 */;
	void __iomem *cocci_id/* drivers/ata/pata_pdc2027x.c 192 */;
	unsigned int cocci_id/* drivers/ata/pata_pdc2027x.c 192 */;
	struct ata_port_info cocci_id/* drivers/ata/pata_pdc2027x.c 151 */[];
	struct ata_port_operations cocci_id/* drivers/ata/pata_pdc2027x.c 136 */;
	struct scsi_host_template cocci_id/* drivers/ata/pata_pdc2027x.c 132 */;
	struct pci_driver cocci_id/* drivers/ata/pata_pdc2027x.c 121 */;
	const struct pci_device_id cocci_id/* drivers/ata/pata_pdc2027x.c 109 */[];
}
