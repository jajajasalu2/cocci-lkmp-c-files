cocci_test_suite() {
	void cocci_id/* drivers/block/paride/pf.c 918 */;
	unsigned long cocci_id/* drivers/block/paride/pf.c 908 */;
	blk_status_t cocci_id/* drivers/block/paride/pf.c 906 */;
	const struct blk_mq_queue_data *cocci_id/* drivers/block/paride/pf.c 872 */;
	struct blk_mq_hw_ctx *cocci_id/* drivers/block/paride/pf.c 871 */;
	struct request cocci_id/* drivers/block/paride/pf.c 816 */;
	int *cocci_id/* drivers/block/paride/pf.c 748 */;
	unsigned long long cocci_id/* drivers/block/paride/pf.c 690 */;
	char cocci_id/* drivers/block/paride/pf.c 655 */[36];
	char cocci_id/* drivers/block/paride/pf.c 652 */[10];
	char *cocci_id/* drivers/block/paride/pf.c 651 */[2];
	char cocci_id/* drivers/block/paride/pf.c 630 */[8];
	int cocci_id/* drivers/block/paride/pf.c 562 */[5];
	char cocci_id/* drivers/block/paride/pf.c 541 */[12];
	struct pf_unit *cocci_id/* drivers/block/paride/pf.c 518 */;
	char cocci_id/* drivers/block/paride/pf.c 505 */[16];
	struct gendisk *cocci_id/* drivers/block/paride/pf.c 406 */;
	unsigned int cocci_id/* drivers/block/paride/pf.c 406 */;
	fmode_t cocci_id/* drivers/block/paride/pf.c 371 */;
	sector_t cocci_id/* drivers/block/paride/pf.c 356 */;
	struct hd_geometry *cocci_id/* drivers/block/paride/pf.c 353 */;
	struct block_device *cocci_id/* drivers/block/paride/pf.c 353 */;
	void __init cocci_id/* drivers/block/paride/pf.c 287 */;
	const struct blk_mq_ops cocci_id/* drivers/block/paride/pf.c 283 */;
	const struct block_device_operations cocci_id/* drivers/block/paride/pf.c 274 */;
	void *cocci_id/* drivers/block/paride/pf.c 270 */;
	struct request *cocci_id/* drivers/block/paride/pf.c 262 */;
	char cocci_id/* drivers/block/paride/pf.c 254 */[512];
	unsigned int cocci_id/* drivers/block/paride/pf.c 251 */(struct gendisk *disk,
								 unsigned int clearing);
	void cocci_id/* drivers/block/paride/pf.c 250 */(struct pf_unit *pf);
	void cocci_id/* drivers/block/paride/pf.c 249 */(struct pf_unit *pf,
							 int func);
	int cocci_id/* drivers/block/paride/pf.c 248 */(struct pf_unit *pf);
	struct pf_unit cocci_id/* drivers/block/paride/pf.c 246 */[PF_UNITS];
	struct pf_unit {
		struct pi_adapter pia;
		struct pi_adapter *pi;
		int removable;
		int media_status;
		int drive;
		int lun;
		int access;
		int present;
		char name[PF_NAMELEN];
		struct gendisk *disk;
		struct blk_mq_tag_set tag_set;
		struct list_head rq_list;
	} cocci_id/* drivers/block/paride/pf.c 231 */;
	void cocci_id/* drivers/block/paride/pf.c 218 */(void);
	int cocci_id/* drivers/block/paride/pf.c 217 */(void);
	void cocci_id/* drivers/block/paride/pf.c 215 */(struct gendisk *disk,
							 fmode_t mode);
	int cocci_id/* drivers/block/paride/pf.c 213 */(struct block_device *bdev,
							struct hd_geometry *geo);
	int cocci_id/* drivers/block/paride/pf.c 211 */(struct block_device *bdev,
							fmode_t mode,
							unsigned int cmd,
							unsigned long arg);
	blk_status_t cocci_id/* drivers/block/paride/pf.c 209 */(struct blk_mq_hw_ctx *hctx,
								 const struct blk_mq_queue_data *bd);
	int cocci_id/* drivers/block/paride/pf.c 208 */(struct block_device *bdev,
							fmode_t mode);
	bool cocci_id/* drivers/block/paride/pf.c 163 */;
	enum{D_PRT, D_PRO, D_UNI, D_MOD, D_SLV, D_LUN, D_DLY,} cocci_id/* drivers/block/paride/pf.c 144 */;
	int *cocci_id/* drivers/block/paride/pf.c 141 */[4][7];
	int cocci_id/* drivers/block/paride/pf.c 136 */[7];
	int cocci_id/* drivers/block/paride/pf.c 132 */;
	char *cocci_id/* drivers/block/paride/pf.c 131 */;
	void __exit cocci_id/* drivers/block/paride/pf.c 1056 */;
	int __init cocci_id/* drivers/block/paride/pf.c 1020 */;
}
