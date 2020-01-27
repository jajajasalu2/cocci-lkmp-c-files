cocci_test_suite() {
	enum action cocci_id/* drivers/scsi/qla1280.c 820 */;
	struct completion *cocci_id/* drivers/scsi/qla1280.c 748 */;
	struct timer_list *cocci_id/* drivers/scsi/qla1280.c 733 */;
	void (*cocci_id/* drivers/scsi/qla1280.c 694 */)(struct scsi_cmnd *);
	struct qla_boards *cocci_id/* drivers/scsi/qla1280.c 667 */;
	char cocci_id/* drivers/scsi/qla1280.c 664 */[125];
	const char *cocci_id/* drivers/scsi/qla1280.c 661 */;
	struct nvram cocci_id/* drivers/scsi/qla1280.c 607 */;
	struct qla_boards cocci_id/* drivers/scsi/qla1280.c 545 */[];
	struct qla_fw cocci_id/* drivers/scsi/qla1280.c 538 */[QL_NUM_FW_IMAGES];
	struct qla_fw {
		char *fwname;
		const struct firmware *fw;
	} cocci_id/* drivers/scsi/qla1280.c 531 */;
	struct pci_device_id cocci_id/* drivers/scsi/qla1280.c 512 */[];
	struct qla_boards {
		char *name;
		int numPorts;
		int fw_index;
	} cocci_id/* drivers/scsi/qla1280.c 505 */;
	void cocci_id/* drivers/scsi/qla1280.c 463 */(char *, int);
	void cocci_id/* drivers/scsi/qla1280.c 462 */(struct scsi_cmnd *cmd);
	void __exit cocci_id/* drivers/scsi/qla1280.c 4383 */;
	struct scsi_pointer cocci_id/* drivers/scsi/qla1280.c 4357 */;
	struct qla_driver_setup cocci_id/* drivers/scsi/qla1280.c 435 */;
	struct pci_driver cocci_id/* drivers/scsi/qla1280.c 4347 */;
	void cocci_id/* drivers/scsi/qla1280.c 430 */(struct scsi_qla_host *,
						      struct scsi_device *);
	int cocci_id/* drivers/scsi/qla1280.c 428 */(struct scsi_qla_host *,
						     unsigned int);
	request_t *cocci_id/* drivers/scsi/qla1280.c 427 */(struct scsi_qla_host *);
	uint16_t cocci_id/* drivers/scsi/qla1280.c 426 */(volatile uint16_t __iomem *);
	struct device_reg *cocci_id/* drivers/scsi/qla1280.c 4257 */;
	uint16_t cocci_id/* drivers/scsi/qla1280.c 424 */(struct scsi_qla_host *,
							  uint32_t);
	void cocci_id/* drivers/scsi/qla1280.c 422 */(struct scsi_qla_host *,
						      struct response *,
						      struct list_head *);
	struct response cocci_id/* drivers/scsi/qla1280.c 4218 */;
	request_t cocci_id/* drivers/scsi/qla1280.c 4210 */;
	struct scsi_qla_host cocci_id/* drivers/scsi/qla1280.c 4184 */;
	void cocci_id/* drivers/scsi/qla1280.c 418 */(struct scsi_qla_host *,
						      struct list_head *);
	void cocci_id/* drivers/scsi/qla1280.c 416 */(struct scsi_qla_host *,
						      int, int, int, u8);
	const struct pci_device_id *cocci_id/* drivers/scsi/qla1280.c 4149 */;
	struct pci_dev *cocci_id/* drivers/scsi/qla1280.c 4149 */;
	struct scsi_host_template cocci_id/* drivers/scsi/qla1280.c 4130 */;
	void cocci_id/* drivers/scsi/qla1280.c 413 */(struct scsi_qla_host *,
						      uint16_t);
	int cocci_id/* drivers/scsi/qla1280.c 411 */(struct scsi_qla_host *,
						     struct srb *);
	int __init cocci_id/* drivers/scsi/qla1280.c 4108 */;
	int cocci_id/* drivers/scsi/qla1280.c 407 */(struct scsi_qla_host *);
	int cocci_id/* drivers/scsi/qla1280.c 406 */(struct scsi_qla_host *,
						     struct srb *, int);
	int cocci_id/* drivers/scsi/qla1280.c 405 */(struct scsi_qla_host *,
						     int, int);
	int cocci_id/* drivers/scsi/qla1280.c 404 */(struct scsi_qla_host *,
						     int);
	struct setup_tokens cocci_id/* drivers/scsi/qla1280.c 4029 */[]__initdata;
	struct setup_tokens {
		char *token;
		int val;
	} cocci_id/* drivers/scsi/qla1280.c 4024 */;
	int cocci_id/* drivers/scsi/qla1280.c 402 */(struct scsi_qla_host *,
						     uint8_t, uint16_t *);
	enum tokens{TOKEN_NVRAM, TOKEN_SYNC, TOKEN_WIDE, TOKEN_PPR, TOKEN_VERBOSE, TOKEN_DEBUG,} cocci_id/* drivers/scsi/qla1280.c 4015 */;
	struct srb *cocci_id/* drivers/scsi/qla1280.c 3959 */;
	struct Scsi_Host *cocci_id/* drivers/scsi/qla1280.c 3958 */;
	struct scsi_qla_host *cocci_id/* drivers/scsi/qla1280.c 3957 */;
	struct scsi_cmnd *cocci_id/* drivers/scsi/qla1280.c 3955 */;
	int cocci_id/* drivers/scsi/qla1280.c 394 */(char *s)__init;
	int cocci_id/* drivers/scsi/qla1280.c 393 */(char *);
	u8 cocci_id/* drivers/scsi/qla1280.c 3929 */;
	char *cocci_id/* drivers/scsi/qla1280.c 3926 */;
	int cocci_id/* drivers/scsi/qla1280.c 3926 */;
	void cocci_id/* drivers/scsi/qla1280.c 3925 */;
	void cocci_id/* drivers/scsi/qla1280.c 392 */(struct scsi_qla_host *);
	void cocci_id/* drivers/scsi/qla1280.c 387 */(struct pci_dev *);
	int cocci_id/* drivers/scsi/qla1280.c 386 */(struct pci_dev *,
						     const struct pci_device_id *);
	volatile u16 cocci_id/* drivers/scsi/qla1280.c 3837 */;
	volatile u16 __iomem *cocci_id/* drivers/scsi/qla1280.c 3835 */;
	u16 cocci_id/* drivers/scsi/qla1280.c 3834 */;
	uint32_t cocci_id/* drivers/scsi/qla1280.c 3698 */;
	struct response *cocci_id/* drivers/scsi/qla1280.c 3694 */;
	uint16_t *cocci_id/* drivers/scsi/qla1280.c 3345 */;
	request_t *cocci_id/* drivers/scsi/qla1280.c 3231 */;
	struct cont_entry *cocci_id/* drivers/scsi/qla1280.c 3153 */;
	struct scatterlist *cocci_id/* drivers/scsi/qla1280.c 3107 */;
	uint8_t cocci_id/* drivers/scsi/qla1280.c 3071 */;
	unsigned char *cocci_id/* drivers/scsi/qla1280.c 3061 */;
	unsigned long cocci_id/* drivers/scsi/qla1280.c 3061 */;
	__le32 *cocci_id/* drivers/scsi/qla1280.c 2997 */;
	struct cmd_entry *cocci_id/* drivers/scsi/qla1280.c 2996 */;
	struct device_reg __iomem *cocci_id/* drivers/scsi/qla1280.c 2994 */;
	struct cont_a64_entry *cocci_id/* drivers/scsi/qla1280.c 2908 */;
	u32 *cocci_id/* drivers/scsi/qla1280.c 2858 */;
	long cocci_id/* drivers/scsi/qla1280.c 2805 */;
	dma_addr_t cocci_id/* drivers/scsi/qla1280.c 2744 */;
	cmd_a64_entry_t *cocci_id/* drivers/scsi/qla1280.c 2742 */;
	struct mrk_entry *cocci_id/* drivers/scsi/qla1280.c 2704 */;
	unsigned int cocci_id/* drivers/scsi/qla1280.c 2639 */;
	uint16_t cocci_id/* drivers/scsi/qla1280.c 2638 */[MAILBOX_REGISTER_COUNT];
	uint16_t cocci_id/* drivers/scsi/qla1280.c 2545 */;
	uint16_t __iomem *cocci_id/* drivers/scsi/qla1280.c 2421 */;
	struct nvram *cocci_id/* drivers/scsi/qla1280.c 2123 */;
	__le16 *cocci_id/* drivers/scsi/qla1280.c 1749 */;
	uint8_t *cocci_id/* drivers/scsi/qla1280.c 1713 */;
	const __le16 *cocci_id/* drivers/scsi/qla1280.c 1708 */;
	const struct firmware *cocci_id/* drivers/scsi/qla1280.c 1707 */;
	char *cocci_id/* drivers/scsi/qla1280.c 1301 */[];
	struct srb cocci_id/* drivers/scsi/qla1280.c 1252 */;
	struct list_head *cocci_id/* drivers/scsi/qla1280.c 1243 */;
	void *cocci_id/* drivers/scsi/qla1280.c 1079 */;
	irqreturn_t cocci_id/* drivers/scsi/qla1280.c 1078 */;
	sector_t cocci_id/* drivers/scsi/qla1280.c 1035 */;
	int cocci_id/* drivers/scsi/qla1280.c 1035 */[];
	struct scsi_device *cocci_id/* drivers/scsi/qla1280.c 1034 */;
	struct block_device *cocci_id/* drivers/scsi/qla1280.c 1034 */;
}
