cocci_test_suite() {
	int *cocci_id/* drivers/staging/most/core.c 989 */;
	struct core_component *cocci_id/* drivers/staging/most/core.c 953 */;
	struct most_interface *cocci_id/* drivers/staging/most/core.c 952 */;
	u32 cocci_id/* drivers/staging/most/core.c 875 */;
	unsigned int cocci_id/* drivers/staging/most/core.c 872 */;
	void (*cocci_id/* drivers/staging/most/core.c 870 */)(struct mbo *);
	int cocci_id/* drivers/staging/most/core.c 869 */;
	struct most_channel *cocci_id/* drivers/staging/most/core.c 835 */;
	unsigned long cocci_id/* drivers/staging/most/core.c 834 */;
	struct mbo *cocci_id/* drivers/staging/most/core.c 832 */;
	void cocci_id/* drivers/staging/most/core.c 832 */;
	const struct {
		int most_ch_data_type;
		const char *name;
	} cocci_id/* drivers/staging/most/core.c 83 */[];
	struct task_struct *cocci_id/* drivers/staging/most/core.c 810 */;
	typeof(c->iface->enqueue) cocci_id/* drivers/staging/most/core.c 773 */;
	struct interface_private {
		int dev_id;
		char name[STRING_SIZE];
		struct most_channel *channel[MAX_CHANNELS];
		struct list_head channel_list;
	} cocci_id/* drivers/staging/most/core.c 76 */;
	bool cocci_id/* drivers/staging/most/core.c 743 */;
	struct most_channel cocci_id/* drivers/staging/most/core.c 74 */;
	u16 cocci_id/* drivers/staging/most/core.c 571 */;
	struct core_component **cocci_id/* drivers/staging/most/core.c 552 */;
	struct device_driver *cocci_id/* drivers/staging/most/core.c 511 */;
	struct show_links_data cocci_id/* drivers/staging/most/core.c 505 */;
	struct show_links_data *cocci_id/* drivers/staging/most/core.c 475 */;
	struct most_channel {
		struct device dev;
		struct completion cleanup;
		atomic_t mbo_ref;
		atomic_t mbo_nq_level;
		u16 channel_id;
		char name[STRING_SIZE];
		bool is_poisoned;
		struct mutex start_mutex;
		struct mutex nq_mutex;
		int is_starving;
		struct most_interface *iface;
		struct most_channel_config cfg;
		bool keep_mbo;
		bool enqueue_halt;
		struct list_head fifo;
		spinlock_t fifo_lock;
		struct list_head halt_fifo;
		struct list_head list;
		struct pipe pipe0;
		struct pipe pipe1;
		struct list_head trash_fifo;
		struct task_struct *hdm_enqueue_task;
		wait_queue_head_t hdm_fifo_wq;
	} cocci_id/* drivers/staging/most/core.c 47 */;
	struct show_links_data {
		int offs;
		char *buf;
	} cocci_id/* drivers/staging/most/core.c 468 */;
	struct pipe {
		struct core_component *comp;
		int refs;
		int num_buffers;
	} cocci_id/* drivers/staging/most/core.c 41 */;
	const struct attribute_group *cocci_id/* drivers/staging/most/core.c 396 */[];
	struct attribute_group cocci_id/* drivers/staging/most/core.c 391 */;
	struct mostcore cocci_id/* drivers/staging/most/core.c 39 */;
	struct attribute *cocci_id/* drivers/staging/most/core.c 373 */[];
	struct attribute *cocci_id/* drivers/staging/most/core.c 340 */;
	umode_t cocci_id/* drivers/staging/most/core.c 339 */;
	struct kobject *cocci_id/* drivers/staging/most/core.c 339 */;
	struct device_attribute cocci_id/* drivers/staging/most/core.c 338 */;
	struct mostcore {
		struct device dev;
		struct device_driver drv;
		struct bus_type bus;
		struct list_head comp_list;
	} cocci_id/* drivers/staging/most/core.c 32 */;
	struct ida cocci_id/* drivers/staging/most/core.c 29 */;
	char *cocci_id/* drivers/staging/most/core.c 195 */;
	struct device_attribute *cocci_id/* drivers/staging/most/core.c 194 */;
	struct device *cocci_id/* drivers/staging/most/core.c 193 */;
	ssize_t cocci_id/* drivers/staging/most/core.c 193 */;
	void __exit cocci_id/* drivers/staging/most/core.c 1510 */;
	int __init cocci_id/* drivers/staging/most/core.c 1470 */;
	const char *cocci_id/* drivers/staging/most/core.c 1323 */;
	void *cocci_id/* drivers/staging/most/core.c 1230 */;
	const u16 cocci_id/* drivers/staging/most/core.c 112 */;
	struct mbo cocci_id/* drivers/staging/most/core.c 100 */;
}
