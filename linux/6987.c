cocci_test_suite() {
	struct gdrom_unit {
		struct gendisk *disk;
		struct cdrom_device_info *cd_info;
		int status;
		int pending;
		int transfer;
		char disk_type;
		struct gdromtoc *toc;
		struct request_queue *gdrom_rq;
		struct blk_mq_tag_set tag_set;
	} cocci_id/* drivers/cdrom/gdrom.c 96 */;
	struct gdromtoc {
		unsigned int entry[99];
		unsigned int first,last;
		unsigned int leadout;
	} cocci_id/* drivers/cdrom/gdrom.c 90 */;
	void __exit cocci_id/* drivers/cdrom/gdrom.c 858 */;
	void cocci_id/* drivers/cdrom/gdrom.c 858 */;
	struct platform_device *cocci_id/* drivers/cdrom/gdrom.c 85 */;
	int __init cocci_id/* drivers/cdrom/gdrom.c 843 */;
	struct platform_driver cocci_id/* drivers/cdrom/gdrom.c 835 */;
	struct cdrom_device_info cocci_id/* drivers/cdrom/gdrom.c 758 */;
	const struct blk_mq_ops cocci_id/* drivers/cdrom/gdrom.c 732 */;
	const struct {
		int sense_key;
		const char *const text;
	} cocci_id/* drivers/cdrom/gdrom.c 70 */[];
	struct gdrom_id cocci_id/* drivers/cdrom/gdrom.c 656 */;
	char *cocci_id/* drivers/cdrom/gdrom.c 652 */;
	struct gdrom_id *cocci_id/* drivers/cdrom/gdrom.c 651 */;
	const struct blk_mq_queue_data *cocci_id/* drivers/cdrom/gdrom.c 632 */;
	blk_status_t cocci_id/* drivers/cdrom/gdrom.c 631 */;
	struct blk_mq_hw_ctx *cocci_id/* drivers/cdrom/gdrom.c 631 */;
	struct request *cocci_id/* drivers/cdrom/gdrom.c 568 */;
	irqreturn_t cocci_id/* drivers/cdrom/gdrom.c 523 */;
	const struct block_device_operations cocci_id/* drivers/cdrom/gdrom.c 515 */;
	unsigned long cocci_id/* drivers/cdrom/gdrom.c 504 */;
	unsigned cocci_id/* drivers/cdrom/gdrom.c 504 */;
	fmode_t cocci_id/* drivers/cdrom/gdrom.c 503 */;
	struct block_device *cocci_id/* drivers/cdrom/gdrom.c 503 */;
	struct gendisk *cocci_id/* drivers/cdrom/gdrom.c 497 */;
	const struct cdrom_device_ops cocci_id/* drivers/cdrom/gdrom.c 465 */;
	void *cocci_id/* drivers/cdrom/gdrom.c 460 */;
	struct cdrom_device_info *cocci_id/* drivers/cdrom/gdrom.c 459 */;
	unsigned int cocci_id/* drivers/cdrom/gdrom.c 459 */;
	int cocci_id/* drivers/cdrom/gdrom.c 459 */;
	struct packet_command cocci_id/* drivers/cdrom/gdrom.c 419 */;
	short cocci_id/* drivers/cdrom/gdrom.c 415 */[5];
	struct packet_command *cocci_id/* drivers/cdrom/gdrom.c 414 */;
	short *cocci_id/* drivers/cdrom/gdrom.c 412 */;
	char cocci_id/* drivers/cdrom/gdrom.c 369 */;
	struct cdrom_multisession *cocci_id/* drivers/cdrom/gdrom.c 314 */;
	struct gdromtoc cocci_id/* drivers/cdrom/gdrom.c 268 */;
	struct gdromtoc *cocci_id/* drivers/cdrom/gdrom.c 259 */;
	bool cocci_id/* drivers/cdrom/gdrom.c 129 */;
	int cocci_id/* drivers/cdrom/gdrom.c 122 */(struct cdrom_device_info *cd_info);
	int cocci_id/* drivers/cdrom/gdrom.c 120 */(struct cdrom_device_info *cd_info,
						    struct packet_command *command);
	int cocci_id/* drivers/cdrom/gdrom.c 119 */(short *bufstring);
	struct gdrom_id {
		char mid;
		char modid;
		char verid;
		char padA[13];
		char mname[16];
		char modname[16];
		char firmver[16];
		char padB[16];
	} cocci_id/* drivers/cdrom/gdrom.c 108 */;
}
