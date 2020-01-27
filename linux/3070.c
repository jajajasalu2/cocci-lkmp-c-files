cocci_test_suite() {
	struct rbd_image_header_ondisk *cocci_id/* drivers/block/rbd.c 978 */;
	struct kref *cocci_id/* drivers/block/rbd.c 916 */;
	enum obj_operation_type cocci_id/* drivers/block/rbd.c 895 */;
	struct rbd_parse_opts_ctx {
		struct rbd_spec *spec;
		struct ceph_options *copts;
		struct rbd_options *opts;
	} cocci_id/* drivers/block/rbd.c 889 */;
	struct rbd_options {
		int queue_depth;
		int alloc_size;
		unsigned long lock_timeout;
		bool read_only;
		bool lock_on_read;
		bool exclusive;
		bool trim;
	} cocci_id/* drivers/block/rbd.c 871 */;
	const struct fs_parameter_description cocci_id/* drivers/block/rbd.c 866 */;
	const struct fs_parameter_spec cocci_id/* drivers/block/rbd.c 851 */[];
	enum{Opt_queue_depth, Opt_alloc_size, Opt_lock_timeout, Opt_pool_ns, Opt_read_only, Opt_read_write, Opt_lock_on_read, Opt_exclusive, Opt_notrim,} cocci_id/* drivers/block/rbd.c 837 */;
	struct rbd_client cocci_id/* drivers/block/rbd.c 766 */;
	const struct block_device_operations cocci_id/* drivers/block/rbd.c 746 */;
	void __exit cocci_id/* drivers/block/rbd.c 7411 */;
	unsigned long cocci_id/* drivers/block/rbd.c 740 */;
	atomic_t *cocci_id/* drivers/block/rbd.c 74 */;
	fmode_t cocci_id/* drivers/block/rbd.c 739 */;
	struct block_device *cocci_id/* drivers/block/rbd.c 739 */;
	int __init cocci_id/* drivers/block/rbd.c 7359 */;
	char cocci_id/* drivers/block/rbd.c 7225 */[6];
	struct list_head *cocci_id/* drivers/block/rbd.c 7223 */;
	struct bus_type *cocci_id/* drivers/block/rbd.c 7185 */;
	ssize_t cocci_id/* drivers/block/rbd.c 7185 */;
	struct rbd_options *cocci_id/* drivers/block/rbd.c 7071 */;
	struct ceph_options *cocci_id/* drivers/block/rbd.c 7070 */;
	int __user *cocci_id/* drivers/block/rbd.c 703 */;
	struct rbd_image_header *cocci_id/* drivers/block/rbd.c 6764 */;
	long cocci_id/* drivers/block/rbd.c 6636 */;
	struct pending_result *cocci_id/* drivers/block/rbd.c 654 */;
	struct rbd_parse_opts_ctx cocci_id/* drivers/block/rbd.c 6518 */;
	struct rbd_spec **cocci_id/* drivers/block/rbd.c 6511 */;
	struct rbd_options **cocci_id/* drivers/block/rbd.c 6510 */;
	struct ceph_options **cocci_id/* drivers/block/rbd.c 6509 */;
	void cocci_id/* drivers/block/rbd.c 649 */(struct rbd_img_request *img_req,
						   int result);
	void cocci_id/* drivers/block/rbd.c 648 */(struct rbd_obj_request *obj_req,
						   int result);
	int cocci_id/* drivers/block/rbd.c 644 */(struct rbd_device *rbd_dev,
						  u64 snap_id, u8 *order,
						  u64 *snap_size);
	struct fs_parameter cocci_id/* drivers/block/rbd.c 6434 */;
	struct rbd_parse_opts_ctx *cocci_id/* drivers/block/rbd.c 6426 */;
	const char *cocci_id/* drivers/block/rbd.c 642 */(struct rbd_device *rbd_dev,
							  u64 snap_id);
	int cocci_id/* drivers/block/rbd.c 640 */(struct rbd_device *rbd_dev);
	struct fs_parse_result cocci_id/* drivers/block/rbd.c 6355 */;
	struct fs_parameter *cocci_id/* drivers/block/rbd.c 6351 */;
	const char **cocci_id/* drivers/block/rbd.c 6333 */;
	char *cocci_id/* drivers/block/rbd.c 6333 */;
	va_list cocci_id/* drivers/block/rbd.c 600 */;
	struct va_format cocci_id/* drivers/block/rbd.c 599 */;
	struct {
		__le64 stripe_unit;
		__le64 stripe_count;
	}__attribute__((packed)) cocci_id/* drivers/block/rbd.c 5923 */;
	struct device cocci_id/* drivers/block/rbd.c 591 */;
	struct parent_image_info cocci_id/* drivers/block/rbd.c 5828 */;
	struct bus_type cocci_id/* drivers/block/rbd.c 582 */;
	const struct attribute_group cocci_id/* drivers/block/rbd.c 576 */;
	u64 cocci_id/* drivers/block/rbd.c 5730 */;
	void *cocci_id/* drivers/block/rbd.c 5725 */;
	size_t cocci_id/* drivers/block/rbd.c 5724 */;
	struct ceph_osd_client *cocci_id/* drivers/block/rbd.c 5723 */;
	struct parent_image_info *cocci_id/* drivers/block/rbd.c 5721 */;
	struct page *cocci_id/* drivers/block/rbd.c 5719 */;
	struct rbd_device *cocci_id/* drivers/block/rbd.c 5718 */;
	int cocci_id/* drivers/block/rbd.c 5718 */;
	struct parent_image_info {
		u64 pool_id;
		const char *pool_ns;
		const char *image_id;
		u64 snap_id;
		bool has_overlap;
		u64 overlap;
	} cocci_id/* drivers/block/rbd.c 5673 */;
	struct attribute *cocci_id/* drivers/block/rbd.c 566 */;
	umode_t cocci_id/* drivers/block/rbd.c 565 */;
	struct kobject *cocci_id/* drivers/block/rbd.c 565 */;
	unsigned long long cocci_id/* drivers/block/rbd.c 5633 */;
	struct {
		__le64 features;
		__le64 incompat;
	}__attribute__((packed)) cocci_id/* drivers/block/rbd.c 5603 */;
	struct {
		__le64 snap_id;
		u8 read_only;
	} cocci_id/* drivers/block/rbd.c 5599 */;
	unsigned int cocci_id/* drivers/block/rbd.c 5541 */;
	struct {
		u8 order;
		__le64 size;
	}__attribute__((packed)) cocci_id/* drivers/block/rbd.c 5524 */;
	__le64 cocci_id/* drivers/block/rbd.c 5522 */;
	struct rbd_spec *cocci_id/* drivers/block/rbd.c 5416 */;
	struct rbd_client *cocci_id/* drivers/block/rbd.c 5415 */;
	struct rbd_spec cocci_id/* drivers/block/rbd.c 5369 */;
	const struct device_type cocci_id/* drivers/block/rbd.c 5332 */;
	void cocci_id/* drivers/block/rbd.c 5330 */(struct device *dev);
	const struct attribute_group *cocci_id/* drivers/block/rbd.c 5325 */[];
	struct attribute_group cocci_id/* drivers/block/rbd.c 5321 */;
	struct attribute *cocci_id/* drivers/block/rbd.c 5300 */[];
	struct ceph_entity_addr *cocci_id/* drivers/block/rbd.c 5135 */;
	struct device_attribute *cocci_id/* drivers/block/rbd.c 5132 */;
	struct rbd_device cocci_id/* drivers/block/rbd.c 5092 */;
	struct device *cocci_id/* drivers/block/rbd.c 5090 */;
	int cocci_id/* drivers/block/rbd.c 505 */(struct rbd_device *rbd_dev,
						  int depth);
	struct work_struct cocci_id/* drivers/block/rbd.c 5036 */;
	ssize_t cocci_id/* drivers/block/rbd.c 501 */(struct bus_type *bus,
						      const char *buf,
						      size_t count);
	struct request_queue *cocci_id/* drivers/block/rbd.c 5009 */;
	struct gendisk *cocci_id/* drivers/block/rbd.c 5008 */;
	const struct blk_mq_ops cocci_id/* drivers/block/rbd.c 5001 */;
	struct blk_mq_tag_set *cocci_id/* drivers/block/rbd.c 4992 */;
	sector_t cocci_id/* drivers/block/rbd.c 4943 */;
	struct rbd_image_snap_ondisk cocci_id/* drivers/block/rbd.c 4907 */;
	struct workqueue_struct *cocci_id/* drivers/block/rbd.c 485 */;
	const struct blk_mq_queue_data *cocci_id/* drivers/block/rbd.c 4820 */;
	blk_status_t cocci_id/* drivers/block/rbd.c 4819 */;
	struct blk_mq_hw_ctx *cocci_id/* drivers/block/rbd.c 4819 */;
	struct kmem_cache *cocci_id/* drivers/block/rbd.c 479 */;
	const void *cocci_id/* drivers/block/rbd.c 4664 */;
	struct ceph_object_locator *cocci_id/* drivers/block/rbd.c 4662 */;
	struct ceph_object_id *cocci_id/* drivers/block/rbd.c 4661 */;
	enum rbd_dev_flags{RBD_DEV_FLAG_EXISTS, RBD_DEV_FLAG_REMOVING, RBD_DEV_FLAG_READONLY,} cocci_id/* drivers/block/rbd.c 463 */;
	struct ceph_osd_linger_request *cocci_id/* drivers/block/rbd.c 4501 */;
	void cocci_id/* drivers/block/rbd.c 4473 */(struct rbd_device *rbd_dev);
	s32 cocci_id/* drivers/block/rbd.c 4403 */;
	char cocci_id/* drivers/block/rbd.c 4373 */[4 + CEPH_ENCODING_START_BLK_LEN];
	s32 *cocci_id/* drivers/block/rbd.c 4370 */;
	void cocci_id/* drivers/block/rbd.c 4369 */;
	struct work_struct *cocci_id/* drivers/block/rbd.c 4125 */;
	struct ceph_client *cocci_id/* drivers/block/rbd.c 4003 */;
	struct ceph_watch_item *cocci_id/* drivers/block/rbd.c 3961 */;
	const struct ceph_locker *cocci_id/* drivers/block/rbd.c 3958 */;
	u32 *cocci_id/* drivers/block/rbd.c 3911 */;
	struct ceph_locker **cocci_id/* drivers/block/rbd.c 3911 */;
	struct rbd_device {
		int dev_id;
		int major;
		int minor;
		struct gendisk *disk;
		u32 image_format;
		struct rbd_client *rbd_client;
		char name[DEV_NAME_LEN];
		spinlock_t lock;
		struct rbd_image_header header;
		unsigned long flags;
		struct rbd_spec *spec;
		struct rbd_options *opts;
		char *config_info;
		struct ceph_object_id header_oid;
		struct ceph_object_locator header_oloc;
		struct ceph_file_layout layout;
		struct mutex watch_mutex;
		enum rbd_watch_state watch_state;
		struct ceph_osd_linger_request *watch_handle;
		u64 watch_cookie;
		struct delayed_work watch_dwork;
		struct rw_semaphore lock_rwsem;
		enum rbd_lock_state lock_state;
		char lock_cookie[32];
		struct rbd_client_id owner_cid;
		struct work_struct acquired_lock_work;
		struct work_struct released_lock_work;
		struct delayed_work lock_dwork;
		struct work_struct unlock_work;
		spinlock_t lock_lists_lock;
		struct list_head acquiring_list;
		struct list_head running_list;
		struct completion acquire_wait;
		int acquire_err;
		struct completion releasing_wait;
		spinlock_t object_map_lock;
		u8 *object_map;
		u64 object_map_size;
		u64 object_map_flags;
		struct workqueue_struct *task_wq;
		struct rbd_spec *parent_spec;
		u64 parent_overlap;
		atomic_t parent_ref;
		struct rbd_device *parent;
		struct blk_mq_tag_set tag_set;
		struct rw_semaphore header_rwsem;
		struct rbd_mapping mapping;
		struct list_head node;
		struct device dev;
		unsigned long open_count;
	} cocci_id/* drivers/block/rbd.c 385 */;
	void *constcocci_id/* drivers/block/rbd.c 3830 */;
	struct rbd_mapping {
		u64 size;
	} cocci_id/* drivers/block/rbd.c 378 */;
	char cocci_id/* drivers/block/rbd.c 3769 */[4 + 8 + 8 + CEPH_ENCODING_START_BLK_LEN];
	size_t *cocci_id/* drivers/block/rbd.c 3765 */;
	struct page ***cocci_id/* drivers/block/rbd.c 3764 */;
	enum rbd_notify_op cocci_id/* drivers/block/rbd.c 3763 */;
	struct rbd_client_id {
		u64 gid;
		u64 handle;
	} cocci_id/* drivers/block/rbd.c 373 */;
	char cocci_id/* drivers/block/rbd.c 3722 */[32];
	struct rbd_client_id cocci_id/* drivers/block/rbd.c 3708 */;
	const char *cocci_id/* drivers/block/rbd.c 3706 */;
	const struct rbd_client_id *cocci_id/* drivers/block/rbd.c 3670 */;
	const struct rbd_client_id cocci_id/* drivers/block/rbd.c 3668 */;
	struct request *cocci_id/* drivers/block/rbd.c 3661 */;
	enum rbd_lock_state{RBD_LOCK_STATE_UNLOCKED, RBD_LOCK_STATE_LOCKED, RBD_LOCK_STATE_RELEASING,} cocci_id/* drivers/block/rbd.c 366 */;
	int *cocci_id/* drivers/block/rbd.c 3618 */;
	bool cocci_id/* drivers/block/rbd.c 3617 */;
	enum rbd_watch_state{RBD_WATCH_STATE_UNREGISTERED, RBD_WATCH_STATE_REGISTERED, RBD_WATCH_STATE_ERROR,} cocci_id/* drivers/block/rbd.c 360 */;
	struct rbd_img_request {
		struct rbd_device *rbd_dev;
		enum obj_operation_type op_type;
		enum obj_request_type data_type;
		unsigned long flags;
		enum rbd_img_state state;
		union {
			u64 snap_id;
			struct ceph_snap_context *snapc;
		};
		union {
			struct request *rq;
			struct rbd_obj_request *obj_request;
		};
		struct list_head lock_item;
		struct list_head object_extents;
		struct mutex state_mutex;
		struct pending_result pending;
		struct work_struct work;
		int work_result;
		struct kref kref;
	} cocci_id/* drivers/block/rbd.c 330 */;
	enum rbd_img_state{RBD_IMG_START=1, RBD_IMG_EXCLUSIVE_LOCK, __RBD_IMG_OBJECT_REQUESTS, RBD_IMG_OBJECT_REQUESTS,} cocci_id/* drivers/block/rbd.c 323 */;
	enum img_req_flags{IMG_REQ_CHILD, IMG_REQ_LAYERED,} cocci_id/* drivers/block/rbd.c 318 */;
	struct ceph_bvec_iter cocci_id/* drivers/block/rbd.c 3056 */;
	struct bio_vec *cocci_id/* drivers/block/rbd.c 3054 */;
	struct rbd_obj_request {
		struct ceph_object_extent ex;
		unsigned int flags;
		union {
			enum rbd_obj_read_state read_state;
			enum rbd_obj_write_state write_state;
		};
		struct rbd_img_request *img_request;
		struct ceph_file_extent *img_extents;
		u32 num_img_extents;
		union {
			struct ceph_bio_iter bio_pos;
			struct {
				struct ceph_bvec_iter bvec_pos;
				u32 bvec_count;
				u32 bvec_idx;
			};
		};
		enum rbd_obj_copyup_state copyup_state;
		struct bio_vec *copyup_bvecs;
		u32 copyup_bvec_count;
		struct list_head osd_reqs;
		struct mutex state_mutex;
		struct pending_result pending;
		struct kref kref;
	} cocci_id/* drivers/block/rbd.c 286 */;
	struct rbd_img_request cocci_id/* drivers/block/rbd.c 2806 */;
	struct ceph_bvec_iter *cocci_id/* drivers/block/rbd.c 2774 */;
	enum rbd_obj_copyup_state{RBD_OBJ_COPYUP_START=1, RBD_OBJ_COPYUP_READ_PARENT, __RBD_OBJ_COPYUP_OBJECT_MAPS, RBD_OBJ_COPYUP_OBJECT_MAPS, __RBD_OBJ_COPYUP_WRITE_OBJECT, RBD_OBJ_COPYUP_WRITE_OBJECT,} cocci_id/* drivers/block/rbd.c 277 */;
	struct ceph_bio_iter cocci_id/* drivers/block/rbd.c 2732 */;
	struct ceph_file_extent cocci_id/* drivers/block/rbd.c 2731 */;
	struct bio *cocci_id/* drivers/block/rbd.c 2729 */;
	union rbd_img_fill_iter *cocci_id/* drivers/block/rbd.c 2718 */;
	struct rbd_img_fill_ctx cocci_id/* drivers/block/rbd.c 2716 */;
	struct ceph_bio_iter *cocci_id/* drivers/block/rbd.c 2714 */;
	u32 cocci_id/* drivers/block/rbd.c 2713 */;
	struct ceph_file_extent *cocci_id/* drivers/block/rbd.c 2712 */;
	struct rbd_img_request *cocci_id/* drivers/block/rbd.c 2711 */;
	struct rbd_obj_request cocci_id/* drivers/block/rbd.c 2701 */;
	enum rbd_obj_write_state{RBD_OBJ_WRITE_START=1, RBD_OBJ_WRITE_PRE_OBJECT_MAP, RBD_OBJ_WRITE_OBJECT, __RBD_OBJ_WRITE_COPYUP, RBD_OBJ_WRITE_COPYUP, RBD_OBJ_WRITE_POST_OBJECT_MAP,} cocci_id/* drivers/block/rbd.c 268 */;
	union rbd_img_fill_iter cocci_id/* drivers/block/rbd.c 2665 */;
	struct rbd_img_fill_ctx *cocci_id/* drivers/block/rbd.c 2602 */;
	struct ceph_file_layout *cocci_id/* drivers/block/rbd.c 2552 */;
	struct ceph_object_extent *cocci_id/* drivers/block/rbd.c 2532 */;
	struct rbd_img_fill_ctx {
		enum obj_request_type pos_type;
		union rbd_img_fill_iter *pos;
		union rbd_img_fill_iter iter;
		ceph_object_extent_fn_t set_pos_fn;
		ceph_object_extent_fn_t count_fn;
		ceph_object_extent_fn_t copy_fn;
	} cocci_id/* drivers/block/rbd.c 2523 */;
	union rbd_img_fill_iter {
		struct ceph_bio_iter bio_iter;
		struct ceph_bvec_iter bvec_iter;
	} cocci_id/* drivers/block/rbd.c 2518 */;
	struct rbd_obj_request *cocci_id/* drivers/block/rbd.c 2486 */;
	enum rbd_obj_read_state{RBD_OBJ_READ_START=1, RBD_OBJ_READ_OBJECT, RBD_OBJ_READ_PARENT,} cocci_id/* drivers/block/rbd.c 237 */;
	u16 cocci_id/* drivers/block/rbd.c 2287 */;
	struct ceph_timespec cocci_id/* drivers/block/rbd.c 2256 */;
	enum obj_operation_type{OBJ_OP_READ=1, OBJ_OP_WRITE, OBJ_OP_DISCARD, OBJ_OP_ZEROOUT,} cocci_id/* drivers/block/rbd.c 224 */;
	enum obj_request_type{OBJ_REQUEST_NODATA=1, OBJ_REQUEST_BIO, OBJ_REQUEST_BVECS, OBJ_REQUEST_OWN_BVECS,} cocci_id/* drivers/block/rbd.c 217 */;
	struct pending_result {
		int result;
		int num_pending;
	} cocci_id/* drivers/block/rbd.c 210 */;
	const u8 *cocci_id/* drivers/block/rbd.c 2078 */;
	struct rbd_client {
		struct ceph_client *client;
		struct kref kref;
		struct list_head node;
	} cocci_id/* drivers/block/rbd.c 204 */;
	struct ceph_osd_data *cocci_id/* drivers/block/rbd.c 2011 */;
	struct page **cocci_id/* drivers/block/rbd.c 1886 */;
	struct rbd_spec {
		u64 pool_id;
		const char *pool_name;
		const char *pool_ns;
		const char *image_id;
		const char *image_name;
		u64 snap_id;
		const char *snap_name;
		struct kref kref;
	} cocci_id/* drivers/block/rbd.c 187 */;
	void **cocci_id/* drivers/block/rbd.c 1857 */;
	struct ceph_locker *cocci_id/* drivers/block/rbd.c 1791 */;
	u8 cocci_id/* drivers/block/rbd.c 1711 */;
	u8 *cocci_id/* drivers/block/rbd.c 1702 */;
	u64 *cocci_id/* drivers/block/rbd.c 1702 */;
	void cocci_id/* drivers/block/rbd.c 1578 */(struct rbd_spec *spec);
	struct ceph_osd_request cocci_id/* drivers/block/rbd.c 1547 */;
	struct ceph_snap_context *cocci_id/* drivers/block/rbd.c 1478 */;
	struct ceph_osd_request *cocci_id/* drivers/block/rbd.c 1476 */;
	struct rbd_image_header {
		char *object_prefix;
		__u8 obj_order;
		u64 stripe_unit;
		u64 stripe_count;
		s64 data_pool_id;
		u64 features;
		u64 image_size;
		struct ceph_snap_context *snapc;
		char *snap_names;
		u64 *snap_sizes;
	} cocci_id/* drivers/block/rbd.c 146 */;
	void cocci_id/* drivers/block/rbd.c 1328 */(struct kref *kref);
	struct rbd_image_snap_ondisk *cocci_id/* drivers/block/rbd.c 1076 */;
	struct ceph_snap_context cocci_id/* drivers/block/rbd.c 1002 */;
}
