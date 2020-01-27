cocci_test_suite() {
	struct cdrom_mcn *cocci_id/* drivers/block/paride/pcd.c 987 */;
	unsigned char cocci_id/* drivers/block/paride/pcd.c 956 */[32];
	struct cdrom_tocentry *cocci_id/* drivers/block/paride/pcd.c 954 */;
	char cocci_id/* drivers/block/paride/pcd.c 936 */[32];
	struct cdrom_tochdr *cocci_id/* drivers/block/paride/pcd.c 934 */;
	char cocci_id/* drivers/block/paride/pcd.c 931 */[12];
	struct cdrom_device_info *cocci_id/* drivers/block/paride/pcd.c 922 */;
	unsigned int cocci_id/* drivers/block/paride/pcd.c 922 */;
	unsigned long cocci_id/* drivers/block/paride/pcd.c 900 */;
	void cocci_id/* drivers/block/paride/pcd.c 885 */;
	blk_status_t cocci_id/* drivers/block/paride/pcd.c 831 */;
	const struct blk_mq_queue_data *cocci_id/* drivers/block/paride/pcd.c 814 */;
	struct blk_mq_hw_ctx *cocci_id/* drivers/block/paride/pcd.c 813 */;
	struct request cocci_id/* drivers/block/paride/pcd.c 781 */;
	int *cocci_id/* drivers/block/paride/pcd.c 736 */;
	char cocci_id/* drivers/block/paride/pcd.c 710 */[18];
	int cocci_id/* drivers/block/paride/pcd.c 565 */[5];
	struct packet_command *cocci_id/* drivers/block/paride/pcd.c 523 */;
	struct pcd_unit *cocci_id/* drivers/block/paride/pcd.c 509 */;
	char cocci_id/* drivers/block/paride/pcd.c 487 */[16];
	const struct blk_mq_ops cocci_id/* drivers/block/paride/pcd.c 298 */;
	const struct cdrom_device_ops cocci_id/* drivers/block/paride/pcd.c 281 */;
	const struct block_device_operations cocci_id/* drivers/block/paride/pcd.c 273 */;
	struct gendisk *cocci_id/* drivers/block/paride/pcd.c 266 */;
	unsigned cocci_id/* drivers/block/paride/pcd.c 254 */;
	fmode_t cocci_id/* drivers/block/paride/pcd.c 253 */;
	struct block_device *cocci_id/* drivers/block/paride/pcd.c 253 */;
	void *cocci_id/* drivers/block/paride/pcd.c 227 */;
	struct request *cocci_id/* drivers/block/paride/pcd.c 221 */;
	char cocci_id/* drivers/block/paride/pcd.c 210 */[2048];
	char cocci_id/* drivers/block/paride/pcd.c 209 */[64];
	struct pcd_unit cocci_id/* drivers/block/paride/pcd.c 207 */[PCD_UNITS];
	struct pcd_unit {
		struct pi_adapter pia;
		struct pi_adapter *pi;
		int drive;
		int last_sense;
		int changed;
		int present;
		char *name;
		struct cdrom_device_info info;
		struct gendisk *disk;
		struct blk_mq_tag_set tag_set;
		struct list_head rq_list;
	} cocci_id/* drivers/block/paride/pcd.c 193 */;
	void cocci_id/* drivers/block/paride/pcd.c 191 */(void);
	blk_status_t cocci_id/* drivers/block/paride/pcd.c 189 */(struct blk_mq_hw_ctx *hctx,
								  const struct blk_mq_queue_data *bd);
	int cocci_id/* drivers/block/paride/pcd.c 186 */(void);
	int cocci_id/* drivers/block/paride/pcd.c 183 */(struct cdrom_device_info *cdi,
							 struct packet_command *cgc);
	int cocci_id/* drivers/block/paride/pcd.c 181 */(struct cdrom_device_info *cdi,
							 unsigned int cmd,
							 void *arg);
	int cocci_id/* drivers/block/paride/pcd.c 180 */(struct cdrom_device_info *cdi,
							 struct cdrom_mcn *mcn);
	int cocci_id/* drivers/block/paride/pcd.c 179 */(struct cdrom_device_info *cdi);
	int cocci_id/* drivers/block/paride/pcd.c 178 */(struct cdrom_device_info *cdi,
							 int lock);
	int cocci_id/* drivers/block/paride/pcd.c 177 */(struct cdrom_device_info *cdi,
							 int position);
	unsigned int cocci_id/* drivers/block/paride/pcd.c 175 */(struct cdrom_device_info *cdi,
								  unsigned int clearing,
								  int slot_nr);
	int cocci_id/* drivers/block/paride/pcd.c 174 */(struct cdrom_device_info *cdi,
							 int slot_nr);
	void cocci_id/* drivers/block/paride/pcd.c 173 */(struct cdrom_device_info *cdi);
	int cocci_id/* drivers/block/paride/pcd.c 172 */(struct cdrom_device_info *cdi,
							 int purpose);
	enum{D_PRT, D_PRO, D_UNI, D_MOD, D_SLV, D_DLY,} cocci_id/* drivers/block/paride/pcd.c 128 */;
	int *cocci_id/* drivers/block/paride/pcd.c 125 */[4][6];
	int cocci_id/* drivers/block/paride/pcd.c 120 */[6];
	int cocci_id/* drivers/block/paride/pcd.c 118 */;
	char *cocci_id/* drivers/block/paride/pcd.c 116 */;
	void __exit cocci_id/* drivers/block/paride/pcd.c 1041 */;
	int __init cocci_id/* drivers/block/paride/pcd.c 1002 */;
}
