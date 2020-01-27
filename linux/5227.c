cocci_test_suite() {
	struct pata_icside_info {
		struct pata_icside_state *state;
		struct expansion_card *ec;
		void __iomem *base;
		void __iomem *irqaddr;
		unsigned int irqmask;
		const expansioncard_ops_t *irqops;
		unsigned int mwdma_mask;
		unsigned int nr_ports;
		const struct portinfo *port[2];
		unsigned long raw_base;
		unsigned long raw_ioc_base;
	} cocci_id/* drivers/ata/pata_icside.c 62 */;
	void __exit cocci_id/* drivers/ata/pata_icside.c 618 */;
	int __init cocci_id/* drivers/ata/pata_icside.c 613 */;
	struct ecard_driver cocci_id/* drivers/ata/pata_icside.c 603 */;
	const struct ecard_id cocci_id/* drivers/ata/pata_icside.c 597 */[];
	unsigned long cocci_id/* drivers/ata/pata_icside.c 555 */;
	struct pata_icside_state {
		void __iomem *irq_port;
		void __iomem *ioc_base;
		unsigned int type;
		unsigned int dma;
		struct {
			u8 port_sel;
			u8 disabled;
			unsigned int speed[ATA_MAX_DEVICES];
		} port[2];
	} cocci_id/* drivers/ata/pata_icside.c 50 */;
	struct pata_icside_info cocci_id/* drivers/ata/pata_icside.c 481 */;
	const struct ecard_id *cocci_id/* drivers/ata/pata_icside.c 478 */;
	struct ata_port *cocci_id/* drivers/ata/pata_icside.c 463 */;
	struct ata_host *cocci_id/* drivers/ata/pata_icside.c 440 */;
	struct ata_ioports *cocci_id/* drivers/ata/pata_icside.c 345 */;
	const struct portinfo *cocci_id/* drivers/ata/pata_icside.c 343 */;
	struct ata_port_operations cocci_id/* drivers/ata/pata_icside.c 324 */;
	const struct portinfo cocci_id/* drivers/ata/pata_icside.c 32 */;
	struct ata_link *cocci_id/* drivers/ata/pata_icside.c 302 */;
	unsigned int *cocci_id/* drivers/ata/pata_icside.c 302 */;
	struct scsi_host_template cocci_id/* drivers/ata/pata_icside.c 296 */;
	struct expansion_card *cocci_id/* drivers/ata/pata_icside.c 279 */;
	struct pata_icside_state *cocci_id/* drivers/ata/pata_icside.c 278 */;
	struct pata_icside_info *cocci_id/* drivers/ata/pata_icside.c 276 */;
	int cocci_id/* drivers/ata/pata_icside.c 276 */;
	void __iomem *cocci_id/* drivers/ata/pata_icside.c 268 */;
	u8 cocci_id/* drivers/ata/pata_icside.c 265 */;
	struct portinfo {
		unsigned int dataoffset;
		unsigned int ctrloffset;
		unsigned int stepping;
	} cocci_id/* drivers/ata/pata_icside.c 26 */;
	unsigned int cocci_id/* drivers/ata/pata_icside.c 224 */;
	struct ata_queued_cmd *cocci_id/* drivers/ata/pata_icside.c 220 */;
	void cocci_id/* drivers/ata/pata_icside.c 220 */;
	char cocci_id/* drivers/ata/pata_icside.c 193 */;
	struct ata_timing cocci_id/* drivers/ata/pata_icside.c 191 */;
	struct ata_device *cocci_id/* drivers/ata/pata_icside.c 188 */;
	const expansioncard_ops_t cocci_id/* drivers/ata/pata_icside.c 103 */;
}
