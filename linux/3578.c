cocci_test_suite() {
	struct mmc_data *cocci_id/* drivers/mmc/core/block.c 975 */;
	struct mmc_host *cocci_id/* drivers/mmc/core/block.c 960 */;
	__be32 *cocci_id/* drivers/mmc/core/block.c 907 */;
	const struct block_device_operations cocci_id/* drivers/mmc/core/block.c 825 */;
	fmode_t cocci_id/* drivers/mmc/core/block.c 818 */;
	struct mmc_ioc_multi_cmd __user *cocci_id/* drivers/mmc/core/block.c 808 */;
	struct mmc_ioc_cmd __user *cocci_id/* drivers/mmc/core/block.c 796 */;
	struct block_device *cocci_id/* drivers/mmc/core/block.c 769 */;
	__u64 cocci_id/* drivers/mmc/core/block.c 702 */;
	struct mmc_blk_ioc_data **cocci_id/* drivers/mmc/core/block.c 697 */;
	struct mmc_blk_ioc_data *cocci_id/* drivers/mmc/core/block.c 649 */[1];
	u8 cocci_id/* drivers/mmc/core/block.c 614 */;
	unsigned int cocci_id/* drivers/mmc/core/block.c 499 */;
	struct scatterlist cocci_id/* drivers/mmc/core/block.c 497 */;
	struct mmc_request cocci_id/* drivers/mmc/core/block.c 496 */;
	struct mmc_data cocci_id/* drivers/mmc/core/block.c 495 */;
	struct mmc_command cocci_id/* drivers/mmc/core/block.c 494 */;
	struct mmc_blk_ioc_data *cocci_id/* drivers/mmc/core/block.c 492 */;
	struct mmc_card *cocci_id/* drivers/mmc/core/block.c 491 */;
	struct mmc_blk_data *cocci_id/* drivers/mmc/core/block.c 491 */;
	int cocci_id/* drivers/mmc/core/block.c 491 */;
	bool cocci_id/* drivers/mmc/core/block.c 457 */;
	u32 cocci_id/* drivers/mmc/core/block.c 454 */;
	unsigned long cocci_id/* drivers/mmc/core/block.c 452 */;
	u32 *cocci_id/* drivers/mmc/core/block.c 450 */;
	struct mmc_ioc_cmd *cocci_id/* drivers/mmc/core/block.c 396 */;
	void __user *cocci_id/* drivers/mmc/core/block.c 378 */;
	struct mmc_blk_ioc_data {
		struct mmc_ioc_cmd ic;
		unsigned char *buf;
		u64 buf_bytes;
		struct mmc_rpmb_data *rpmb;
	} cocci_id/* drivers/mmc/core/block.c 343 */;
	struct hd_geometry *cocci_id/* drivers/mmc/core/block.c 335 */;
	void __exit cocci_id/* drivers/mmc/core/block.c 3050 */;
	int __init cocci_id/* drivers/mmc/core/block.c 3011 */;
	struct mmc_driver cocci_id/* drivers/mmc/core/block.c 3001 */;
	const char *cocci_id/* drivers/mmc/core/block.c 286 */;
	size_t cocci_id/* drivers/mmc/core/block.c 286 */;
	struct dentry *cocci_id/* drivers/mmc/core/block.c 2808 */;
	const struct file_operations cocci_id/* drivers/mmc/core/block.c 2799 */;
	loff_t *cocci_id/* drivers/mmc/core/block.c 2785 */;
	char __user *cocci_id/* drivers/mmc/core/block.c 2784 */;
	u8 *cocci_id/* drivers/mmc/core/block.c 2742 */;
	struct inode *cocci_id/* drivers/mmc/core/block.c 2734 */;
	struct file *cocci_id/* drivers/mmc/core/block.c 2734 */;
	char *cocci_id/* drivers/mmc/core/block.c 273 */;
	struct device_attribute *cocci_id/* drivers/mmc/core/block.c 272 */;
	struct device *cocci_id/* drivers/mmc/core/block.c 272 */;
	ssize_t cocci_id/* drivers/mmc/core/block.c 272 */;
	u64 *cocci_id/* drivers/mmc/core/block.c 2705 */;
	void *cocci_id/* drivers/mmc/core/block.c 2705 */;
	umode_t cocci_id/* drivers/mmc/core/block.c 2675 */;
	struct mmc_rpmb_data cocci_id/* drivers/mmc/core/block.c 2646 */;
	struct list_head *cocci_id/* drivers/mmc/core/block.c 2640 */;
	struct mmc_rpmb_data *cocci_id/* drivers/mmc/core/block.c 2511 */;
	char cocci_id/* drivers/mmc/core/block.c 2509 */[DISK_NAME_LEN];
	long cocci_id/* drivers/mmc/core/block.c 2427 */;
	u64 cocci_id/* drivers/mmc/core/block.c 2410 */;
	char cocci_id/* drivers/mmc/core/block.c 2400 */[10];
	typeof(sector_t) cocci_id/* drivers/mmc/core/block.c 2384 */;
	sector_t cocci_id/* drivers/mmc/core/block.c 2371 */;
	struct mmc_blk_data cocci_id/* drivers/mmc/core/block.c 2271 */;
	enum mmc_issued cocci_id/* drivers/mmc/core/block.c 2178 */;
	int *cocci_id/* drivers/mmc/core/block.c 2097 */;
	struct mmc_queue cocci_id/* drivers/mmc/core/block.c 2032 */;
	struct work_struct *cocci_id/* drivers/mmc/core/block.c 2030 */;
	struct request **cocci_id/* drivers/mmc/core/block.c 2007 */;
	struct mmc_queue_req *cocci_id/* drivers/mmc/core/block.c 1854 */;
	struct gendisk *cocci_id/* drivers/mmc/core/block.c 172 */;
	int cocci_id/* drivers/mmc/core/block.c 169 */(struct mmc_card *card,
						       unsigned int part_type);
	struct mmc_rpmb_data {
		struct device dev;
		struct cdev chrdev;
		int id;
		unsigned int part_index;
		struct mmc_blk_data *md;
		struct list_head node;
	} cocci_id/* drivers/mmc/core/block.c 155 */;
	struct mmc_queue_req cocci_id/* drivers/mmc/core/block.c 1483 */;
	struct bus_type cocci_id/* drivers/mmc/core/block.c 142 */;
	struct request_queue *cocci_id/* drivers/mmc/core/block.c 1418 */;
	struct mmc_request *cocci_id/* drivers/mmc/core/block.c 1417 */;
	struct mmc_queue *cocci_id/* drivers/mmc/core/block.c 1414 */;
	struct scatterlist *cocci_id/* drivers/mmc/core/block.c 1392 */;
	dev_t cocci_id/* drivers/mmc/core/block.c 139 */;
	struct mmc_blk_request cocci_id/* drivers/mmc/core/block.c 1298 */;
	bool *cocci_id/* drivers/mmc/core/block.c 1281 */;
	struct request *cocci_id/* drivers/mmc/core/block.c 1212 */;
	struct mmc_blk_request *cocci_id/* drivers/mmc/core/block.c 1210 */;
	void cocci_id/* drivers/mmc/core/block.c 1210 */;
	blk_status_t cocci_id/* drivers/mmc/core/block.c 1092 */;
	u8 **cocci_id/* drivers/mmc/core/block.c 1034 */;
	struct mmc_blk_data {
		struct device *parent;
		struct gendisk *disk;
		struct mmc_queue queue;
		struct list_head part;
		struct list_head rpmbs;
		unsigned int flags;
#define MMC_BLK_CMD23 (1 << 0)
#define MMC_BLK_REL_WR (1 << 1)
				unsigned int usage;
		unsigned int read_only;
		unsigned int part_type;
		unsigned int reset_done;
#define MMC_BLK_READ BIT(0)
#define MMC_BLK_WRITE BIT(1)
#define MMC_BLK_DISCARD BIT(2)
#define MMC_BLK_SECDISCARD BIT(3)
#define MMC_BLK_CQE_RECOVERY BIT(4)
							unsigned int part_curr;
		struct device_attribute force_ro;
		struct device_attribute power_ro_lock;
		int area_type;
		struct dentry *status_dentry;
		struct dentry *ext_csd_dentry;
	} cocci_id/* drivers/mmc/core/block.c 102 */;
}
