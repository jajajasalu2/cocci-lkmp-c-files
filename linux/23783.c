cocci_test_suite() {
	void *cocci_id/* net/rfkill/core.c 923 */;
	const struct rfkill_ops *cocci_id/* net/rfkill/core.c 922 */;
	const char *cocci_id/* net/rfkill/core.c 919 */;
	struct rfkill *__must_checkcocci_id/* net/rfkill/core.c 919 */;
	unsigned long cocci_id/* net/rfkill/core.c 907 */;
	struct class cocci_id/* net/rfkill/core.c 897 */;
	struct kobj_uevent_env *cocci_id/* net/rfkill/core.c 810 */;
	int cocci_id/* net/rfkill/core.c 810 */;
	struct attribute *cocci_id/* net/rfkill/core.c 791 */[];
	u8 cocci_id/* net/rfkill/core.c 747 */;
	struct rfkill_data {
		struct list_head list;
		struct list_head events;
		struct mutex mtx;
		wait_queue_head_t read_wait;
		bool input_handler;
	} cocci_id/* net/rfkill/core.c 74 */;
	char *cocci_id/* net/rfkill/core.c 706 */;
	struct device_attribute *cocci_id/* net/rfkill/core.c 705 */;
	struct device *cocci_id/* net/rfkill/core.c 705 */;
	ssize_t cocci_id/* net/rfkill/core.c 705 */;
	struct rfkill_int_event {
		struct list_head list;
		struct rfkill_event ev;
	} cocci_id/* net/rfkill/core.c 69 */;
	enum rfkill_type cocci_id/* net/rfkill/core.c 653 */;
	const char *constcocci_id/* net/rfkill/core.c 641 */[];
	u32 cocci_id/* net/rfkill/core.c 553 */;
	bool cocci_id/* net/rfkill/core.c 551 */;
	struct rfkill *cocci_id/* net/rfkill/core.c 551 */;
	void cocci_id/* net/rfkill/core.c 551 */;
	const enum rfkill_type cocci_id/* net/rfkill/core.c 393 */;
	atomic_t cocci_id/* net/rfkill/core.c 381 */;
	struct rfkill {
		spinlock_t lock;
		enum rfkill_type type;
		unsigned long state;
		u32 idx;
		bool registered;
		bool persistent;
		bool polling_paused;
		bool suspended;
		const struct rfkill_ops *ops;
		void *data;
#ifdef CONFIG_RFKILL_LEDS
		struct led_trigger led_trigger;
		const char *ledtrigname;
#endif
		struct device dev;
		struct list_head node;
		struct delayed_work poll_work;
		struct work_struct uevent_work;
		struct work_struct sync_work;
		char name[];
	} cocci_id/* net/rfkill/core.c 37 */;
	enum rfkill_operation cocci_id/* net/rfkill/core.c 256 */;
	struct rfkill_event *cocci_id/* net/rfkill/core.c 255 */;
	enum led_brightness cocci_id/* net/rfkill/core.c 176 */;
	struct work_struct *cocci_id/* net/rfkill/core.c 174 */;
	struct work_struct cocci_id/* net/rfkill/core.c 172 */;
	struct led_trigger cocci_id/* net/rfkill/core.c 170 */;
	void __exit cocci_id/* net/rfkill/core.c 1369 */;
	struct rfkill cocci_id/* net/rfkill/core.c 136 */;
	int __init cocci_id/* net/rfkill/core.c 1330 */;
	struct miscdevice cocci_id/* net/rfkill/core.c 1324 */;
	struct led_classdev *cocci_id/* net/rfkill/core.c 132 */;
	const struct file_operations cocci_id/* net/rfkill/core.c 1308 */;
	struct rfkill_data *cocci_id/* net/rfkill/core.c 1286 */;
	struct file *cocci_id/* net/rfkill/core.c 1283 */;
	long cocci_id/* net/rfkill/core.c 1283 */;
	struct rfkill_event cocci_id/* net/rfkill/core.c 1210 */;
	const char __user *cocci_id/* net/rfkill/core.c 1206 */;
	struct rfkill_int_event cocci_id/* net/rfkill/core.c 1191 */;
	struct led_trigger *cocci_id/* net/rfkill/core.c 119 */;
	loff_t *cocci_id/* net/rfkill/core.c 1165 */;
	size_t cocci_id/* net/rfkill/core.c 1165 */;
	char __user *cocci_id/* net/rfkill/core.c 1164 */;
	__poll_t cocci_id/* net/rfkill/core.c 1149 */;
	poll_table *cocci_id/* net/rfkill/core.c 1149 */;
	struct rfkill_int_event *cocci_id/* net/rfkill/core.c 1107 */;
	struct inode *cocci_id/* net/rfkill/core.c 1103 */;
	struct {
		bool cur,sav;
	} cocci_id/* net/rfkill/core.c 109 */[NUM_RFKILL_TYPES];
	unsigned int cocci_id/* net/rfkill/core.c 104 */;
	int __must_check cocci_id/* net/rfkill/core.c 1002 */;
}
