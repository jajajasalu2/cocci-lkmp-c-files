cocci_test_suite() {
	uint cocci_id/* drivers/fpga/stratix10-soc.c 98 */;
	struct fpga_manager *cocci_id/* drivers/fpga/stratix10-soc.c 98 */;
	bool cocci_id/* drivers/fpga/stratix10-soc.c 71 */;
	void __exit cocci_id/* drivers/fpga/stratix10-soc.c 526 */;
	void cocci_id/* drivers/fpga/stratix10-soc.c 526 */;
	struct stratix10_svc_client_msg cocci_id/* drivers/fpga/stratix10-soc.c 51 */;
	int cocci_id/* drivers/fpga/stratix10-soc.c 504 */;
	struct device_node *cocci_id/* drivers/fpga/stratix10-soc.c 502 */;
	int __init cocci_id/* drivers/fpga/stratix10-soc.c 500 */;
	struct platform_driver cocci_id/* drivers/fpga/stratix10-soc.c 491 */;
	struct stratix10_svc_chan *cocci_id/* drivers/fpga/stratix10-soc.c 49 */;
	const struct of_device_id cocci_id/* drivers/fpga/stratix10-soc.c 484 */[];
	enum stratix10_svc_command_code cocci_id/* drivers/fpga/stratix10-soc.c 46 */;
	struct platform_device *cocci_id/* drivers/fpga/stratix10-soc.c 425 */;
	const struct fpga_manager_ops cocci_id/* drivers/fpga/stratix10-soc.c 418 */;
	enum fpga_mgr_states cocci_id/* drivers/fpga/stratix10-soc.c 413 */;
	struct s10_priv {
		struct stratix10_svc_chan *chan;
		struct stratix10_svc_client client;
		struct completion status_return_completion;
		struct s10_svc_buf svc_bufs[NUM_SVC_BUFS];
		unsigned long status;
	} cocci_id/* drivers/fpga/stratix10-soc.c 37 */;
	unsigned long cocci_id/* drivers/fpga/stratix10-soc.c 366 */;
	struct fpga_image_info *cocci_id/* drivers/fpga/stratix10-soc.c 362 */;
	struct s10_svc_buf {
		char *buf;
		unsigned long lock;
	} cocci_id/* drivers/fpga/stratix10-soc.c 32 */;
	long cocci_id/* drivers/fpga/stratix10-soc.c 287 */;
	struct device *cocci_id/* drivers/fpga/stratix10-soc.c 286 */;
	size_t cocci_id/* drivers/fpga/stratix10-soc.c 283 */;
	const char *cocci_id/* drivers/fpga/stratix10-soc.c 282 */;
	void *cocci_id/* drivers/fpga/stratix10-soc.c 248 */;
	char *cocci_id/* drivers/fpga/stratix10-soc.c 181 */;
	struct stratix10_svc_command_config_type cocci_id/* drivers/fpga/stratix10-soc.c 180 */;
	u32 cocci_id/* drivers/fpga/stratix10-soc.c 146 */;
	struct stratix10_svc_cb_data *cocci_id/* drivers/fpga/stratix10-soc.c 143 */;
	struct stratix10_svc_client *cocci_id/* drivers/fpga/stratix10-soc.c 142 */;
	struct s10_priv *cocci_id/* drivers/fpga/stratix10-soc.c 100 */;
}
