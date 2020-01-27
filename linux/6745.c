cocci_test_suite() {
	struct pcmcia_driver cocci_id/* drivers/scsi/pcmcia/sym53c500_cs.c 865 */;
	const struct pcmcia_device_id cocci_id/* drivers/scsi/pcmcia/sym53c500_cs.c 857 */[];
	void cocci_id/* drivers/scsi/pcmcia/sym53c500_cs.c 824 */;
	struct sym53c500_data cocci_id/* drivers/scsi/pcmcia/sym53c500_cs.c 746 */;
	struct sym53c500_data *cocci_id/* drivers/scsi/pcmcia/sym53c500_cs.c 697 */;
	struct scsi_host_template *cocci_id/* drivers/scsi/pcmcia/sym53c500_cs.c 696 */;
	struct Scsi_Host *cocci_id/* drivers/scsi/pcmcia/sym53c500_cs.c 695 */;
	struct scsi_info_t *cocci_id/* drivers/scsi/pcmcia/sym53c500_cs.c 692 */;
	struct pcmcia_device *cocci_id/* drivers/scsi/pcmcia/sym53c500_cs.c 690 */;
	void *cocci_id/* drivers/scsi/pcmcia/sym53c500_cs.c 677 */;
	struct scsi_host_template cocci_id/* drivers/scsi/pcmcia/sym53c500_cs.c 663 */;
	struct device_attribute *cocci_id/* drivers/scsi/pcmcia/sym53c500_cs.c 655 */[];
	struct device_attribute cocci_id/* drivers/scsi/pcmcia/sym53c500_cs.c 646 */;
	size_t cocci_id/* drivers/scsi/pcmcia/sym53c500_cs.c 626 */;
	char *cocci_id/* drivers/scsi/pcmcia/sym53c500_cs.c 615 */;
	struct device_attribute *cocci_id/* drivers/scsi/pcmcia/sym53c500_cs.c 614 */;
	struct device *cocci_id/* drivers/scsi/pcmcia/sym53c500_cs.c 614 */;
	ssize_t cocci_id/* drivers/scsi/pcmcia/sym53c500_cs.c 613 */;
	sector_t cocci_id/* drivers/scsi/pcmcia/sym53c500_cs.c 595 */;
	int *cocci_id/* drivers/scsi/pcmcia/sym53c500_cs.c 595 */;
	struct block_device *cocci_id/* drivers/scsi/pcmcia/sym53c500_cs.c 594 */;
	struct scsi_device *cocci_id/* drivers/scsi/pcmcia/sym53c500_cs.c 593 */;
	int cocci_id/* drivers/scsi/pcmcia/sym53c500_cs.c 592 */;
	u8 cocci_id/* drivers/scsi/pcmcia/sym53c500_cs.c 552 */;
	void (*cocci_id/* drivers/scsi/pcmcia/sym53c500_cs.c 541 */)(struct scsi_cmnd *);
	char cocci_id/* drivers/scsi/pcmcia/sym53c500_cs.c 529 */[256];
	const char *cocci_id/* drivers/scsi/pcmcia/sym53c500_cs.c 526 */;
	struct scatterlist *cocci_id/* drivers/scsi/pcmcia/sym53c500_cs.c 412 */;
	struct scsi_cmnd *cocci_id/* drivers/scsi/pcmcia/sym53c500_cs.c 353 */;
	unsigned char cocci_id/* drivers/scsi/pcmcia/sym53c500_cs.c 348 */;
	unsigned long cocci_id/* drivers/scsi/pcmcia/sym53c500_cs.c 344 */;
	irqreturn_t cocci_id/* drivers/scsi/pcmcia/sym53c500_cs.c 341 */;
	unsigned char *cocci_id/* drivers/scsi/pcmcia/sym53c500_cs.c 236 */;
	unsigned int cocci_id/* drivers/scsi/pcmcia/sym53c500_cs.c 236 */;
	enum Phase{idle, data_out, data_in, command_ph, status_ph, message_out, message_in,} cocci_id/* drivers/scsi/pcmcia/sym53c500_cs.c 195 */;
	struct sym53c500_data {
		struct scsi_cmnd *current_SC;
		int fast_pio;
	} cocci_id/* drivers/scsi/pcmcia/sym53c500_cs.c 190 */;
	struct scsi_info_t {
		struct pcmcia_device *p_dev;
		struct Scsi_Host *host;
		unsigned short manf_id;
	} cocci_id/* drivers/scsi/pcmcia/sym53c500_cs.c 181 */;
}
