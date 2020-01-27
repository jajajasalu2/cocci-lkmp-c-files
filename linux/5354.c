cocci_test_suite() {
	struct builtin_fw cocci_id/* drivers/base/firmware_loader/main.c 99 */[];
	struct firmware_work {
		struct work_struct work;
		struct module *module;
		const char *name;
		struct device *device;
		void *context;
		void (*cont)(const struct firmware *fw, void *context);
		enum fw_opt opt_flags;
	} cocci_id/* drivers/base/firmware_loader/main.c 957 */;
	struct firmware_cache cocci_id/* drivers/base/firmware_loader/main.c 92 */;
	struct fw_priv cocci_id/* drivers/base/firmware_loader/main.c 82 */;
	struct firmware *cocci_id/* drivers/base/firmware_loader/main.c 756 */;
	enum fw_opt cocci_id/* drivers/base/firmware_loader/main.c 754 */;
	struct device *cocci_id/* drivers/base/firmware_loader/main.c 753 */;
	const struct firmware **cocci_id/* drivers/base/firmware_loader/main.c 752 */;
	struct fw_name_devm {
		unsigned long magic;
		const char *name;
	} cocci_id/* drivers/base/firmware_loader/main.c 75 */;
	struct fw_cache_entry {
		struct list_head list;
		const char *name;
	} cocci_id/* drivers/base/firmware_loader/main.c 70 */;
	struct firmware **cocci_id/* drivers/base/firmware_loader/main.c 686 */;
	struct fw_name_devm cocci_id/* drivers/base/firmware_loader/main.c 609 */;
	bool cocci_id/* drivers/base/firmware_loader/main.c 590 */;
	struct firmware_cache {
		spinlock_t lock;
		struct list_head head;
		int state;
#ifdef CONFIG_FW_CACHE
		spinlock_t name_lock;
		struct list_head fw_names;
		struct delayed_work work;
		struct notifier_block pm_notify;
#endif
	} cocci_id/* drivers/base/firmware_loader/main.c 48 */;
	enum kernel_read_file_id cocci_id/* drivers/base/firmware_loader/main.c 468 */;
	char *cocci_id/* drivers/base/firmware_loader/main.c 467 */;
	loff_t cocci_id/* drivers/base/firmware_loader/main.c 464 */;
	int (*cocci_id/* drivers/base/firmware_loader/main.c 459 */)(struct device *dev,
								     struct fw_priv *fw_priv,
								     size_t in_size,
								     const void *in_buffer);
	const char *const cocci_id/* drivers/base/firmware_loader/main.c 440 */[];
	char cocci_id/* drivers/base/firmware_loader/main.c 439 */[256];
	const void *cocci_id/* drivers/base/firmware_loader/main.c 428 */;
	struct page *cocci_id/* drivers/base/firmware_loader/main.c 386 */;
	struct xz_buf cocci_id/* drivers/base/firmware_loader/main.c 384 */;
	struct xz_dec *cocci_id/* drivers/base/firmware_loader/main.c 383 */;
	enum xz_ret cocci_id/* drivers/base/firmware_loader/main.c 344 */;
	struct page **cocci_id/* drivers/base/firmware_loader/main.c 292 */;
	unsigned int cocci_id/* drivers/base/firmware_loader/main.c 250 */;
	struct kref *cocci_id/* drivers/base/firmware_loader/main.c 242 */;
	struct fw_priv **cocci_id/* drivers/base/firmware_loader/main.c 212 */;
	void *cocci_id/* drivers/base/firmware_loader/main.c 170 */;
	size_t cocci_id/* drivers/base/firmware_loader/main.c 170 */;
	struct firmware_cache *cocci_id/* drivers/base/firmware_loader/main.c 169 */;
	const char *cocci_id/* drivers/base/firmware_loader/main.c 168 */;
	struct fw_priv *cocci_id/* drivers/base/firmware_loader/main.c 168 */;
	int cocci_id/* drivers/base/firmware_loader/main.c 166 */(const char *name);
	struct fw_state *cocci_id/* drivers/base/firmware_loader/main.c 155 */;
	void __exit cocci_id/* drivers/base/firmware_loader/main.c 1462 */;
	int __init cocci_id/* drivers/base/firmware_loader/main.c 1440 */;
	struct notifier_block cocci_id/* drivers/base/firmware_loader/main.c 1436 */;
	void __init cocci_id/* drivers/base/firmware_loader/main.c 1417 */;
	struct syscore_ops cocci_id/* drivers/base/firmware_loader/main.c 1374 */;
	struct notifier_block *cocci_id/* drivers/base/firmware_loader/main.c 1334 */;
	unsigned long cocci_id/* drivers/base/firmware_loader/main.c 1328 */;
	struct work_struct *cocci_id/* drivers/base/firmware_loader/main.c 1316 */;
	struct fw_cache_entry cocci_id/* drivers/base/firmware_loader/main.c 1259 */;
	struct list_head *cocci_id/* drivers/base/firmware_loader/main.c 1205 */;
	struct fw_name_devm *cocci_id/* drivers/base/firmware_loader/main.c 1203 */;
	int cocci_id/* drivers/base/firmware_loader/main.c 1187 */;
	struct fw_cache_entry *cocci_id/* drivers/base/firmware_loader/main.c 1185 */;
	async_cookie_t cocci_id/* drivers/base/firmware_loader/main.c 1183 */;
	void cocci_id/* drivers/base/firmware_loader/main.c 1182 */;
	struct builtin_fw *cocci_id/* drivers/base/firmware_loader/main.c 112 */;
	struct firmware cocci_id/* drivers/base/firmware_loader/main.c 1109 */;
	const struct firmware *cocci_id/* drivers/base/firmware_loader/main.c 1070 */;
	struct firmware_work cocci_id/* drivers/base/firmware_loader/main.c 1015 */;
	struct firmware_work *cocci_id/* drivers/base/firmware_loader/main.c 1013 */;
	void (*cocci_id/* drivers/base/firmware_loader/main.c 1011 */)(const struct firmware *fw,
								       void *context);
	gfp_t cocci_id/* drivers/base/firmware_loader/main.c 1010 */;
	struct module *cocci_id/* drivers/base/firmware_loader/main.c 1009 */;
}
