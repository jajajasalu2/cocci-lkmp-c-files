cocci_test_suite() {
	struct poll_table_struct *cocci_id/* drivers/iio/industrialio-event.c 96 */;
	__poll_t cocci_id/* drivers/iio/industrialio-event.c 95 */;
	u64 cocci_id/* drivers/iio/industrialio-event.c 63 */;
	s64 cocci_id/* drivers/iio/industrialio-event.c 63 */;
	void cocci_id/* drivers/iio/industrialio-event.c 547 */;
	struct iio_event_interface cocci_id/* drivers/iio/industrialio-event.c 481 */;
	struct attribute **cocci_id/* drivers/iio/industrialio-event.c 474 */;
	struct iio_dev_attr *cocci_id/* drivers/iio/industrialio-event.c 472 */;
	bool cocci_id/* drivers/iio/industrialio-event.c 451 */;
	const struct iio_event_interface *cocci_id/* drivers/iio/industrialio-event.c 44 */;
	struct iio_dev *cocci_id/* drivers/iio/industrialio-event.c 436 */;
	int cocci_id/* drivers/iio/industrialio-event.c 436 */;
	char *cocci_id/* drivers/iio/industrialio-event.c 351 */;
	ssize_t (*cocci_id/* drivers/iio/industrialio-event.c 347 */)(struct device *,
								      struct device_attribute *,
								      const char *,
								      size_t);
	ssize_t (*cocci_id/* drivers/iio/industrialio-event.c 346 */)(struct device *,
								      struct device_attribute *,
								      char *);
	enum iio_shared_by cocci_id/* drivers/iio/industrialio-event.c 344 */;
	const unsigned long *cocci_id/* drivers/iio/industrialio-event.c 344 */;
	enum iio_event_type cocci_id/* drivers/iio/industrialio-event.c 343 */;
	enum iio_event_direction cocci_id/* drivers/iio/industrialio-event.c 343 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/industrialio-event.c 342 */;
	unsigned int cocci_id/* drivers/iio/industrialio-event.c 342 */;
	struct iio_event_interface {
		wait_queue_head_t wait;
		DECLARE_KFIFO(det_events,struct iio_event_data,16);
		struct list_head dev_attr_list;
		unsigned long flags;
		struct attribute_group group;
		struct mutex read_lock;
	} cocci_id/* drivers/iio/industrialio-event.c 34 */;
	struct device_attribute *cocci_id/* drivers/iio/industrialio-event.c 279 */;
	struct device *cocci_id/* drivers/iio/industrialio-event.c 278 */;
	ssize_t cocci_id/* drivers/iio/industrialio-event.c 278 */;
	size_t cocci_id/* drivers/iio/industrialio-event.c 260 */;
	const char *cocci_id/* drivers/iio/industrialio-event.c 259 */;
	enum iio_event_info cocci_id/* drivers/iio/industrialio-event.c 252 */;
	const char *constcocci_id/* drivers/iio/industrialio-event.c 227 */[];
	const struct file_operations cocci_id/* drivers/iio/industrialio-event.c 177 */;
	struct inode *cocci_id/* drivers/iio/industrialio-event.c 165 */;
	struct iio_event_data cocci_id/* drivers/iio/industrialio-event.c 126 */;
	struct iio_event_interface *cocci_id/* drivers/iio/industrialio-event.c 119 */;
	loff_t *cocci_id/* drivers/iio/industrialio-event.c 116 */;
	char __user *cocci_id/* drivers/iio/industrialio-event.c 114 */;
	struct file *cocci_id/* drivers/iio/industrialio-event.c 113 */;
}
