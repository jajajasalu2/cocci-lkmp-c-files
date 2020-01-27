cocci_test_suite() {
	struct cros_ec_xfer_work_params {
		struct kthread_work work;
		cros_ec_xfer_fn_t fn;
		struct cros_ec_device *ec_dev;
		struct cros_ec_command *ec_msg;
		int ret;
	} cocci_id/* drivers/platform/chrome/cros_ec_spi.c 93 */;
	struct spi_driver cocci_id/* drivers/platform/chrome/cros_ec_spi.c 826 */;
	const struct spi_device_id cocci_id/* drivers/platform/chrome/cros_ec_spi.c 820 */[];
	const struct of_device_id cocci_id/* drivers/platform/chrome/cros_ec_spi.c 814 */[];
	int (*cocci_id/* drivers/platform/chrome/cros_ec_spi.c 80 */)(struct cros_ec_device *ec_dev,
								      struct cros_ec_command *ec_msg);
	struct ec_host_request cocci_id/* drivers/platform/chrome/cros_ec_spi.c 769 */;
	struct ec_response_get_protocol_info cocci_id/* drivers/platform/chrome/cros_ec_spi.c 768 */;
	struct ec_host_response cocci_id/* drivers/platform/chrome/cros_ec_spi.c 767 */;
	struct spi_device *cocci_id/* drivers/platform/chrome/cros_ec_spi.c 734 */;
	struct cros_ec_spi {
		struct spi_device *spi;
		s64 last_transfer_ns;
		unsigned int start_of_msg_delay;
		unsigned int end_of_msg_delay;
		struct kthread_worker *high_pri_worker;
	} cocci_id/* drivers/platform/chrome/cros_ec_spi.c 72 */;
	struct sched_param cocci_id/* drivers/platform/chrome/cros_ec_spi.c 708 */;
	struct cros_ec_spi *cocci_id/* drivers/platform/chrome/cros_ec_spi.c 706 */;
	struct device *cocci_id/* drivers/platform/chrome/cros_ec_spi.c 705 */;
	void *cocci_id/* drivers/platform/chrome/cros_ec_spi.c 700 */;
	u32 cocci_id/* drivers/platform/chrome/cros_ec_spi.c 688 */;
	struct device_node *cocci_id/* drivers/platform/chrome/cros_ec_spi.c 687 */;
	void cocci_id/* drivers/platform/chrome/cros_ec_spi.c 685 */;
	struct cros_ec_command *cocci_id/* drivers/platform/chrome/cros_ec_spi.c 680 */;
	struct cros_ec_device *cocci_id/* drivers/platform/chrome/cros_ec_spi.c 679 */;
	int cocci_id/* drivers/platform/chrome/cros_ec_spi.c 679 */;
	struct cros_ec_xfer_work_params cocci_id/* drivers/platform/chrome/cros_ec_spi.c 650 */;
	cros_ec_xfer_fn_t cocci_id/* drivers/platform/chrome/cros_ec_spi.c 647 */;
	struct cros_ec_xfer_work_params *cocci_id/* drivers/platform/chrome/cros_ec_spi.c 639 */;
	struct kthread_work *cocci_id/* drivers/platform/chrome/cros_ec_spi.c 637 */;
	u8 cocci_id/* drivers/platform/chrome/cros_ec_spi.c 533 */;
	struct spi_message cocci_id/* drivers/platform/chrome/cros_ec_spi.c 529 */;
	struct spi_transfer cocci_id/* drivers/platform/chrome/cros_ec_spi.c 528 */;
	unsigned long cocci_id/* drivers/platform/chrome/cros_ec_spi.c 190 */;
	u8 *cocci_id/* drivers/platform/chrome/cros_ec_spi.c 188 */;
	struct ec_host_response *cocci_id/* drivers/platform/chrome/cros_ec_spi.c 187 */;
	const char *cocci_id/* drivers/platform/chrome/cros_ec_spi.c 101 */;
}
