cocci_test_suite() {
	const struct input_mt_pos *cocci_id/* drivers/input/keyboard/applespi.c 990 */;
	const struct file_operations cocci_id/* drivers/input/keyboard/applespi.c 982 */;
	loff_t *cocci_id/* drivers/input/keyboard/applespi.c 974 */;
	char __user *cocci_id/* drivers/input/keyboard/applespi.c 973 */;
	ssize_t cocci_id/* drivers/input/keyboard/applespi.c 973 */;
	struct inode *cocci_id/* drivers/input/keyboard/applespi.c 957 */;
	struct file *cocci_id/* drivers/input/keyboard/applespi.c 957 */;
	const struct tp_finger *cocci_id/* drivers/input/keyboard/applespi.c 945 */;
	signed short cocci_id/* drivers/input/keyboard/applespi.c 941 */;
	__le16 cocci_id/* drivers/input/keyboard/applespi.c 939 */;
	struct input_dev *cocci_id/* drivers/input/keyboard/applespi.c 923 */;
	struct applespi_data cocci_id/* drivers/input/keyboard/applespi.c 900 */;
	enum led_brightness cocci_id/* drivers/input/keyboard/applespi.c 897 */;
	struct led_classdev *cocci_id/* drivers/input/keyboard/applespi.c 896 */;
	enum applespi_evt_type cocci_id/* drivers/input/keyboard/applespi.c 729 */;
	int cocci_id/* drivers/input/keyboard/applespi.c 701 */(struct applespi_data *applespi);
	unsigned long long cocci_id/* drivers/input/keyboard/applespi.c 674 */;
	acpi_status cocci_id/* drivers/input/keyboard/applespi.c 673 */;
	u64 *cocci_id/* drivers/input/keyboard/applespi.c 632 */;
	struct spi_settings *cocci_id/* drivers/input/keyboard/applespi.c 629 */;
	const union acpi_object *cocci_id/* drivers/input/keyboard/applespi.c 628 */;
	struct acpi_device *cocci_id/* drivers/input/keyboard/applespi.c 627 */;
	u8 cocci_id/* drivers/input/keyboard/applespi.c 608 */[];
	bool cocci_id/* drivers/input/keyboard/applespi.c 605 */;
	void (*cocci_id/* drivers/input/keyboard/applespi.c 597 */)(void *);
	struct spi_message *cocci_id/* drivers/input/keyboard/applespi.c 597 */;
	struct applespi_data *cocci_id/* drivers/input/keyboard/applespi.c 596 */;
	int cocci_id/* drivers/input/keyboard/applespi.c 596 */;
	struct spi_transfer *cocci_id/* drivers/input/keyboard/applespi.c 542 */;
	applespi_trace_fun cocci_id/* drivers/input/keyboard/applespi.c 518 */;
	void (*cocci_id/* drivers/input/keyboard/applespi.c 515 */)(enum applespi_evt_type,
								    enum applespi_pkt_type,
								    u8 *,
								    size_t);
	const struct applespi_tp_model_info cocci_id/* drivers/input/keyboard/applespi.c 499 */[];
	struct applespi_tp_model_info {
		u16 model;
		struct applespi_tp_info tp_info;
	} cocci_id/* drivers/input/keyboard/applespi.c 494 */;
	const struct applespi_key_translation cocci_id/* drivers/input/keyboard/applespi.c 488 */[];
	struct applespi_key_translation {
		u16 from;
		u16 to;
		u8 flags;
	} cocci_id/* drivers/input/keyboard/applespi.c 460 */;
	const unsigned char cocci_id/* drivers/input/keyboard/applespi.c 449 */[];
	struct applespi_data {
		struct spi_device *spi;
		struct spi_settings spi_settings;
		struct input_dev *keyboard_input_dev;
		struct input_dev *touchpad_input_dev;
		u8 *tx_buffer;
		u8 *tx_status;
		u8 *rx_buffer;
		u8 *msg_buf;
		unsigned int saved_msg_len;
		struct applespi_tp_info tp_info;
		u8 last_keys_pressed[MAX_ROLLOVER];
		u8 last_keys_fn_pressed[MAX_ROLLOVER];
		u8 last_fn_pressed;
		struct input_mt_pos pos[MAX_FINGERS];
		int slots[MAX_FINGERS];
		int gpe;
		acpi_handle sien;
		acpi_handle sist;
		struct spi_transfer dl_t;
		struct spi_transfer rd_t;
		struct spi_message rd_m;
		struct spi_transfer ww_t;
		struct spi_transfer wd_t;
		struct spi_transfer wr_t;
		struct spi_transfer st_t;
		struct spi_message wr_m;
		bool want_tp_info_cmd;
		bool want_mt_init_cmd;
		bool want_cl_led_on;
		bool have_cl_led_on;
		unsigned int want_bl_level;
		unsigned int have_bl_level;
		unsigned int cmd_msg_cntr;
		spinlock_t cmd_msg_lock;
		bool cmd_msg_queued;
		enum applespi_evt_type cmd_evt_type;
		struct led_classdev backlight_info;
		bool suspended;
		bool drain;
		wait_queue_head_t drain_complete;
		bool read_active;
		bool write_active;
		struct work_struct work;
		struct touchpad_info_protocol rcvd_tp_info;
		struct dentry *debugfs_root;
		bool debug_tp_dim;
		char tp_dim_val[40];
		int tp_dim_min_x;
		int tp_dim_max_x;
		int tp_dim_min_y;
		int tp_dim_max_y;
	} cocci_id/* drivers/input/keyboard/applespi.c 360 */;
	struct applespi_tp_info {
		int x_min;
		int y_min;
		int x_max;
		int y_max;
	} cocci_id/* drivers/input/keyboard/applespi.c 353 */;
	struct spi_settings {
		u64 spi_cs_delay;
		u64 reset_a2r_usec;
		u64 reset_rec_usec;
	} cocci_id/* drivers/input/keyboard/applespi.c 346 */;
	struct spi_packet {
		u8 flags;
		u8 device;
		__le16 offset;
		__le16 remaining;
		__le16 length;
		u8 data[246];
		__le16 crc16;
	} cocci_id/* drivers/input/keyboard/applespi.c 336 */;
	struct message {
		__le16 type;
		u8 zero;
		u8 counter;
		__le16 rsp_buf_len;
		__le16 length;
		union {
			struct keyboard_protocol keyboard;
			struct touchpad_protocol touchpad;
			struct touchpad_info_protocol tp_info;
			struct command_protocol_tp_info tp_info_command;
			struct command_protocol_mt_init init_mt_command;
			struct command_protocol_capsl capsl_command;
			struct command_protocol_bl bl_command;
			u8 data[0];
		};
	} cocci_id/* drivers/input/keyboard/applespi.c 290 */;
	struct command_protocol_bl {
		__le16 const1;
		__le16 level;
		__le16 const2;
		__le16 crc16;
	} cocci_id/* drivers/input/keyboard/applespi.c 261 */;
	struct command_protocol_capsl {
		u8 unknown;
		u8 led;
		__le16 crc16;
	} cocci_id/* drivers/input/keyboard/applespi.c 245 */;
	struct command_protocol_mt_init {
		__le16 cmd;
		__le16 crc16;
	} cocci_id/* drivers/input/keyboard/applespi.c 231 */;
	struct touchpad_info_protocol {
		u8 unknown1[105];
		u8 model_flags;
		u8 model_no;
		u8 unknown2[3];
		__le16 crc16;
	} cocci_id/* drivers/input/keyboard/applespi.c 215 */;
	struct command_protocol_tp_info {
		__le16 crc16;
	} cocci_id/* drivers/input/keyboard/applespi.c 199 */;
	struct spi_driver cocci_id/* drivers/input/keyboard/applespi.c 1946 */;
	const struct acpi_device_id cocci_id/* drivers/input/keyboard/applespi.c 1935 */[];
	int __maybe_unused cocci_id/* drivers/input/keyboard/applespi.c 1898 */;
	struct spi_device *cocci_id/* drivers/input/keyboard/applespi.c 1863 */;
	struct device *cocci_id/* drivers/input/keyboard/applespi.c 1861 */;
	unsigned long cocci_id/* drivers/input/keyboard/applespi.c 1825 */;
	struct touchpad_protocol {
		u8 unknown1[1];
		u8 clicked;
		u8 unknown2[28];
		u8 number_of_fingers;
		u8 clicked2;
		u8 unknown3[16];
		struct tp_finger fingers[0];
	} cocci_id/* drivers/input/keyboard/applespi.c 182 */;
	efi_char16_t *cocci_id/* drivers/input/keyboard/applespi.c 1617 */;
	efi_guid_t cocci_id/* drivers/input/keyboard/applespi.c 1604 */;
	struct efivar_entry *cocci_id/* drivers/input/keyboard/applespi.c 1576 */;
	u32 cocci_id/* drivers/input/keyboard/applespi.c 1548 */;
	acpi_handle cocci_id/* drivers/input/keyboard/applespi.c 1548 */;
	struct tp_finger {
		__le16 origin;
		__le16 abs_x;
		__le16 abs_y;
		__le16 rel_x;
		__le16 rel_y;
		__le16 tool_major;
		__le16 tool_minor;
		__le16 orientation;
		__le16 touch_major;
		__le16 touch_minor;
		__le16 unused[2];
		__le16 pressure;
		__le16 multi;
		__le16 crc16;
	} cocci_id/* drivers/input/keyboard/applespi.c 153 */;
	void *cocci_id/* drivers/input/keyboard/applespi.c 1528 */;
	void cocci_id/* drivers/input/keyboard/applespi.c 1528 */;
	size_t cocci_id/* drivers/input/keyboard/applespi.c 1494 */;
	struct touchpad_protocol *cocci_id/* drivers/input/keyboard/applespi.c 1493 */;
	u8 *cocci_id/* drivers/input/keyboard/applespi.c 1475 */;
	struct message *cocci_id/* drivers/input/keyboard/applespi.c 1398 */;
	struct spi_packet *cocci_id/* drivers/input/keyboard/applespi.c 1376 */;
	struct work_struct *cocci_id/* drivers/input/keyboard/applespi.c 1322 */;
	struct keyboard_protocol {
		u8 unknown1;
		u8 modifiers;
		u8 unknown2;
		u8 keys_pressed[MAX_ROLLOVER];
		u8 fn_pressed;
		__le16 crc16;
	} cocci_id/* drivers/input/keyboard/applespi.c 124 */;
	struct touchpad_info_protocol *cocci_id/* drivers/input/keyboard/applespi.c 1203 */;
	const struct applespi_tp_model_info *cocci_id/* drivers/input/keyboard/applespi.c 1191 */;
	const struct applespi_tp_info *cocci_id/* drivers/input/keyboard/applespi.c 1189 */;
	struct keyboard_protocol cocci_id/* drivers/input/keyboard/applespi.c 1130 */;
	struct keyboard_protocol *cocci_id/* drivers/input/keyboard/applespi.c 1124 */;
	unsigned char cocci_id/* drivers/input/keyboard/applespi.c 1107 */;
	u8 cocci_id/* drivers/input/keyboard/applespi.c 1093 */;
	unsigned int cocci_id/* drivers/input/keyboard/applespi.c 1093 */;
	char cocci_id/* drivers/input/keyboard/applespi.c 107 */[40];
	u16 cocci_id/* drivers/input/keyboard/applespi.c 1051 */;
	const struct applespi_key_translation *cocci_id/* drivers/input/keyboard/applespi.c 1050 */;
}
