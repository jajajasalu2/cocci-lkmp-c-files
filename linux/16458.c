cocci_test_suite() {
	struct cp2112_string_report cocci_id/* drivers/hid/hid-cp2112.c 984 */;
	struct cp2112_pstring_attribute cocci_id/* drivers/hid/hid-cp2112.c 983 */;
	struct cp2112_pstring_attribute *cocci_id/* drivers/hid/hid-cp2112.c 982 */;
	struct device_attribute *cocci_id/* drivers/hid/hid-cp2112.c 979 */;
	char *cocci_id/* drivers/hid/hid-cp2112.c 979 */;
	struct device *cocci_id/* drivers/hid/hid-cp2112.c 978 */;
	struct cp2112_read_req_report {
		u8 report;
		u8 slave_address;
		__be16 length;
	}__packed cocci_id/* drivers/hid/hid-cp2112.c 96 */;
	const char *cocci_id/* drivers/hid/hid-cp2112.c 947 */;
	struct cp2112_pstring_attribute {
		struct device_attribute attr;
		unsigned char report;
	} cocci_id/* drivers/hid/hid-cp2112.c 941 */;
	void cocci_id/* drivers/hid/hid-cp2112.c 863 */(struct hid_device *hdev);
	u8 *cocci_id/* drivers/hid/hid-cp2112.c 832 */;
	struct cp2112_usb_config_report {
		u8 report;
		__le16 vid;
		__le16 pid;
		u8 max_power;
		u8 power_mode;
		u8 release_major;
		u8 release_minor;
		u8 mask;
	}__packed cocci_id/* drivers/hid/hid-cp2112.c 83 */;
	struct cp2112_usb_config_report *cocci_id/* drivers/hid/hid-cp2112.c 828 */;
	const struct i2c_algorithm cocci_id/* drivers/hid/hid-cp2112.c 821 */;
	u32 cocci_id/* drivers/hid/hid-cp2112.c 809 */;
	struct i2c_adapter *cocci_id/* drivers/hid/hid-cp2112.c 809 */;
	__le16 *cocci_id/* drivers/hid/hid-cp2112.c 787 */;
	struct cp2112_smbus_config_report {
		u8 report;
		__be32 clock_speed;
		u8 device_address;
		u8 auto_send_read;
		__be16 write_timeout;
		__be16 read_timeout;
		u8 scl_low_timeout;
		__be16 retry_time;
	}__packed cocci_id/* drivers/hid/hid-cp2112.c 72 */;
	__le16 cocci_id/* drivers/hid/hid-cp2112.c 641 */;
	union i2c_smbus_data *cocci_id/* drivers/hid/hid-cp2112.c 636 */;
	unsigned short cocci_id/* drivers/hid/hid-cp2112.c 635 */;
	char cocci_id/* drivers/hid/hid-cp2112.c 635 */;
	enum{STATUS1_TIMEOUT_NACK=0x00, STATUS1_TIMEOUT_BUS=0x01, STATUS1_ARBITRATION_LOST=0x02, STATUS1_READ_INCOMPLETE=0x03, STATUS1_WRITE_INCOMPLETE=0x04, STATUS1_SUCCESS=0x05,} cocci_id/* drivers/hid/hid-cp2112.c 63 */;
	enum{STATUS0_IDLE=0x00, STATUS0_BUSY=0x01, STATUS0_COMPLETE=0x02, STATUS0_ERROR=0x03,} cocci_id/* drivers/hid/hid-cp2112.c 56 */;
	ssize_t cocci_id/* drivers/hid/hid-cp2112.c 523 */;
	u8 cocci_id/* drivers/hid/hid-cp2112.c 522 */[64];
	struct i2c_msg *cocci_id/* drivers/hid/hid-cp2112.c 517 */;
	struct cp2112_write_read_req_report *cocci_id/* drivers/hid/hid-cp2112.c 503 */;
	void *cocci_id/* drivers/hid/hid-cp2112.c 499 */;
	struct cp2112_write_req_report *cocci_id/* drivers/hid/hid-cp2112.c 487 */;
	struct cp2112_read_req_report *cocci_id/* drivers/hid/hid-cp2112.c 439 */;
	u16 cocci_id/* drivers/hid/hid-cp2112.c 437 */;
	struct cp2112_force_read_report cocci_id/* drivers/hid/hid-cp2112.c 406 */;
	atomic_t *cocci_id/* drivers/hid/hid-cp2112.c 357 */;
	enum{CP2112_GPIO_CONFIG=0x02, CP2112_GPIO_GET=0x03, CP2112_GPIO_SET=0x04, CP2112_GET_VERSION_INFO=0x05, CP2112_SMBUS_CONFIG=0x06, CP2112_DATA_READ_REQUEST=0x10, CP2112_DATA_WRITE_READ_REQUEST=0x11, CP2112_DATA_READ_FORCE_SEND=0x12, CP2112_DATA_READ_RESPONSE=0x13, CP2112_DATA_WRITE_REQUEST=0x14, CP2112_TRANSFER_STATUS_REQUEST=0x15, CP2112_TRANSFER_STATUS_RESPONSE=0x16, CP2112_CANCEL_TRANSFER=0x17, CP2112_LOCK_BYTE=0x20, CP2112_USB_CONFIG=0x21, CP2112_MANUFACTURER_STRING=0x22, CP2112_PRODUCT_STRING=0x23, CP2112_SERIAL_STRING=0x24,} cocci_id/* drivers/hid/hid-cp2112.c 35 */;
	size_t cocci_id/* drivers/hid/hid-cp2112.c 321 */;
	unsigned char cocci_id/* drivers/hid/hid-cp2112.c 320 */;
	unsigned int cocci_id/* drivers/hid/hid-cp2112.c 265 */;
	struct gpio_chip *cocci_id/* drivers/hid/hid-cp2112.c 178 */;
	unsigned cocci_id/* drivers/hid/hid-cp2112.c 178 */;
	struct cp2112_device {
		struct i2c_adapter adap;
		struct hid_device *hdev;
		wait_queue_head_t wait;
		u8 read_data[61];
		u8 read_length;
		u8 hwversion;
		int xfer_status;
		atomic_t read_avail;
		atomic_t xfer_avail;
		struct gpio_chip gc;
		u8 *in_out_buffer;
		struct mutex lock;
		struct gpio_desc *desc[8];
		bool gpio_poll;
		struct delayed_work gpio_poll_worker;
		unsigned long irq_mask;
		u8 gpio_prev_state;
	} cocci_id/* drivers/hid/hid-cp2112.c 153 */;
	const struct hid_device_id cocci_id/* drivers/hid/hid-cp2112.c 147 */[];
	struct hid_driver cocci_id/* drivers/hid/hid-cp2112.c 1469 */;
	const int cocci_id/* drivers/hid/hid-cp2112.c 145 */;
	struct cp2112_xfer_status_report *cocci_id/* drivers/hid/hid-cp2112.c 1413 */;
	struct hid_report *cocci_id/* drivers/hid/hid-cp2112.c 1409 */;
	struct hidraw *cocci_id/* drivers/hid/hid-cp2112.c 1316 */;
	struct cp2112_string_report {
		u8 dummy;
		u8 report;
		u8 length;
		u8 type;
		wchar_t string[30];
	}__packed cocci_id/* drivers/hid/hid-cp2112.c 130 */;
	struct cp2112_smbus_config_report cocci_id/* drivers/hid/hid-cp2112.c 1237 */;
	u8 cocci_id/* drivers/hid/hid-cp2112.c 1236 */[3];
	const struct hid_device_id *cocci_id/* drivers/hid/hid-cp2112.c 1233 */;
	struct cp2112_xfer_status_report {
		u8 report;
		u8 status0;
		u8 status1;
		__be16 retries;
		__be16 length;
	}__packed cocci_id/* drivers/hid/hid-cp2112.c 122 */;
	struct cp2112_device *cocci_id/* drivers/hid/hid-cp2112.c 1188 */;
	int __maybe_unused cocci_id/* drivers/hid/hid-cp2112.c 1188 */;
	struct irq_chip cocci_id/* drivers/hid/hid-cp2112.c 1178 */;
	struct cp2112_force_read_report {
		u8 report;
		__be16 length;
	}__packed cocci_id/* drivers/hid/hid-cp2112.c 117 */;
	struct cp2112_write_req_report {
		u8 report;
		u8 slave_address;
		u8 length;
		u8 data[61];
	}__packed cocci_id/* drivers/hid/hid-cp2112.c 110 */;
	u8 cocci_id/* drivers/hid/hid-cp2112.c 1092 */;
	struct cp2112_device cocci_id/* drivers/hid/hid-cp2112.c 1089 */;
	struct work_struct *cocci_id/* drivers/hid/hid-cp2112.c 1087 */;
	struct irq_data *cocci_id/* drivers/hid/hid-cp2112.c 1067 */;
	umode_t cocci_id/* drivers/hid/hid-cp2112.c 1058 */;
	int cocci_id/* drivers/hid/hid-cp2112.c 1048 */;
	u8 cocci_id/* drivers/hid/hid-cp2112.c 1047 */[2];
	struct attribute **cocci_id/* drivers/hid/hid-cp2112.c 1046 */;
	struct hid_device *cocci_id/* drivers/hid/hid-cp2112.c 1044 */;
	void cocci_id/* drivers/hid/hid-cp2112.c 1044 */;
	struct attribute *cocci_id/* drivers/hid/hid-cp2112.c 1025 */[];
	const struct attribute_group cocci_id/* drivers/hid/hid-cp2112.c 1024 */;
	struct cp2112_write_read_req_report {
		u8 report;
		u8 slave_address;
		__be16 length;
		u8 target_address_length;
		u8 target_address[16];
	}__packed cocci_id/* drivers/hid/hid-cp2112.c 102 */;
}