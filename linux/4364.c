cocci_test_suite() {
	loff_t *cocci_id/* drivers/char/ipmi/ipmb_dev_int.c 74 */;
	char __user *cocci_id/* drivers/char/ipmi/ipmb_dev_int.c 73 */;
	ssize_t cocci_id/* drivers/char/ipmi/ipmb_dev_int.c 73 */;
	size_t cocci_id/* drivers/char/ipmi/ipmb_dev_int.c 73 */;
	struct ipmb_dev cocci_id/* drivers/char/ipmi/ipmb_dev_int.c 70 */;
	struct ipmb_dev {
		struct i2c_client *client;
		struct miscdevice miscdev;
		struct ipmb_msg request;
		struct list_head request_queue;
		atomic_t request_queue_len;
		size_t msg_idx;
		spinlock_t lock;
		wait_queue_head_t wait_queue;
		struct mutex file_mutex;
	} cocci_id/* drivers/char/ipmi/ipmb_dev_int.c 56 */;
	struct ipmb_request_elem {
		struct list_head list;
		struct ipmb_msg request;
	} cocci_id/* drivers/char/ipmi/ipmb_dev_int.c 51 */;
	struct ipmb_msg {
		u8 len;
		u8 rs_sa;
		u8 netfn_rs_lun;
		u8 checksum1;
		u8 rq_sa;
		u8 rq_seq_rq_lun;
		u8 cmd;
		u8 payload[IPMB_MSG_PAYLOAD_LEN_MAX];
	}__packed cocci_id/* drivers/char/ipmi/ipmb_dev_int.c 39 */;
	struct i2c_driver cocci_id/* drivers/char/ipmi/ipmb_dev_int.c 338 */;
	const struct acpi_device_id cocci_id/* drivers/char/ipmi/ipmb_dev_int.c 332 */[];
	const struct i2c_device_id cocci_id/* drivers/char/ipmi/ipmb_dev_int.c 326 */[];
	const struct i2c_device_id *cocci_id/* drivers/char/ipmi/ipmb_dev_int.c 277 */;
	struct i2c_client *cocci_id/* drivers/char/ipmi/ipmb_dev_int.c 276 */;
	int cocci_id/* drivers/char/ipmi/ipmb_dev_int.c 276 */;
	unsigned long cocci_id/* drivers/char/ipmi/ipmb_dev_int.c 228 */;
	enum i2c_slave_event cocci_id/* drivers/char/ipmi/ipmb_dev_int.c 224 */;
	u8 *cocci_id/* drivers/char/ipmi/ipmb_dev_int.c 224 */;
	bool cocci_id/* drivers/char/ipmi/ipmb_dev_int.c 207 */;
	u8 cocci_id/* drivers/char/ipmi/ipmb_dev_int.c 196 */;
	struct ipmb_msg cocci_id/* drivers/char/ipmi/ipmb_dev_int.c 190 */;
	struct ipmb_request_elem *cocci_id/* drivers/char/ipmi/ipmb_dev_int.c 179 */;
	struct ipmb_dev *cocci_id/* drivers/char/ipmi/ipmb_dev_int.c 177 */;
	void cocci_id/* drivers/char/ipmi/ipmb_dev_int.c 177 */;
	const struct file_operations cocci_id/* drivers/char/ipmi/ipmb_dev_int.c 169 */;
	__poll_t cocci_id/* drivers/char/ipmi/ipmb_dev_int.c 154 */;
	poll_table *cocci_id/* drivers/char/ipmi/ipmb_dev_int.c 154 */;
	struct file *cocci_id/* drivers/char/ipmi/ipmb_dev_int.c 154 */;
	u8 cocci_id/* drivers/char/ipmi/ipmb_dev_int.c 121 */[MAX_MSG_LEN];
	union i2c_smbus_data cocci_id/* drivers/char/ipmi/ipmb_dev_int.c 120 */;
	const char __user *cocci_id/* drivers/char/ipmi/ipmb_dev_int.c 115 */;
	struct ipmb_request_elem cocci_id/* drivers/char/ipmi/ipmb_dev_int.c 100 */;
}
