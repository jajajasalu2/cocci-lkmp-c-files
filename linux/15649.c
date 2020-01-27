cocci_test_suite() {
	u32 cocci_id/* drivers/staging/greybus/raw.c 95 */;
	struct gb_raw_send_request *cocci_id/* drivers/staging/greybus/raw.c 94 */;
	struct device *cocci_id/* drivers/staging/greybus/raw.c 92 */;
	struct gb_operation *cocci_id/* drivers/staging/greybus/raw.c 89 */;
	u8 *cocci_id/* drivers/staging/greybus/raw.c 55 */;
	void __exit cocci_id/* drivers/staging/greybus/raw.c 370 */;
	const struct file_operations cocci_id/* drivers/staging/greybus/raw.c 37 */;
	struct class *cocci_id/* drivers/staging/greybus/raw.c 35 */;
	dev_t cocci_id/* drivers/staging/greybus/raw.c 340 */;
	struct greybus_driver cocci_id/* drivers/staging/greybus/raw.c 331 */;
	const struct greybus_bundle_id cocci_id/* drivers/staging/greybus/raw.c 325 */[];
	struct raw_data cocci_id/* drivers/staging/greybus/raw.c 296 */;
	struct raw_data {
		struct list_head entry;
		u32 len;
		u8 data[0];
	} cocci_id/* drivers/staging/greybus/raw.c 29 */;
	loff_t *cocci_id/* drivers/staging/greybus/raw.c 286 */;
	char __user *cocci_id/* drivers/staging/greybus/raw.c 285 */;
	ssize_t cocci_id/* drivers/staging/greybus/raw.c 285 */;
	size_t cocci_id/* drivers/staging/greybus/raw.c 285 */;
	struct gb_raw cocci_id/* drivers/staging/greybus/raw.c 260 */;
	struct cdev *cocci_id/* drivers/staging/greybus/raw.c 259 */;
	struct inode *cocci_id/* drivers/staging/greybus/raw.c 257 */;
	struct file *cocci_id/* drivers/staging/greybus/raw.c 257 */;
	struct raw_data *cocci_id/* drivers/staging/greybus/raw.c 228 */;
	struct gb_connection *cocci_id/* drivers/staging/greybus/raw.c 227 */;
	struct gb_raw *cocci_id/* drivers/staging/greybus/raw.c 226 */;
	struct gb_bundle *cocci_id/* drivers/staging/greybus/raw.c 224 */;
	void cocci_id/* drivers/staging/greybus/raw.c 224 */;
	struct gb_raw {
		struct gb_connection *connection;
		struct list_head list;
		int list_data;
		struct mutex list_lock;
		dev_t dev;
		struct cdev cdev;
		struct device *device;
	} cocci_id/* drivers/staging/greybus/raw.c 18 */;
	struct greybus_descriptor_cport *cocci_id/* drivers/staging/greybus/raw.c 151 */;
	const struct greybus_bundle_id *cocci_id/* drivers/staging/greybus/raw.c 149 */;
	int cocci_id/* drivers/staging/greybus/raw.c 148 */;
	const char __user *cocci_id/* drivers/staging/greybus/raw.c 123 */;
}
