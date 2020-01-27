cocci_test_suite() {
	struct aha1542_hostdata *cocci_id/* drivers/scsi/aha1542.c 984 */;
	sector_t cocci_id/* drivers/scsi/aha1542.c 982 */;
	int cocci_id/* drivers/scsi/aha1542.c 982 */[];
	struct block_device *cocci_id/* drivers/scsi/aha1542.c 982 */;
	struct scsi_device *cocci_id/* drivers/scsi/aha1542.c 981 */;
	int cocci_id/* drivers/scsi/aha1542.c 981 */;
	struct scsi_cmnd *cocci_id/* drivers/scsi/aha1542.c 971 */;
	struct ccb cocci_id/* drivers/scsi/aha1542.c 888 */;
	struct ccb *cocci_id/* drivers/scsi/aha1542.c 861 */;
	u8 cocci_id/* drivers/scsi/aha1542.c 858 */;
	struct mailbox *cocci_id/* drivers/scsi/aha1542.c 857 */;
	unsigned long cocci_id/* drivers/scsi/aha1542.c 856 */;
	struct Scsi_Host *cocci_id/* drivers/scsi/aha1542.c 854 */;
	struct mailbox cocci_id/* drivers/scsi/aha1542.c 773 */;
	struct aha1542_hostdata cocci_id/* drivers/scsi/aha1542.c 742 */;
	char cocci_id/* drivers/scsi/aha1542.c 734 */[];
	unsigned int cocci_id/* drivers/scsi/aha1542.c 731 */;
	u16 cocci_id/* drivers/scsi/aha1542.c 73 */;
	struct scsi_host_template *cocci_id/* drivers/scsi/aha1542.c 729 */;
	u8 cocci_id/* drivers/scsi/aha1542.c 699 */[];
	struct aha1542_cmd {
		struct chain *chain;
		dma_addr_t chain_handle;
	} cocci_id/* drivers/scsi/aha1542.c 68 */;
	u8 cocci_id/* drivers/scsi/aha1542.c 644 */[4];
	u8 cocci_id/* drivers/scsi/aha1542.c 609 */[2];
	struct aha1542_hostdata {
		int bios_translation;
		int aha1542_last_mbi_used;
		int aha1542_last_mbo_used;
		struct scsi_cmnd *int_cmds[AHA1542_MAILBOXES];
		struct mailbox *mb;
		dma_addr_t mb_handle;
		struct ccb *ccb;
		dma_addr_t ccb_handle;
	} cocci_id/* drivers/scsi/aha1542.c 56 */;
	u8 cocci_id/* drivers/scsi/aha1542.c 543 */[3];
	u8 cocci_id/* drivers/scsi/aha1542.c 525 */[5];
	struct scatterlist *cocci_id/* drivers/scsi/aha1542.c 480 */;
	int cocci_id/* drivers/scsi/aha1542.c 44 */[MAXBOARDS];
	bool cocci_id/* drivers/scsi/aha1542.c 30 */;
	void (*cocci_id/* drivers/scsi/aha1542.c 263 */)(struct scsi_cmnd *);
	irqreturn_t cocci_id/* drivers/scsi/aha1542.c 259 */;
	void *cocci_id/* drivers/scsi/aha1542.c 259 */;
	struct chain cocci_id/* drivers/scsi/aha1542.c 248 */;
	size_t cocci_id/* drivers/scsi/aha1542.c 248 */;
	struct device *cocci_id/* drivers/scsi/aha1542.c 247 */;
	struct aha1542_cmd *cocci_id/* drivers/scsi/aha1542.c 246 */;
	unsigned cocci_id/* drivers/scsi/aha1542.c 135 */;
	u8 *cocci_id/* drivers/scsi/aha1542.c 125 */;
	void __exit cocci_id/* drivers/scsi/aha1542.c 1120 */;
	void cocci_id/* drivers/scsi/aha1542.c 1120 */;
	int __init cocci_id/* drivers/scsi/aha1542.c 1095 */;
	struct pnp_driver cocci_id/* drivers/scsi/aha1542.c 1086 */;
	const struct pnp_device_id *cocci_id/* drivers/scsi/aha1542.c 1052 */;
	struct pnp_dev *cocci_id/* drivers/scsi/aha1542.c 1052 */;
	const struct pnp_device_id cocci_id/* drivers/scsi/aha1542.c 1046 */[];
	struct isa_driver cocci_id/* drivers/scsi/aha1542.c 1036 */;
	struct aha1542_cmd cocci_id/* drivers/scsi/aha1542.c 1005 */;
	struct scsi_host_template cocci_id/* drivers/scsi/aha1542.c 1001 */;
}
