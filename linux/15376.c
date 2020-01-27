cocci_test_suite() {
	struct mei_cl_driver cocci_id/* drivers/watchdog/mei_wdt.c 653 */;
	const struct mei_cl_device_id cocci_id/* drivers/watchdog/mei_wdt.c 646 */[];
	enum mei_wdt_state cocci_id/* drivers/watchdog/mei_wdt.c 58 */;
	const char *cocci_id/* drivers/watchdog/mei_wdt.c 58 */;
	struct mei_wdt cocci_id/* drivers/watchdog/mei_wdt.c 565 */;
	const struct mei_cl_device_id *cocci_id/* drivers/watchdog/mei_wdt.c 560 */;
	struct dentry *cocci_id/* drivers/watchdog/mei_wdt.c 542 */;
	void cocci_id/* drivers/watchdog/mei_wdt.c 540 */;
	const struct file_operations cocci_id/* drivers/watchdog/mei_wdt.c 509 */;
	char cocci_id/* drivers/watchdog/mei_wdt.c 498 */[32];
	const size_t cocci_id/* drivers/watchdog/mei_wdt.c 497 */;
	loff_t *cocci_id/* drivers/watchdog/mei_wdt.c 494 */;
	size_t cocci_id/* drivers/watchdog/mei_wdt.c 494 */;
	struct file *cocci_id/* drivers/watchdog/mei_wdt.c 493 */;
	char __user *cocci_id/* drivers/watchdog/mei_wdt.c 493 */;
	ssize_t cocci_id/* drivers/watchdog/mei_wdt.c 493 */;
	enum mei_wdt_state{MEI_WDT_PROBE, MEI_WDT_IDLE, MEI_WDT_START, MEI_WDT_RUNNING, MEI_WDT_STOPPING, MEI_WDT_NOT_REQUIRED,} cocci_id/* drivers/watchdog/mei_wdt.c 49 */;
	struct mei_cl_device *cocci_id/* drivers/watchdog/mei_wdt.c 481 */;
	struct mei_wdt_start_response cocci_id/* drivers/watchdog/mei_wdt.c 412 */;
	struct work_struct *cocci_id/* drivers/watchdog/mei_wdt.c 397 */;
	struct device *cocci_id/* drivers/watchdog/mei_wdt.c 361 */;
	bool cocci_id/* drivers/watchdog/mei_wdt.c 329 */;
	struct mei_wdt *cocci_id/* drivers/watchdog/mei_wdt.c 329 */;
	struct watchdog_info cocci_id/* drivers/watchdog/mei_wdt.c 314 */;
	const struct watchdog_ops cocci_id/* drivers/watchdog/mei_wdt.c 305 */;
	unsigned int cocci_id/* drivers/watchdog/mei_wdt.c 293 */;
	struct watchdog_device *cocci_id/* drivers/watchdog/mei_wdt.c 262 */;
	int cocci_id/* drivers/watchdog/mei_wdt.c 262 */;
	struct mei_wdt_stop_request cocci_id/* drivers/watchdog/mei_wdt.c 196 */;
	u8 *cocci_id/* drivers/watchdog/mei_wdt.c 179 */;
	struct mei_mc_hdr cocci_id/* drivers/watchdog/mei_wdt.c 174 */;
	struct mei_wdt_start_request cocci_id/* drivers/watchdog/mei_wdt.c 168 */;
	struct mei_wdt_stop_request {
		struct mei_mc_hdr hdr;
	}__packed cocci_id/* drivers/watchdog/mei_wdt.c 154 */;
	struct mei_wdt_start_response {
		struct mei_mc_hdr hdr;
		u8 status;
		u8 wdstate;
	}__packed cocci_id/* drivers/watchdog/mei_wdt.c 143 */;
	struct mei_wdt_start_request {
		struct mei_mc_hdr hdr;
		u16 timeout;
		u8 reserved[17];
	}__packed cocci_id/* drivers/watchdog/mei_wdt.c 130 */;
	struct mei_mc_hdr {
		u8 command;
		u8 bytecount;
		u8 subcommand;
		u8 versionnumber;
	} cocci_id/* drivers/watchdog/mei_wdt.c 116 */;
	struct mei_wdt {
		struct watchdog_device wdd;
		struct mei_cl_device *cldev;
		enum mei_wdt_state state;
		bool resp_required;
		struct completion response;
		struct work_struct unregister;
		struct mutex reg_lock;
		u16 timeout;
#if IS_ENABLED(CONFIG_DEBUG_FS)
		struct dentry *dbgfs_dir;
#endif
	} cocci_id/*  1 */;
}
