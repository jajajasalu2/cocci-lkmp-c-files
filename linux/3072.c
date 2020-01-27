cocci_test_suite() {
	struct blkif_req cocci_id/* drivers/block/xen-blkfront.c 981 */;
	struct blk_shadow {
		struct blkif_request req;
		struct request *request;
		struct grant **grants_used;
		struct grant **indirect_grants;
		struct scatterlist *sg;
		unsigned int num_sg;
		enum blk_req_status status;
#define NO_ASSOCIATED_ID ~0UL
		unsigned long associated_id;
	} cocci_id/* drivers/block/xen-blkfront.c 97 */;
	const struct blk_mq_ops cocci_id/* drivers/block/xen-blkfront.c 921 */;
	struct request *cocci_id/* drivers/block/xen-blkfront.c 916 */;
	enum blk_req_status{REQ_WAITING, REQ_DONE, REQ_ERROR, REQ_EOPNOTSUPP,} cocci_id/* drivers/block/xen-blkfront.c 90 */;
	const struct blk_mq_queue_data *cocci_id/* drivers/block/xen-blkfront.c 882 */;
	blk_status_t cocci_id/* drivers/block/xen-blkfront.c 881 */;
	struct blk_mq_hw_ctx *cocci_id/* drivers/block/xen-blkfront.c 881 */;
	struct grant {
		grant_ref_t gref;
		struct page *page;
		struct list_head node;
	} cocci_id/* drivers/block/xen-blkfront.c 84 */;
	enum blkif_state{BLKIF_STATE_DISCONNECTED, BLKIF_STATE_CONNECTED, BLKIF_STATE_SUSPENDED,} cocci_id/* drivers/block/xen-blkfront.c 78 */;
	struct setup_rw_req cocci_id/* drivers/block/xen-blkfront.c 698 */;
	uint16_t cocci_id/* drivers/block/xen-blkfront.c 675 */;
	struct blkif_request_segment cocci_id/* drivers/block/xen-blkfront.c 657 */;
	struct setup_rw_req *cocci_id/* drivers/block/xen-blkfront.c 586 */;
	struct setup_rw_req {
		unsigned int grant_idx;
		struct blkif_request_segment *segments;
		struct blkfront_ring_info *rinfo;
		struct blkif_request *ring_req;
		grant_ref_t gref_head;
		unsigned int id;
		bool need_copy;
		unsigned int bvec_off;
		char *bvec_data;
		bool require_extra_req;
		struct blkif_request *extra_ring_req;
	} cocci_id/* drivers/block/xen-blkfront.c 567 */;
	blkif_sector_t cocci_id/* drivers/block/xen-blkfront.c 555 */;
	struct blkif_request *cocci_id/* drivers/block/xen-blkfront.c 546 */;
	struct blkif_request **cocci_id/* drivers/block/xen-blkfront.c 526 */;
	char __user *cocci_id/* drivers/block/xen-blkfront.c 504 */;
	struct cdrom_multisession cocci_id/* drivers/block/xen-blkfront.c 503 */;
	long cocci_id/* drivers/block/xen-blkfront.c 498 */;
	unsigned cocci_id/* drivers/block/xen-blkfront.c 492 */;
	fmode_t cocci_id/* drivers/block/xen-blkfront.c 491 */;
	sector_t cocci_id/* drivers/block/xen-blkfront.c 479 */;
	struct hd_geometry *cocci_id/* drivers/block/xen-blkfront.c 475 */;
	const char *constcocci_id/* drivers/block/xen-blkfront.c 407 */[];
	struct page cocci_id/* drivers/block/xen-blkfront.c 396 */;
	grant_ref_t *cocci_id/* drivers/block/xen-blkfront.c 353 */;
	const struct blkfront_info *cocci_id/* drivers/block/xen-blkfront.c 345 */;
	const struct grant *cocci_id/* drivers/block/xen-blkfront.c 344 */;
	struct grant cocci_id/* drivers/block/xen-blkfront.c 296 */;
	unsigned long cocci_id/* drivers/block/xen-blkfront.c 276 */;
	void __exit cocci_id/* drivers/block/xen-blkfront.c 2752 */;
	struct blkfront_ring_info *cocci_id/* drivers/block/xen-blkfront.c 275 */;
	int cocci_id/* drivers/block/xen-blkfront.c 275 */;
	int __init cocci_id/* drivers/block/xen-blkfront.c 2707 */;
	bool cocci_id/* drivers/block/xen-blkfront.c 2688 */;
	struct work_struct *cocci_id/* drivers/block/xen-blkfront.c 2685 */;
	struct xenbus_driver cocci_id/* drivers/block/xen-blkfront.c 2643 */;
	const struct xenbus_device_id cocci_id/* drivers/block/xen-blkfront.c 2638 */[];
	int cocci_id/* drivers/block/xen-blkfront.c 263 */(struct blkfront_info *info);
	void cocci_id/* drivers/block/xen-blkfront.c 262 */(struct blkfront_info *info);
	int cocci_id/* drivers/block/xen-blkfront.c 261 */(struct blkfront_ring_info *rinfo);
	struct gendisk *cocci_id/* drivers/block/xen-blkfront.c 2493 */;
	struct blkfront_info *cocci_id/* drivers/block/xen-blkfront.c 2440 */;
	enum xenbus_state cocci_id/* drivers/block/xen-blkfront.c 2438 */;
	struct xenbus_device *cocci_id/* drivers/block/xen-blkfront.c 2437 */;
	void cocci_id/* drivers/block/xen-blkfront.c 2437 */;
	char *cocci_id/* drivers/block/xen-blkfront.c 2340 */[];
	unsigned int cocci_id/* drivers/block/xen-blkfront.c 2338 */;
	unsigned long long cocci_id/* drivers/block/xen-blkfront.c 2336 */;
	struct page *cocci_id/* drivers/block/xen-blkfront.c 2226 */;
	struct block_device *cocci_id/* drivers/block/xen-blkfront.c 2135 */;
	struct blk_shadow *cocci_id/* drivers/block/xen-blkfront.c 2085 */;
	struct bio_list cocci_id/* drivers/block/xen-blkfront.c 2084 */;
	struct bio *cocci_id/* drivers/block/xen-blkfront.c 2020 */;
	char *cocci_id/* drivers/block/xen-blkfront.c 1964 */;
	const struct xenbus_device_id *cocci_id/* drivers/block/xen-blkfront.c 1945 */;
	struct blkfront_info {
		struct mutex mutex;
		struct xenbus_device *xbdev;
		struct gendisk *gd;
		u16 sector_size;
		unsigned int physical_sector_size;
		int vdevice;
		blkif_vdev_t handle;
		enum blkif_state connected;
		unsigned int nr_ring_pages;
		struct request_queue *rq;
		unsigned int feature_flush:1;
		unsigned int feature_fua:1;
		unsigned int feature_discard:1;
		unsigned int feature_secdiscard:1;
		unsigned int feature_persistent:1;
		unsigned int discard_granularity;
		unsigned int discard_alignment;
		unsigned int max_indirect_segments;
		int is_ready;
		struct blk_mq_tag_set tag_set;
		struct blkfront_ring_info *rinfo;
		unsigned int nr_rings;
		struct list_head requests;
		struct bio_list bio_list;
		struct list_head info_list;
	} cocci_id/* drivers/block/xen-blkfront.c 193 */;
	size_t cocci_id/* drivers/block/xen-blkfront.c 1826 */;
	struct xenbus_transaction cocci_id/* drivers/block/xen-blkfront.c 1777 */;
	char cocci_id/* drivers/block/xen-blkfront.c 1738 */[RINGREF_NAME_LEN];
	struct blkfront_ring_info {
		spinlock_t ring_lock;
		struct blkif_front_ring ring;
		unsigned int ring_ref[XENBUS_MAX_RING_GRANTS];
		unsigned int evtchn,irq;
		struct work_struct work;
		struct gnttab_free_callback callback;
		struct blk_shadow shadow[BLK_MAX_RING_SIZE];
		struct list_head indirect_pages;
		struct list_head grants;
		unsigned int persistent_gnts_c;
		unsigned long shadow_free;
		struct blkfront_info *dev_info;
	} cocci_id/* drivers/block/xen-blkfront.c 172 */;
	grant_ref_t cocci_id/* drivers/block/xen-blkfront.c 1676 */[XENBUS_MAX_RING_GRANTS];
	struct blkif_sring *cocci_id/* drivers/block/xen-blkfront.c 1672 */;
	struct request_queue *cocci_id/* drivers/block/xen-blkfront.c 1606 */;
	RING_IDX cocci_id/* drivers/block/xen-blkfront.c 1551 */;
	irqreturn_t cocci_id/* drivers/block/xen-blkfront.c 1547 */;
	struct copy_from_grant cocci_id/* drivers/block/xen-blkfront.c 1427 */;
	struct scatterlist *cocci_id/* drivers/block/xen-blkfront.c 1423 */;
	struct blkif_response *cocci_id/* drivers/block/xen-blkfront.c 1420 */;
	unsigned long *cocci_id/* drivers/block/xen-blkfront.c 1418 */;
	enum blk_req_status cocci_id/* drivers/block/xen-blkfront.c 1405 */;
	const struct blk_shadow *cocci_id/* drivers/block/xen-blkfront.c 1374 */;
	struct copy_from_grant *cocci_id/* drivers/block/xen-blkfront.c 1371 */;
	void *cocci_id/* drivers/block/xen-blkfront.c 1369 */;
	struct copy_from_grant {
		const struct blk_shadow *s;
		unsigned int grant_idx;
		unsigned int bvec_offset;
		char *bvec_data;
	} cocci_id/* drivers/block/xen-blkfront.c 1361 */;
	struct delayed_work cocci_id/* drivers/block/xen-blkfront.c 125 */;
	struct grant *cocci_id/* drivers/block/xen-blkfront.c 1244 */;
	const struct block_device_operations cocci_id/* drivers/block/xen-blkfront.c 124 */;
	struct blkfront_ring_info cocci_id/* drivers/block/xen-blkfront.c 1236 */;
	struct blkif_req *cocci_id/* drivers/block/xen-blkfront.c 118 */;
	struct blkif_req {
		blk_status_t error;
	} cocci_id/* drivers/block/xen-blkfront.c 114 */;
	u16 cocci_id/* drivers/block/xen-blkfront.c 1093 */;
	unsigned int *cocci_id/* drivers/block/xen-blkfront.c 1023 */;
	int *cocci_id/* drivers/block/xen-blkfront.c 1023 */;
	const char *cocci_id/* drivers/block/xen-blkfront.c 1002 */;
}
