cocci_test_suite() {
	struct spi_driver cocci_id/* drivers/platform/olpc/olpc-xo175-ec.c 745 */;
	const struct spi_device_id cocci_id/* drivers/platform/olpc/olpc-xo175-ec.c 739 */[];
	const struct of_device_id cocci_id/* drivers/platform/olpc/olpc-xo175-ec.c 733 */[];
	struct spi_device *cocci_id/* drivers/platform/olpc/olpc-xo175-ec.c 664 */;
	struct olpc_ec_driver cocci_id/* drivers/platform/olpc/olpc-xo175-ec.c 647 */;
	int __maybe_unused cocci_id/* drivers/platform/olpc/olpc-xo175-ec.c 630 */;
	struct {
		u8 suspend;
		u32 suspend_count;
	}__packed cocci_id/* drivers/platform/olpc/olpc-xo175-ec.c 595 */;
	u8 cocci_id/* drivers/platform/olpc/olpc-xo175-ec.c 577 */[2];
	unsigned int cocci_id/* drivers/platform/olpc/olpc-xo175-ec.c 575 */;
	unsigned long cocci_id/* drivers/platform/olpc/olpc-xo175-ec.c 478 */;
	struct device *cocci_id/* drivers/platform/olpc/olpc-xo175-ec.c 477 */;
	struct olpc_xo175_ec *cocci_id/* drivers/platform/olpc/olpc-xo175-ec.c 476 */;
	void *cocci_id/* drivers/platform/olpc/olpc-xo175-ec.c 474 */;
	u8 cocci_id/* drivers/platform/olpc/olpc-xo175-ec.c 473 */;
	u8 *cocci_id/* drivers/platform/olpc/olpc-xo175-ec.c 473 */;
	int cocci_id/* drivers/platform/olpc/olpc-xo175-ec.c 473 */;
	size_t cocci_id/* drivers/platform/olpc/olpc-xo175-ec.c 473 */;
	enum ec_chan_t{CHAN_NONE=0, CHAN_SWITCH, CHAN_CMD_RESP, CHAN_KEYBOARD, CHAN_TOUCHPAD, CHAN_EVENT, CHAN_DEBUG, CHAN_CMD_ERROR,} cocci_id/* drivers/platform/olpc/olpc-xo175-ec.c 32 */;
	struct power_supply *cocci_id/* drivers/platform/olpc/olpc-xo175-ec.c 304 */;
	void cocci_id/* drivers/platform/olpc/olpc-xo175-ec.c 300 */;
	u8 cocci_id/* drivers/platform/olpc/olpc-xo175-ec.c 295 */[];
	void cocci_id/* drivers/platform/olpc/olpc-xo175-ec.c 273 */(void *arg);
	struct ec_cmd_t {
		u8 cmd;
		u8 bytes_returned;
	} cocci_id/* drivers/platform/olpc/olpc-xo175-ec.c 27 */;
	const struct ec_cmd_t *cocci_id/* drivers/platform/olpc/olpc-xo175-ec.c 256 */;
	struct platform_device *cocci_id/* drivers/platform/olpc/olpc-xo175-ec.c 252 */;
	struct olpc_xo175_ec {
		bool suspended;
		struct spi_device *spi;
		struct spi_transfer xfer;
		struct spi_message msg;
		union {
			struct olpc_xo175_ec_cmd cmd;
			struct olpc_xo175_ec_resp resp;
		} tx_buf,rx_buf;
		struct gpio_desc *gpio_cmd;
		spinlock_t cmd_state_lock;
		int cmd_state;
		bool cmd_running;
		struct completion cmd_done;
		struct olpc_xo175_ec_cmd cmd;
		u8 resp_data[EC_MAX_RESP_LEN];
		int expected_resp_len;
		int resp_len;
		struct input_dev *pwrbtn;
		char logbuf[LOG_BUF_SIZE];
		int logbuf_len;
	} cocci_id/* drivers/platform/olpc/olpc-xo175-ec.c 219 */;
	struct olpc_xo175_ec_resp {
		u8 channel;
		u8 byte;
	} cocci_id/* drivers/platform/olpc/olpc-xo175-ec.c 214 */;
	struct olpc_xo175_ec_cmd {
		u8 command;
		u8 nr_args;
		u8 data_len;
		u8 args[EC_MAX_CMD_DATA_LEN];
	} cocci_id/* drivers/platform/olpc/olpc-xo175-ec.c 207 */;
	enum ec_state_t{CMD_STATE_IDLE=0, CMD_STATE_WAITING_FOR_SWITCH, CMD_STATE_CMD_IN_TX_FIFO, CMD_STATE_CMD_SENT, CMD_STATE_RESP_RECEIVED, CMD_STATE_ERROR_RECEIVED,} cocci_id/* drivers/platform/olpc/olpc-xo175-ec.c 198 */;
	const struct ec_cmd_t cocci_id/* drivers/platform/olpc/olpc-xo175-ec.c 131 */[];
}
