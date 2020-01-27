cocci_test_suite() {
	enum ssif_intf_state{SSIF_NORMAL, SSIF_GETTING_FLAGS, SSIF_GETTING_EVENTS, SSIF_CLEARING_FLAGS, SSIF_GETTING_MESSAGES,} cocci_id/* drivers/char/ipmi/ipmi_ssif.c 99 */;
	unsigned char cocci_id/* drivers/char/ipmi/ipmi_ssif.c 688 */;
	unsigned int cocci_id/* drivers/char/ipmi/ipmi_ssif.c 624 */;
	int cocci_id/* drivers/char/ipmi/ipmi_ssif.c 621 */(struct ssif_info *ssif_info);
	enum i2c_alert_protocol cocci_id/* drivers/char/ipmi/ipmi_ssif.c 596 */;
	struct timer_list *cocci_id/* drivers/char/ipmi/ipmi_ssif.c 557 */;
	void cocci_id/* drivers/char/ipmi/ipmi_ssif.c 534 */(struct ssif_info *ssif_info,
							     int result,
							     unsigned char *data,
							     unsigned int len);
	ssif_i2c_done cocci_id/* drivers/char/ipmi/ipmi_ssif.c 519 */;
	unsigned long cocci_id/* drivers/char/ipmi/ipmi_ssif.c 397 */;
	struct ipmi_smi_msg *cocci_id/* drivers/char/ipmi/ipmi_ssif.c 394 */;
	unsigned long *cocci_id/* drivers/char/ipmi/ipmi_ssif.c 393 */;
	void cocci_id/* drivers/char/ipmi/ipmi_ssif.c 393 */;
	unsigned char cocci_id/* drivers/char/ipmi/ipmi_ssif.c 381 */[2];
	int cocci_id/* drivers/char/ipmi/ipmi_ssif.c 310 */(struct ssif_info *ssif_info,
							    unsigned char *data,
							    unsigned int len);
	void cocci_id/* drivers/char/ipmi/ipmi_ssif.c 309 */(struct ssif_info *ssif_info,
							     unsigned long *flags);
	void cocci_id/* drivers/char/ipmi/ipmi_ssif.c 307 */(struct ssif_info *ssif_info,
							     struct ipmi_smi_msg *msg);
	struct platform_driver cocci_id/* drivers/char/ipmi/ipmi_ssif.c 2130 */;
	const struct platform_device_id cocci_id/* drivers/char/ipmi/ipmi_ssif.c 2125 */[];
	struct i2c_driver cocci_id/* drivers/char/ipmi/ipmi_ssif.c 2092 */;
	const struct i2c_device_id cocci_id/* drivers/char/ipmi/ipmi_ssif.c 2086 */[];
	u16 cocci_id/* drivers/char/ipmi/ipmi_ssif.c 2060 */;
	u8 cocci_id/* drivers/char/ipmi/ipmi_ssif.c 2059 */;
	struct platform_device *cocci_id/* drivers/char/ipmi/ipmi_ssif.c 2057 */;
	int cocci_id/* drivers/char/ipmi/ipmi_ssif.c 2057 */;
	struct ssif_info {
		struct ipmi_smi *intf;
		spinlock_t lock;
		struct ipmi_smi_msg *waiting_msg;
		struct ipmi_smi_msg *curr_msg;
		enum ssif_intf_state ssif_state;
		unsigned long ssif_debug;
		struct ipmi_smi_handlers handlers;
		enum ipmi_addr_src addr_source;
		union ipmi_smi_info_union addr_info;
#define RECEIVE_MSG_AVAIL 0x01
#define EVENT_MSG_BUFFER_FULL 0x02
#define WDT_PRE_TIMEOUT_INT 0x08
		unsigned char msg_flags;
		u8 global_enables;
		bool has_event_buffer;
		bool supports_alert;
		bool got_alert;
		bool waiting_alert;
		bool req_events;
		bool req_flags;
		int rtc_us_timer;
		unsigned char data[IPMI_MAX_MSG_LENGTH + 1];
		unsigned int data_len;
		unsigned char recv[I2C_SMBUS_BLOCK_MAX];
		struct i2c_client *client;
		ssif_i2c_done done_handler;
		struct task_struct *thread;
		struct completion wake_thread;
		bool stopping;
		int i2c_read_write;
		int i2c_command;
		unsigned char *i2c_data;
		unsigned int i2c_size;
		struct timer_list retry_timer;
		int retries_left;
		long watch_timeout;
		struct timer_list watch_timer;
		unsigned char max_xmit_msg_size;
		unsigned char max_recv_msg_size;
		bool cmd8_works;
		unsigned int multi_support;
		int supports_pec;
#define SSIF_NO_MULTI 0
#define SSIF_MULTI_2_PART 1
#define SSIF_MULTI_n_PART 2
		unsigned char *multi_data;
		unsigned int multi_len;
		unsigned int multi_pos;
		atomic_t stats[SSIF_NUM_STATS];
	} cocci_id/* drivers/char/ipmi/ipmi_ssif.c 205 */;
	const struct acpi_device_id cocci_id/* drivers/char/ipmi/ipmi_ssif.c 2049 */[];
	unsigned short cocci_id/* drivers/char/ipmi/ipmi_ssif.c 2032 */;
	void (*cocci_id/* drivers/char/ipmi/ipmi_ssif.c 202 */)(struct ssif_info *ssif_info, int result, unsigned char *data, unsigned int len);
	unsigned short *cocci_id/* drivers/char/ipmi/ipmi_ssif.c 2017 */;
	struct ssif_addr_info *cocci_id/* drivers/char/ipmi/ipmi_ssif.c 2006 */;
	struct ssif_info cocci_id/* drivers/char/ipmi/ipmi_ssif.c 200 */;
	enum ipmi_addr_src cocci_id/* drivers/char/ipmi/ipmi_ssif.c 1954 */;
	struct ssif_addr_info {
		struct i2c_board_info binfo;
		char *adapter_name;
		int debug;
		int slave_addr;
		enum ipmi_addr_src addr_src;
		union ipmi_smi_info_union addr_info;
		struct device *dev;
		struct i2c_client *client;
		struct i2c_client *added_client;
		struct mutex clients_mutex;
		struct list_head clients;
		struct list_head link;
	} cocci_id/* drivers/char/ipmi/ipmi_ssif.c 182 */;
	const struct i2c_device_id *cocci_id/* drivers/char/ipmi/ipmi_ssif.c 1663 */;
	unsigned char cocci_id/* drivers/char/ipmi/ipmi_ssif.c 1523 */[65];
	acpi_handle cocci_id/* drivers/char/ipmi/ipmi_ssif.c 1463 */;
	struct ssif_info *cocci_id/* drivers/char/ipmi/ipmi_ssif.c 1460 */;
	struct device *cocci_id/* drivers/char/ipmi/ipmi_ssif.c 1460 */;
	unsigned char cocci_id/* drivers/char/ipmi/ipmi_ssif.c 1384 */[3];
	struct i2c_board_info *cocci_id/* drivers/char/ipmi/ipmi_ssif.c 1381 */;
	int *cocci_id/* drivers/char/ipmi/ipmi_ssif.c 1348 */;
	struct i2c_client *cocci_id/* drivers/char/ipmi/ipmi_ssif.c 1347 */;
	unsigned char *cocci_id/* drivers/char/ipmi/ipmi_ssif.c 1347 */;
	const struct attribute_group cocci_id/* drivers/char/ipmi/ipmi_ssif.c 1279 */;
	struct attribute *cocci_id/* drivers/char/ipmi/ipmi_ssif.c 1261 */[];
	char *cocci_id/* drivers/char/ipmi/ipmi_ssif.c 1241 */;
	struct device_attribute *cocci_id/* drivers/char/ipmi/ipmi_ssif.c 1240 */;
	ssize_t cocci_id/* drivers/char/ipmi/ipmi_ssif.c 1239 */;
	int cocci_id/* drivers/char/ipmi/ipmi_ssif.c 1208 */[MAX_SSIF_BMCS];
	bool cocci_id/* drivers/char/ipmi/ipmi_ssif.c 1199 */;
	char *cocci_id/* drivers/char/ipmi/ipmi_ssif.c 1188 */[MAX_SSIF_BMCS];
	unsigned short cocci_id/* drivers/char/ipmi/ipmi_ssif.c 1183 */[MAX_SSIF_BMCS];
	struct ipmi_smi *cocci_id/* drivers/char/ipmi/ipmi_ssif.c 1172 */;
	enum ssif_stat_indexes{SSIF_STAT_sent_messages=0, SSIF_STAT_sent_messages_parts, SSIF_STAT_send_retries, SSIF_STAT_send_errors, SSIF_STAT_received_messages, SSIF_STAT_received_message_parts, SSIF_STAT_receive_retries, SSIF_STAT_receive_errors, SSIF_STAT_flag_fetches, SSIF_STAT_hosed, SSIF_STAT_events, SSIF_STAT_incoming_messages, SSIF_STAT_watchdog_pretimeouts, SSIF_STAT_alerts, SSIF_NUM_STATS,} cocci_id/* drivers/char/ipmi/ipmi_ssif.c 114 */;
	struct ipmi_smi_info *cocci_id/* drivers/char/ipmi/ipmi_ssif.c 1118 */;
	void *cocci_id/* drivers/char/ipmi/ipmi_ssif.c 1118 */;
	long long cocci_id/* drivers/char/ipmi/ipmi_ssif.c 1114 */;
	long cocci_id/* drivers/char/ipmi/ipmi_ssif.c 1114 */;
	struct timespec64 cocci_id/* drivers/char/ipmi/ipmi_ssif.c 1108 */;
}
