cocci_test_suite() {
	struct scsi_host_template cocci_id/* drivers/scsi/ppa.c 970 */;
	struct scsi_device *cocci_id/* drivers/scsi/ppa.c 964 */;
	unsigned char cocci_id/* drivers/scsi/ppa.c 888 */;
	u8 cocci_id/* drivers/scsi/ppa.c 886 */[6];
	struct scsi_cmnd *cocci_id/* drivers/scsi/ppa.c 837 */;
	void (*cocci_id/* drivers/scsi/ppa.c 791 */)(struct scsi_cmnd *);
	void *cocci_id/* drivers/scsi/ppa.c 64 */;
	struct work_struct *cocci_id/* drivers/scsi/ppa.c 613 */;
	unsigned long cocci_id/* drivers/scsi/ppa.c 523 */;
	long cocci_id/* drivers/scsi/ppa.c 354 */;
	struct {
		struct pardevice *dev;
		int base;
		int mode;
		struct scsi_cmnd *cur_cmd;
		struct delayed_work ppa_tq;
		unsigned long jstart;
		unsigned long recon_tmo;
		unsigned int failed:1;
		unsigned wanted:1;
		unsigned int dev_no;
		wait_queue_head_t *waiting;
		struct Scsi_Host *host;
		struct list_head list;
	} cocci_id/* drivers/scsi/ppa.c 30 */;
	void cocci_id/* drivers/scsi/ppa.c 28 */(unsigned int base);
	char *cocci_id/* drivers/scsi/ppa.c 252 */;
	const char *cocci_id/* drivers/scsi/ppa.c 240 */;
	void cocci_id/* drivers/scsi/ppa.c 223 */;
	unsigned short cocci_id/* drivers/scsi/ppa.c 211 */;
	int cocci_id/* drivers/scsi/ppa.c 155 */(ppa_struct *dev);
	struct seq_file *cocci_id/* drivers/scsi/ppa.c 142 */;
	void __exit cocci_id/* drivers/scsi/ppa.c 1161 */;
	int __init cocci_id/* drivers/scsi/ppa.c 1155 */;
	struct parport_driver cocci_id/* drivers/scsi/ppa.c 1148 */;
	ppa_struct **cocci_id/* drivers/scsi/ppa.c 1110 */;
	ppa_struct cocci_id/* drivers/scsi/ppa.c 1027 */;
	struct pardev_cb cocci_id/* drivers/scsi/ppa.c 1025 */;
	ppa_struct *cocci_id/* drivers/scsi/ppa.c 1021 */;
	struct Scsi_Host *cocci_id/* drivers/scsi/ppa.c 1018 */;
	struct parport *cocci_id/* drivers/scsi/ppa.c 1016 */;
	int cocci_id/* drivers/scsi/ppa.c 1016 */;
	unsigned int cocci_id/* drivers/scsi/ppa.c 1001 */;
}
