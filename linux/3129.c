cocci_test_suite() {
	const u64 *cocci_id/* drivers/block/sunvdc.c 981 */;
	struct vdc_port cocci_id/* drivers/block/sunvdc.c 98 */;
	struct mdesc_handle *cocci_id/* drivers/block/sunvdc.c 978 */;
	const struct vio_device_id *cocci_id/* drivers/block/sunvdc.c 976 */;
	struct vdc_check_port_data cocci_id/* drivers/block/sunvdc.c 961 */;
	struct vio_driver_state *cocci_id/* drivers/block/sunvdc.c 96 */;
	bool cocci_id/* drivers/block/sunvdc.c 959 */;
	void cocci_id/* drivers/block/sunvdc.c 94 */(struct work_struct *work);
	char *cocci_id/* drivers/block/sunvdc.c 939 */;
	struct vdc_check_port_data *cocci_id/* drivers/block/sunvdc.c 934 */;
	struct vio_dev *cocci_id/* drivers/block/sunvdc.c 933 */;
	struct device *cocci_id/* drivers/block/sunvdc.c 931 */;
	struct vdc_check_port_data {
		int dev_no;
		char *type;
	} cocci_id/* drivers/block/sunvdc.c 926 */;
	void cocci_id/* drivers/block/sunvdc.c 92 */(struct vdc_port *port);
	struct vio_driver_ops cocci_id/* drivers/block/sunvdc.c 912 */;
	struct ldc_channel_config cocci_id/* drivers/block/sunvdc.c 906 */;
	struct gendisk *cocci_id/* drivers/block/sunvdc.c 806 */;
	struct request_queue *cocci_id/* drivers/block/sunvdc.c 782 */;
	void cocci_id/* drivers/block/sunvdc.c 782 */;
	const struct blk_mq_ops cocci_id/* drivers/block/sunvdc.c 778 */;
	struct ldc_trans_cookie cocci_id/* drivers/block/sunvdc.c 718 */;
	struct vio_disk_desc cocci_id/* drivers/block/sunvdc.c 717 */;
	struct vio_disk_devid cocci_id/* drivers/block/sunvdc.c 630 */;
	struct vio_disk_geom cocci_id/* drivers/block/sunvdc.c 615 */;
	struct vio_disk_vtoc cocci_id/* drivers/block/sunvdc.c 605 */;
	u32 cocci_id/* drivers/block/sunvdc.c 595 */;
	unsigned long cocci_id/* drivers/block/sunvdc.c 576 */;
	struct vio_completion cocci_id/* drivers/block/sunvdc.c 573 */;
	void *cocci_id/* drivers/block/sunvdc.c 570 */;
	struct vdc_port {
		struct vio_driver_state vio;
		struct gendisk *disk;
		struct vdc_completion *cmp;
		u64 req_id;
		u64 seq;
		struct vdc_req_entry rq_arr[VDC_TX_RING_SIZE];
		unsigned long ring_cookies;
		u64 max_xfer_size;
		u32 vdisk_block_size;
		u32 drain;
		u64 ldc_timeout;
		struct delayed_work ldc_reset_timer_work;
		struct work_struct ldc_reset_work;
		u64 operations;
		u32 vdisk_size;
		u8 vdisk_type;
		u8 vdisk_mtype;
		u32 vdisk_phys_blksz;
		struct blk_mq_tag_set tag_set;
		char disk_name[32];
	} cocci_id/* drivers/block/sunvdc.c 57 */;
	const struct blk_mq_queue_data *cocci_id/* drivers/block/sunvdc.c 535 */;
	blk_status_t cocci_id/* drivers/block/sunvdc.c 534 */;
	struct blk_mq_hw_ctx *cocci_id/* drivers/block/sunvdc.c 534 */;
	struct vdc_req_entry {
		struct request *req;
	} cocci_id/* drivers/block/sunvdc.c 53 */;
	struct workqueue_struct *cocci_id/* drivers/block/sunvdc.c 51 */;
	u8 cocci_id/* drivers/block/sunvdc.c 469 */;
	u64 cocci_id/* drivers/block/sunvdc.c 468 */;
	unsigned int cocci_id/* drivers/block/sunvdc.c 466 */;
	struct vio_disk_desc *cocci_id/* drivers/block/sunvdc.c 465 */;
	struct vdc_req_entry *cocci_id/* drivers/block/sunvdc.c 464 */;
	struct scatterlist cocci_id/* drivers/block/sunvdc.c 463 */[MAX_RING_COOKIES];
	struct vio_dring_state *cocci_id/* drivers/block/sunvdc.c 462 */;
	struct vdc_port *cocci_id/* drivers/block/sunvdc.c 461 */;
	struct request *cocci_id/* drivers/block/sunvdc.c 459 */;
	int cocci_id/* drivers/block/sunvdc.c 459 */;
	struct vio_dring_data cocci_id/* drivers/block/sunvdc.c 425 */;
	union {
		struct vio_msg_tag tag;
		u64 raw[8];
	} cocci_id/* drivers/block/sunvdc.c 379 */;
	struct vio_dring_data *cocci_id/* drivers/block/sunvdc.c 334 */;
	char cocci_id/* drivers/block/sunvdc.c 30 */[];
	struct vio_disk_attr_info *cocci_id/* drivers/block/sunvdc.c 246 */;
	struct vio_disk_attr_info cocci_id/* drivers/block/sunvdc.c 224 */;
	struct vio_msg_tag *cocci_id/* drivers/block/sunvdc.c 210 */;
	const struct block_device_operations cocci_id/* drivers/block/sunvdc.c 170 */;
	char __user *cocci_id/* drivers/block/sunvdc.c 153 */;
	struct cdrom_multisession cocci_id/* drivers/block/sunvdc.c 152 */;
	unsigned cocci_id/* drivers/block/sunvdc.c 144 */;
	fmode_t cocci_id/* drivers/block/sunvdc.c 143 */;
	sector_t cocci_id/* drivers/block/sunvdc.c 126 */;
	void __exit cocci_id/* drivers/block/sunvdc.c 1253 */;
	struct hd_geometry *cocci_id/* drivers/block/sunvdc.c 123 */;
	struct block_device *cocci_id/* drivers/block/sunvdc.c 123 */;
	int __init cocci_id/* drivers/block/sunvdc.c 1224 */;
	struct vio_driver cocci_id/* drivers/block/sunvdc.c 1217 */;
	const struct vio_device_id cocci_id/* drivers/block/sunvdc.c 1209 */[];
	struct work_struct *cocci_id/* drivers/block/sunvdc.c 1144 */;
	u16 cocci_id/* drivers/block/sunvdc.c 109 */;
	struct vio_version cocci_id/* drivers/block/sunvdc.c 102 */[];
}
