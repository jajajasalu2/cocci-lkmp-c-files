cocci_test_suite() {
	unsigned long cocci_id/* drivers/platform/olpc/olpc-ec.c 82 */;
	struct ec_cmd_desc *cocci_id/* drivers/platform/olpc/olpc-ec.c 81 */;
	struct olpc_ec_priv cocci_id/* drivers/platform/olpc/olpc-ec.c 80 */;
	struct work_struct *cocci_id/* drivers/platform/olpc/olpc-ec.c 78 */;
	void cocci_id/* drivers/platform/olpc/olpc-ec.c 71 */;
	void *cocci_id/* drivers/platform/olpc/olpc-ec.c 69 */;
	struct olpc_ec_driver *cocci_id/* drivers/platform/olpc/olpc-ec.c 67 */;
	int __init cocci_id/* drivers/platform/olpc/olpc-ec.c 488 */;
	struct platform_driver cocci_id/* drivers/platform/olpc/olpc-ec.c 480 */;
	const struct dev_pm_ops cocci_id/* drivers/platform/olpc/olpc-ec.c 475 */;
	struct device *cocci_id/* drivers/platform/olpc/olpc-ec.c 466 */;
	struct regulator_config cocci_id/* drivers/platform/olpc/olpc-ec.c 407 */;
	struct platform_device *cocci_id/* drivers/platform/olpc/olpc-ec.c 404 */;
	const struct regulator_desc cocci_id/* drivers/platform/olpc/olpc-ec.c 396 */;
	struct regulator_ops cocci_id/* drivers/platform/olpc/olpc-ec.c 390 */;
	struct olpc_ec_priv *cocci_id/* drivers/platform/olpc/olpc-ec.c 378 */;
	struct regulator_dev *cocci_id/* drivers/platform/olpc/olpc-ec.c 376 */;
	int cocci_id/* drivers/platform/olpc/olpc-ec.c 376 */;
	unsigned char cocci_id/* drivers/platform/olpc/olpc-ec.c 355 */;
	bool cocci_id/* drivers/platform/olpc/olpc-ec.c 353 */;
	struct dentry *cocci_id/* drivers/platform/olpc/olpc-ec.c 331 */;
	struct olpc_ec_priv {
		struct olpc_ec_driver *drv;
		u8 version;
		struct work_struct worker;
		struct mutex cmd_lock;
		struct regulator_dev *dcon_rdev;
		bool dcon_enabled;
		struct list_head cmd_q;
		spinlock_t cmd_q_lock;
		struct dentry *dbgfs_dir;
		u16 ec_wakeup_mask;
		bool suspended;
	} cocci_id/* drivers/platform/olpc/olpc-ec.c 33 */;
	const struct file_operations cocci_id/* drivers/platform/olpc/olpc-ec.c 326 */;
	char cocci_id/* drivers/platform/olpc/olpc-ec.c 312 */[64];
	char *cocci_id/* drivers/platform/olpc/olpc-ec.c 311 */;
	unsigned int cocci_id/* drivers/platform/olpc/olpc-ec.c 310 */;
	loff_t *cocci_id/* drivers/platform/olpc/olpc-ec.c 308 */;
	size_t cocci_id/* drivers/platform/olpc/olpc-ec.c 308 */;
	struct file *cocci_id/* drivers/platform/olpc/olpc-ec.c 307 */;
	char __user *cocci_id/* drivers/platform/olpc/olpc-ec.c 307 */;
	ssize_t cocci_id/* drivers/platform/olpc/olpc-ec.c 307 */;
	unsigned int cocci_id/* drivers/platform/olpc/olpc-ec.c 267 */[EC_MAX_CMD_ARGS];
	unsigned char cocci_id/* drivers/platform/olpc/olpc-ec.c 266 */[EC_MAX_CMD_ARGS];
	const char __user *cocci_id/* drivers/platform/olpc/olpc-ec.c 262 */;
	unsigned char cocci_id/* drivers/platform/olpc/olpc-ec.c 259 */[EC_MAX_CMD_REPLY];
	u16 *cocci_id/* drivers/platform/olpc/olpc-ec.c 221 */;
	struct ec_cmd_desc {
		u8 cmd;
		u8 *inbuf,*outbuf;
		size_t inlen,outlen;
		int err;
		struct completion finished;
		struct list_head node;
		void *priv;
	} cocci_id/* drivers/platform/olpc/olpc-ec.c 21 */;
	__be16 cocci_id/* drivers/platform/olpc/olpc-ec.c 197 */;
	u16 cocci_id/* drivers/platform/olpc/olpc-ec.c 188 */;
	struct ec_cmd_desc cocci_id/* drivers/platform/olpc/olpc-ec.c 130 */;
	u8 cocci_id/* drivers/platform/olpc/olpc-ec.c 127 */;
	u8 *cocci_id/* drivers/platform/olpc/olpc-ec.c 127 */;
}
