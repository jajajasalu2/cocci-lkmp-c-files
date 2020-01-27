cocci_test_suite() {
	const char *cocci_id/* drivers/s390/char/tape_core.c 917 */;
	unsigned int *cocci_id/* drivers/s390/char/tape_core.c 916 */;
	struct timer_list *cocci_id/* drivers/s390/char/tape_core.c 871 */;
	struct work_struct *cocci_id/* drivers/s390/char/tape_core.c 860 */;
	struct ccw_dev_id *cocci_id/* drivers/s390/char/tape_core.c 82 */;
	struct ccw1 cocci_id/* drivers/s390/char/tape_core.c 727 */;
	struct tape_request cocci_id/* drivers/s390/char/tape_core.c 645 */;
	struct list_head *cocci_id/* drivers/s390/char/tape_core.c 642 */;
	const char *cocci_id/* drivers/s390/char/tape_core.c 64 */[TO_SIZE];
	void cocci_id/* drivers/s390/char/tape_core.c 638 */;
	struct ccw_dev_id cocci_id/* drivers/s390/char/tape_core.c 618 */;
	const char *cocci_id/* drivers/s390/char/tape_core.c 55 */[TS_SIZE];
	struct tape_device cocci_id/* drivers/s390/char/tape_core.c 530 */;
	debug_info_t *cocci_id/* drivers/s390/char/tape_core.c 49 */;
	struct tape_discipline *cocci_id/* drivers/s390/char/tape_core.c 374 */;
	void cocci_id/* drivers/s390/char/tape_core.c 36 */(struct timer_list *t);
	void cocci_id/* drivers/s390/char/tape_core.c 35 */(struct work_struct *);
	void cocci_id/* drivers/s390/char/tape_core.c 34 */(struct ccw_device *,
							    unsigned long,
							    struct irb *);
	long cocci_id/* drivers/s390/char/tape_core.c 303 */;
	struct tape_request *cocci_id/* drivers/s390/char/tape_core.c 292 */;
	struct tape_device *cocci_id/* drivers/s390/char/tape_core.c 292 */;
	int cocci_id/* drivers/s390/char/tape_core.c 291 */;
	enum tape_medium_state cocci_id/* drivers/s390/char/tape_core.c 263 */;
	struct tape_med_state_work_data *cocci_id/* drivers/s390/char/tape_core.c 251 */;
	char *cocci_id/* drivers/s390/char/tape_core.c 226 */[];
	struct tape_med_state_work_data cocci_id/* drivers/s390/char/tape_core.c 224 */;
	char cocci_id/* drivers/s390/char/tape_core.c 221 */[];
	struct tape_med_state_work_data {
		struct tape_device *device;
		enum tape_medium_state state;
		struct work_struct work;
	} cocci_id/* drivers/s390/char/tape_core.c 212 */;
	enum tape_state cocci_id/* drivers/s390/char/tape_core.c 187 */;
	const struct attribute_group cocci_id/* drivers/s390/char/tape_core.c 179 */;
	struct attribute *cocci_id/* drivers/s390/char/tape_core.c 170 */[];
	struct device_attribute *cocci_id/* drivers/s390/char/tape_core.c 158 */;
	struct device *cocci_id/* drivers/s390/char/tape_core.c 158 */;
	char *cocci_id/* drivers/s390/char/tape_core.c 158 */;
	ssize_t cocci_id/* drivers/s390/char/tape_core.c 157 */;
	tape_mtop_fn cocci_id/* drivers/s390/char/tape_core.c 1292 */;
	__u8 *cocci_id/* drivers/s390/char/tape_core.c 1169 */;
	struct irb *cocci_id/* drivers/s390/char/tape_core.c 1100 */;
	struct ccw_device *cocci_id/* drivers/s390/char/tape_core.c 1100 */;
	unsigned long cocci_id/* drivers/s390/char/tape_core.c 1100 */;
	wait_queue_head_t *cocci_id/* drivers/s390/char/tape_core.c 1007 */;
	void *cocci_id/* drivers/s390/char/tape_core.c 1004 */;
}
