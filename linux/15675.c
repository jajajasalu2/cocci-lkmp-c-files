cocci_test_suite() {
	u32 cocci_id/* drivers/staging/greybus/sdio.c 95 */;
	struct gbphy_driver cocci_id/* drivers/staging/greybus/sdio.c 874 */;
	const struct gbphy_device_id cocci_id/* drivers/staging/greybus/sdio.c 868 */[];
	struct gb_connection *cocci_id/* drivers/staging/greybus/sdio.c 763 */;
	const struct gbphy_device_id *cocci_id/* drivers/staging/greybus/sdio.c 761 */;
	struct gbphy_device *cocci_id/* drivers/staging/greybus/sdio.c 760 */;
	const struct mmc_host_ops cocci_id/* drivers/staging/greybus/sdio.c 752 */;
	struct mmc_host *cocci_id/* drivers/staging/greybus/sdio.c 733 */;
	struct gb_sdio_set_ios_request cocci_id/* drivers/staging/greybus/sdio.c 589 */;
	struct mmc_ios *cocci_id/* drivers/staging/greybus/sdio.c 586 */;
	struct mmc_command *cocci_id/* drivers/staging/greybus/sdio.c 552 */;
	struct mmc_request *cocci_id/* drivers/staging/greybus/sdio.c 549 */;
	bool cocci_id/* drivers/staging/greybus/sdio.c 52 */;
	struct gb_sdio_host cocci_id/* drivers/staging/greybus/sdio.c 500 */;
	struct work_struct *cocci_id/* drivers/staging/greybus/sdio.c 494 */;
	struct gb_sdio_command_response cocci_id/* drivers/staging/greybus/sdio.c 412 */;
	struct gb_sdio_command_request cocci_id/* drivers/staging/greybus/sdio.c 411 */;
	unsigned int cocci_id/* drivers/staging/greybus/sdio.c 317 */;
	struct scatterlist *cocci_id/* drivers/staging/greybus/sdio.c 316 */;
	struct gb_operation *cocci_id/* drivers/staging/greybus/sdio.c 315 */;
	struct gb_sdio_transfer_response *cocci_id/* drivers/staging/greybus/sdio.c 314 */;
	struct gb_sdio_transfer_request *cocci_id/* drivers/staging/greybus/sdio.c 313 */;
	u16 cocci_id/* drivers/staging/greybus/sdio.c 311 */;
	off_t cocci_id/* drivers/staging/greybus/sdio.c 311 */;
	size_t cocci_id/* drivers/staging/greybus/sdio.c 311 */;
	struct mmc_data *cocci_id/* drivers/staging/greybus/sdio.c 310 */;
	struct gb_sdio_set_ios_request *cocci_id/* drivers/staging/greybus/sdio.c 240 */;
	struct gb_sdio_event_request *cocci_id/* drivers/staging/greybus/sdio.c 209 */;
	struct gb_message *cocci_id/* drivers/staging/greybus/sdio.c 208 */;
	struct gb_sdio_host {
		struct gb_connection *connection;
		struct gbphy_device *gbphy_dev;
		struct mmc_host *mmc;
		struct mmc_request *mrq;
		struct mutex lock;
		size_t data_max;
		spinlock_t xfer;
		bool xfer_stop;
		struct workqueue_struct *mrq_workqueue;
		struct work_struct mrqwork;
		u8 queued_events;
		bool removed;
		bool card_present;
		bool read_only;
	} cocci_id/* drivers/staging/greybus/sdio.c 19 */;
	int cocci_id/* drivers/staging/greybus/sdio.c 171 */;
	u8 cocci_id/* drivers/staging/greybus/sdio.c 161 */;
	struct gb_sdio_host *cocci_id/* drivers/staging/greybus/sdio.c 161 */;
	void cocci_id/* drivers/staging/greybus/sdio.c 161 */;
	struct gb_sdio_transfer_response cocci_id/* drivers/staging/greybus/sdio.c 138 */;
	struct gb_sdio_transfer_request cocci_id/* drivers/staging/greybus/sdio.c 137 */;
	struct gb_sdio_get_caps_response cocci_id/* drivers/staging/greybus/sdio.c 119 */;
}
