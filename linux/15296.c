cocci_test_suite() {
	loff_t *cocci_id/* drivers/fsi/fsi-occ.c 98 */;
	char __user *cocci_id/* drivers/fsi/fsi-occ.c 97 */;
	u8 *cocci_id/* drivers/fsi/fsi-occ.c 80 */;
	struct miscdevice *cocci_id/* drivers/fsi/fsi-occ.c 74 */;
	struct occ_client *cocci_id/* drivers/fsi/fsi-occ.c 73 */;
	struct inode *cocci_id/* drivers/fsi/fsi-occ.c 71 */;
	struct file *cocci_id/* drivers/fsi/fsi-occ.c 71 */;
	struct occ_client cocci_id/* drivers/fsi/fsi-occ.c 67 */;
	void cocci_id/* drivers/fsi/fsi-occ.c 596 */;
	struct occ_client {
		struct occ *occ;
		struct mutex lock;
		size_t data_size;
		size_t read_offset;
		u8 *buffer;
	} cocci_id/* drivers/fsi/fsi-occ.c 59 */;
	struct platform_driver cocci_id/* drivers/fsi/fsi-occ.c 582 */;
	const struct of_device_id cocci_id/* drivers/fsi/fsi-occ.c 577 */[];
	struct platform_device_info cocci_id/* drivers/fsi/fsi-occ.c 511 */;
	struct occ_response {
		u8 seq_no;
		u8 cmd_type;
		u8 return_status;
		__be16 data_length;
		u8 data[OCC_RESP_DATA_BYTES + 2];
	}__packed cocci_id/* drivers/fsi/fsi-occ.c 51 */;
	struct platform_device *cocci_id/* drivers/fsi/fsi-occ.c 504 */;
	struct occ cocci_id/* drivers/fsi/fsi-occ.c 49 */;
	const u8 *cocci_id/* drivers/fsi/fsi-occ.c 431 */;
	unsigned long cocci_id/* drivers/fsi/fsi-occ.c 417 */;
	u16 cocci_id/* drivers/fsi/fsi-occ.c 416 */;
	u8 cocci_id/* drivers/fsi/fsi-occ.c 415 */;
	struct occ_response *cocci_id/* drivers/fsi/fsi-occ.c 414 */;
	struct occ *cocci_id/* drivers/fsi/fsi-occ.c 413 */;
	const unsigned long cocci_id/* drivers/fsi/fsi-occ.c 410 */;
	size_t *cocci_id/* drivers/fsi/fsi-occ.c 408 */;
	void *cocci_id/* drivers/fsi/fsi-occ.c 408 */;
	const void *cocci_id/* drivers/fsi/fsi-occ.c 407 */;
	struct device *cocci_id/* drivers/fsi/fsi-occ.c 407 */;
	int cocci_id/* drivers/fsi/fsi-occ.c 407 */;
	size_t cocci_id/* drivers/fsi/fsi-occ.c 407 */;
	struct occ {
		struct device *dev;
		struct device *sbefifo;
		char name[32];
		int idx;
		struct miscdevice mdev;
		struct mutex occ_lock;
	} cocci_id/* drivers/fsi/fsi-occ.c 40 */;
	__be32 cocci_id/* drivers/fsi/fsi-occ.c 358 */[OCC_SBE_STATUS_WORDS];
	__be32 *cocci_id/* drivers/fsi/fsi-occ.c 242 */;
	u32 cocci_id/* drivers/fsi/fsi-occ.c 238 */;
	ssize_t cocci_id/* drivers/fsi/fsi-occ.c 238 */;
	const struct file_operations cocci_id/* drivers/fsi/fsi-occ.c 209 */;
	const char __user *cocci_id/* drivers/fsi/fsi-occ.c 130 */;
}
