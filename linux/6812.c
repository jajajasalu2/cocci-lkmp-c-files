cocci_test_suite() {
	struct scsi_cmnd *cocci_id/* drivers/scsi/imm.c 959 */;
	void (*cocci_id/* drivers/scsi/imm.c 915 */)(struct scsi_cmnd *);
	void *cocci_id/* drivers/scsi/imm.c 74 */;
	struct work_struct *cocci_id/* drivers/scsi/imm.c 719 */;
	unsigned long cocci_id/* drivers/scsi/imm.c 630 */;
	int cocci_id/* drivers/scsi/imm.c 54 */(imm_struct *dev);
	void cocci_id/* drivers/scsi/imm.c 53 */(unsigned int base);
	long cocci_id/* drivers/scsi/imm.c 430 */;
	struct {
		struct pardevice *dev;
		int base;
		int base_hi;
		int mode;
		struct scsi_cmnd *cur_cmd;
		struct delayed_work imm_tq;
		unsigned long jstart;
		unsigned failed:1;
		unsigned dp:1;
		unsigned rd:1;
		unsigned wanted:1;
		unsigned int dev_no;
		wait_queue_head_t *waiting;
		struct Scsi_Host *host;
		struct list_head list;
	} cocci_id/* drivers/scsi/imm.c 35 */;
	char *cocci_id/* drivers/scsi/imm.c 332 */;
	const char *cocci_id/* drivers/scsi/imm.c 298 */;
	void cocci_id/* drivers/scsi/imm.c 281 */;
	unsigned short cocci_id/* drivers/scsi/imm.c 269 */;
	struct seq_file *cocci_id/* drivers/scsi/imm.c 139 */;
	void __exit cocci_id/* drivers/scsi/imm.c 1296 */;
	int __init cocci_id/* drivers/scsi/imm.c 1290 */;
	struct parport_driver cocci_id/* drivers/scsi/imm.c 1283 */;
	imm_struct **cocci_id/* drivers/scsi/imm.c 1241 */;
	imm_struct cocci_id/* drivers/scsi/imm.c 1162 */;
	struct pardev_cb cocci_id/* drivers/scsi/imm.c 1158 */;
	imm_struct *cocci_id/* drivers/scsi/imm.c 1152 */;
	struct Scsi_Host *cocci_id/* drivers/scsi/imm.c 1151 */;
	struct parport *cocci_id/* drivers/scsi/imm.c 1149 */;
	int cocci_id/* drivers/scsi/imm.c 1149 */;
	unsigned int cocci_id/* drivers/scsi/imm.c 1134 */;
	struct scsi_host_template cocci_id/* drivers/scsi/imm.c 1103 */;
	struct scsi_device *cocci_id/* drivers/scsi/imm.c 1097 */;
	unsigned char cocci_id/* drivers/scsi/imm.c 1014 */;
	char cocci_id/* drivers/scsi/imm.c 1012 */[6];
}
