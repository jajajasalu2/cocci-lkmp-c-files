cocci_test_suite() {
	void __exit cocci_id/* lib/test_firmware.c 955 */;
	struct test_config cocci_id/* lib/test_firmware.c 930 */;
	int __init cocci_id/* lib/test_firmware.c 926 */;
	struct miscdevice cocci_id/* lib/test_firmware.c 919 */;
	struct attribute *cocci_id/* lib/test_firmware.c 891 */[];
	struct test_config {
		char *name;
		bool into_buf;
		bool sync_direct;
		bool send_uevent;
		u8 num_requests;
		u8 read_fw_idx;
		struct test_batched_req *reqs;
		int test_result;
		int (*req_firmware)(const struct firmware **fw,
				    const char *name, struct device *device);
	} cocci_id/* lib/test_firmware.c 88 */;
	struct test_batched_req cocci_id/* lib/test_firmware.c 766 */;
	void *cocci_id/* lib/test_firmware.c 605 */;
	char *cocci_id/* lib/test_firmware.c 416 */;
	struct device_attribute *cocci_id/* lib/test_firmware.c 415 */;
	struct device *cocci_id/* lib/test_firmware.c 414 */;
	ssize_t cocci_id/* lib/test_firmware.c 414 */;
	struct test_batched_req {
		u8 idx;
		int rc;
		bool sent;
		const struct firmware *fw;
		const char *name;
		struct completion completion;
		struct task_struct *task;
		struct device *dev;
	} cocci_id/* lib/test_firmware.c 35 */;
	long cocci_id/* lib/test_firmware.c 339 */;
	u8 *cocci_id/* lib/test_firmware.c 336 */;
	const struct firmware *cocci_id/* lib/test_firmware.c 33 */;
	bool cocci_id/* lib/test_firmware.c 314 */;
	bool *cocci_id/* lib/test_firmware.c 298 */;
	gfp_t cocci_id/* lib/test_firmware.c 165 */;
	const char *cocci_id/* lib/test_firmware.c 165 */;
	char **cocci_id/* lib/test_firmware.c 165 */;
	int cocci_id/* lib/test_firmware.c 165 */;
	size_t cocci_id/* lib/test_firmware.c 165 */;
	void cocci_id/* lib/test_firmware.c 153 */;
	u8 cocci_id/* lib/test_firmware.c 130 */;
	struct test_batched_req *cocci_id/* lib/test_firmware.c 129 */;
	const struct file_operations cocci_id/* lib/test_firmware.c 122 */;
	loff_t *cocci_id/* lib/test_firmware.c 109 */;
	struct file *cocci_id/* lib/test_firmware.c 108 */;
	char __user *cocci_id/* lib/test_firmware.c 108 */;
	struct test_config *cocci_id/* lib/test_firmware.c 106 */;
}
