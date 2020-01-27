cocci_test_suite() {
	struct fdomain cocci_id/* drivers/scsi/fdomain.c 529 */;
	const char *const cocci_id/* drivers/scsi/fdomain.c 510 */[];
	enum chip_type cocci_id/* drivers/scsi/fdomain.c 509 */;
	struct device *cocci_id/* drivers/scsi/fdomain.c 505 */;
	struct scsi_host_template cocci_id/* drivers/scsi/fdomain.c 490 */;
	unsigned char *cocci_id/* drivers/scsi/fdomain.c 466 */;
	int cocci_id/* drivers/scsi/fdomain.c 464 */[];
	sector_t cocci_id/* drivers/scsi/fdomain.c 463 */;
	struct block_device *cocci_id/* drivers/scsi/fdomain.c 463 */;
	struct scsi_device *cocci_id/* drivers/scsi/fdomain.c 462 */;
	unsigned long cocci_id/* drivers/scsi/fdomain.c 433 */;
	struct fdomain *cocci_id/* drivers/scsi/fdomain.c 432 */;
	struct Scsi_Host *cocci_id/* drivers/scsi/fdomain.c 431 */;
	struct scsi_cmnd *cocci_id/* drivers/scsi/fdomain.c 429 */;
	int cocci_id/* drivers/scsi/fdomain.c 429 */;
	irqreturn_t cocci_id/* drivers/scsi/fdomain.c 378 */;
	void *cocci_id/* drivers/scsi/fdomain.c 378 */;
	struct Scsi_Host cocci_id/* drivers/scsi/fdomain.c 264 */;
	struct work_struct *cocci_id/* drivers/scsi/fdomain.c 261 */;
	size_t cocci_id/* drivers/scsi/fdomain.c 218 */;
	void cocci_id/* drivers/scsi/fdomain.c 205 */;
	u16 cocci_id/* drivers/scsi/fdomain.c 132 */;
	struct fdomain {
		int base;
		struct scsi_cmnd *cur_cmd;
		enum chip_type chip;
		struct work_struct work;
	} cocci_id/* drivers/scsi/fdomain.c 111 */;
	enum chip_type{unknown=0x00, tmc1800=0x01, tmc18c50=0x02, tmc18c30=0x03,} cocci_id/* drivers/scsi/fdomain.c 104 */;
}
