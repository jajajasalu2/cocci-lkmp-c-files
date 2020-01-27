cocci_test_suite() {
	struct aha1740_sg {
		struct aha1740_chain sg_chain[AHA1740_SCATTER];
		dma_addr_t sg_dma_addr;
		dma_addr_t buf_dma_addr;
	} cocci_id/* drivers/scsi/aha1740.c 80 */;
	struct aha1740_hostdata {
		struct eisa_device *edev;
		unsigned int translation;
		unsigned int last_ecb_used;
		dma_addr_t ecb_dma_addr;
		struct ecb ecb[AHA1740_ECBS];
	} cocci_id/* drivers/scsi/aha1740.c 72 */;
	void cocci_id/* drivers/scsi/aha1740.c 669 */;
	struct eisa_driver cocci_id/* drivers/scsi/aha1740.c 655 */;
	struct eisa_device_id cocci_id/* drivers/scsi/aha1740.c 646 */[];
	struct aha1740_hostdata cocci_id/* drivers/scsi/aha1740.c 578 */;
	struct aha1740_hostdata *cocci_id/* drivers/scsi/aha1740.c 556 */;
	struct device *cocci_id/* drivers/scsi/aha1740.c 551 */;
	struct scsi_host_template cocci_id/* drivers/scsi/aha1740.c 538 */;
	struct scsi_cmnd *cocci_id/* drivers/scsi/aha1740.c 524 */;
	sector_t cocci_id/* drivers/scsi/aha1740.c 506 */;
	int *cocci_id/* drivers/scsi/aha1740.c 506 */;
	struct block_device *cocci_id/* drivers/scsi/aha1740.c 505 */;
	struct scsi_device *cocci_id/* drivers/scsi/aha1740.c 504 */;
	int cocci_id/* drivers/scsi/aha1740.c 504 */;
	struct aha1740_chain cocci_id/* drivers/scsi/aha1740.c 410 */;
	unsigned char *cocci_id/* drivers/scsi/aha1740.c 401 */;
	struct aha1740_chain *cocci_id/* drivers/scsi/aha1740.c 399 */;
	struct scatterlist *cocci_id/* drivers/scsi/aha1740.c 398 */;
	dma_addr_t cocci_id/* drivers/scsi/aha1740.c 322 */;
	unchar cocci_id/* drivers/scsi/aha1740.c 317 */;
	struct ecb cocci_id/* drivers/scsi/aha1740.c 279 */;
	struct aha1740_sg cocci_id/* drivers/scsi/aha1740.c 259 */;
	struct eisa_device *cocci_id/* drivers/scsi/aha1740.c 219 */;
	struct aha1740_sg *cocci_id/* drivers/scsi/aha1740.c 218 */;
	unsigned long cocci_id/* drivers/scsi/aha1740.c 216 */;
	unsigned int cocci_id/* drivers/scsi/aha1740.c 215 */;
	struct ecb *cocci_id/* drivers/scsi/aha1740.c 213 */;
	void (*cocci_id/* drivers/scsi/aha1740.c 210 */)(struct scsi_cmnd *);
	struct Scsi_Host *cocci_id/* drivers/scsi/aha1740.c 209 */;
	irqreturn_t cocci_id/* drivers/scsi/aha1740.c 207 */;
	void *cocci_id/* drivers/scsi/aha1740.c 207 */;
	struct statusword *cocci_id/* drivers/scsi/aha1740.c 139 */;
	struct statusword {
		ushort don:1,du:1,:1,qf:1,sc:1,dor:1,ch:1,intr:1,asa:1,sns:1,:1,ini:1,me:1,:1,eca:1,:1;
	} cocci_id/* drivers/scsi/aha1740.c 121 */;
	unchar *cocci_id/* drivers/scsi/aha1740.c 119 */;
	struct seq_file *cocci_id/* drivers/scsi/aha1740.c 109 */;
	char *cocci_id/* drivers/scsi/aha1740.c 104 */;
}
