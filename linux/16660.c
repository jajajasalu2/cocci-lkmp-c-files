cocci_test_suite() {
	long cocci_id/* drivers/s390/cio/cmf.c 989 */;
	unsigned long long cocci_id/* drivers/s390/cio/cmf.c 980 */;
	enum cmb_index cocci_id/* drivers/s390/cio/cmf.c 977 */;
	struct cmbe cocci_id/* drivers/s390/cio/cmf.c 773 */;
	struct cmbe *cocci_id/* drivers/s390/cio/cmf.c 762 */;
	struct kmem_cache *cocci_id/* drivers/s390/cio/cmf.c 757 */;
	struct cmbe {
		u32 ssch_rsch_count;
		u32 sample_count;
		u32 device_connect_time;
		u32 function_pending_time;
		u32 device_disconnect_time;
		u32 control_unit_queuing_time;
		u32 device_active_only_time;
		u32 device_busy_time;
		u32 initial_command_response_time;
		u32 reserved[7];
	}__packed __aligned(64) cocci_id/* drivers/s390/cio/cmf.c 744 */;
	enum cmb_format{CMF_BASIC, CMF_EXTENDED, CMF_AUTODETECT=-1,} cocci_id/* drivers/s390/cio/cmf.c 73 */;
	struct cmb_operations cocci_id/* drivers/s390/cio/cmf.c 714 */;
	struct attribute_group cocci_id/* drivers/s390/cio/cmf.c 712 */;
	struct cmbdata cocci_id/* drivers/s390/cio/cmf.c 670 */;
	u32 cocci_id/* drivers/s390/cio/cmf.c 601 */;
	u64 cocci_id/* drivers/s390/cio/cmf.c 579 */;
	u16 cocci_id/* drivers/s390/cio/cmf.c 562 */;
	unsigned long cocci_id/* drivers/s390/cio/cmf.c 509 */;
	void *cocci_id/* drivers/s390/cio/cmf.c 503 */;
	struct cmb cocci_id/* drivers/s390/cio/cmf.c 489 */;
	struct cmb_data cocci_id/* drivers/s390/cio/cmf.c 485 */;
	struct cmb_data *cocci_id/* drivers/s390/cio/cmf.c 482 */;
	ssize_t cocci_id/* drivers/s390/cio/cmf.c 481 */;
	struct cmb *cocci_id/* drivers/s390/cio/cmf.c 480 */;
	enum cmb_index{avg_utilization=-1, cmb_ssch_rsch_count=0, cmb_sample_count, cmb_device_connect_time, cmb_function_pending_time, cmb_device_disconnect_time, cmb_control_unit_queuing_time, cmb_device_active_only_time, cmb_device_busy_time, cmb_initial_command_response_time,} cocci_id/* drivers/s390/cio/cmf.c 47 */;
	struct ccw_device_private *cocci_id/* drivers/s390/cio/cmf.c 440 */;
	struct cmb {
		u16 ssch_rsch_count;
		u16 sample_count;
		u32 device_connect_time;
		u32 function_pending_time;
		u32 device_disconnect_time;
		u32 control_unit_queuing_time;
		u32 device_active_only_time;
		u32 reserved[2];
	} cocci_id/* drivers/s390/cio/cmf.c 421 */;
	struct cmb_area cocci_id/* drivers/s390/cio/cmf.c 383 */;
	struct cmb_area {
		struct cmb *mem;
		struct list_head list;
		int num_channels;
		spinlock_t lock;
	} cocci_id/* drivers/s390/cio/cmf.c 376 */;
	struct copy_block_struct *cocci_id/* drivers/s390/cio/cmf.c 340 */;
	struct copy_block_struct cocci_id/* drivers/s390/cio/cmf.c 300 */;
	struct copy_block_struct {
		wait_queue_head_t wait;
		int ret;
	} cocci_id/* drivers/s390/cio/cmf.c 293 */;
	struct subchannel *cocci_id/* drivers/s390/cio/cmf.c 271 */;
	struct set_schib_struct *cocci_id/* drivers/s390/cio/cmf.c 259 */;
	struct set_schib_struct cocci_id/* drivers/s390/cio/cmf.c 214 */;
	struct set_schib_struct {
		u32 mme;
		int mbfc;
		unsigned long address;
		wait_queue_head_t wait;
		int ret;
	} cocci_id/* drivers/s390/cio/cmf.c 200 */;
	unsigned int cocci_id/* drivers/s390/cio/cmf.c 164 */;
	void cocci_id/* drivers/s390/cio/cmf.c 164 */;
	int __init cocci_id/* drivers/s390/cio/cmf.c 1254 */;
	struct cmbdata *cocci_id/* drivers/s390/cio/cmf.c 1229 */;
	struct cmb_data {
		void *hw_block;
		void *last_block;
		int size;
		unsigned long long last_update;
	} cocci_id/* drivers/s390/cio/cmf.c 117 */;
	struct ccw_device *cocci_id/* drivers/s390/cio/cmf.c 1169 */;
	int cocci_id/* drivers/s390/cio/cmf.c 1169 */;
	struct cmb_operations *cocci_id/* drivers/s390/cio/cmf.c 115 */;
	size_t cocci_id/* drivers/s390/cio/cmf.c 1087 */;
	const char *cocci_id/* drivers/s390/cio/cmf.c 1086 */;
	char *cocci_id/* drivers/s390/cio/cmf.c 1078 */;
	struct device_attribute *cocci_id/* drivers/s390/cio/cmf.c 1077 */;
	struct device *cocci_id/* drivers/s390/cio/cmf.c 1076 */;
	struct cmb_operations {
		int (*alloc)(struct ccw_device *);
		void (*free)(struct ccw_device *);
		int (*set)(struct ccw_device *, u32);
		u64 (*read)(struct ccw_device *, int);
		int (*readall)(struct ccw_device *, struct cmbdata *);
		void (*reset)(struct ccw_device *);
		struct attribute_group *attr_group;
	} cocci_id/* drivers/s390/cio/cmf.c 105 */;
	struct attribute *cocci_id/* drivers/s390/cio/cmf.c 1038 */[];
}
