cocci_test_suite() {
	const char *cocci_id/* drivers/media/usb/rainshadow-cec/rainshadow-cec.c 68 */;
	struct cec_msg cocci_id/* drivers/media/usb/rainshadow-cec/rainshadow-cec.c 67 */;
	struct rain {
		struct device *dev;
		struct serio *serio;
		struct cec_adapter *adap;
		struct completion cmd_done;
		struct work_struct work;
		char buf[DATA_SIZE];
		unsigned int buf_rd_idx;
		unsigned int buf_wr_idx;
		unsigned int buf_len;
		spinlock_t buf_lock;
		char cmd[DATA_SIZE];
		unsigned int cmd_idx;
		bool cmd_started;
		char cmd_reply[DATA_SIZE];
		struct mutex write_lock;
	} cocci_id/* drivers/media/usb/rainshadow-cec/rainshadow-cec.c 40 */;
	struct serio_driver cocci_id/* drivers/media/usb/rainshadow-cec/rainshadow-cec.c 369 */;
	const struct serio_device_id cocci_id/* drivers/media/usb/rainshadow-cec/rainshadow-cec.c 357 */[];
	u16 cocci_id/* drivers/media/usb/rainshadow-cec/rainshadow-cec.c 312 */;
	struct cec_log_addrs cocci_id/* drivers/media/usb/rainshadow-cec/rainshadow-cec.c 311 */;
	struct serio_driver *cocci_id/* drivers/media/usb/rainshadow-cec/rainshadow-cec.c 306 */;
	struct serio *cocci_id/* drivers/media/usb/rainshadow-cec/rainshadow-cec.c 306 */;
	const struct cec_adap_ops cocci_id/* drivers/media/usb/rainshadow-cec/rainshadow-cec.c 300 */;
	char cocci_id/* drivers/media/usb/rainshadow-cec/rainshadow-cec.c 285 */[3];
	unsigned int cocci_id/* drivers/media/usb/rainshadow-cec/rainshadow-cec.c 279 */;
	char cocci_id/* drivers/media/usb/rainshadow-cec/rainshadow-cec.c 278 */[2 * CEC_MAX_MSG_SIZE + 16];
	u32 cocci_id/* drivers/media/usb/rainshadow-cec/rainshadow-cec.c 275 */;
	struct cec_msg *cocci_id/* drivers/media/usb/rainshadow-cec/rainshadow-cec.c 275 */;
	u8 cocci_id/* drivers/media/usb/rainshadow-cec/rainshadow-cec.c 266 */[16];
	struct rain *cocci_id/* drivers/media/usb/rainshadow-cec/rainshadow-cec.c 265 */;
	u8 cocci_id/* drivers/media/usb/rainshadow-cec/rainshadow-cec.c 263 */;
	bool cocci_id/* drivers/media/usb/rainshadow-cec/rainshadow-cec.c 258 */;
	struct cec_adapter *cocci_id/* drivers/media/usb/rainshadow-cec/rainshadow-cec.c 258 */;
	int cocci_id/* drivers/media/usb/rainshadow-cec/rainshadow-cec.c 258 */;
	u16 *cocci_id/* drivers/media/usb/rainshadow-cec/rainshadow-cec.c 240 */;
	struct cec_log_addrs *cocci_id/* drivers/media/usb/rainshadow-cec/rainshadow-cec.c 240 */;
	void cocci_id/* drivers/media/usb/rainshadow-cec/rainshadow-cec.c 187 */;
	irqreturn_t cocci_id/* drivers/media/usb/rainshadow-cec/rainshadow-cec.c 169 */;
	unsigned char cocci_id/* drivers/media/usb/rainshadow-cec/rainshadow-cec.c 169 */;
	char cocci_id/* drivers/media/usb/rainshadow-cec/rainshadow-cec.c 114 */;
	unsigned long cocci_id/* drivers/media/usb/rainshadow-cec/rainshadow-cec.c 113 */;
	struct rain cocci_id/* drivers/media/usb/rainshadow-cec/rainshadow-cec.c 110 */;
	struct work_struct *cocci_id/* drivers/media/usb/rainshadow-cec/rainshadow-cec.c 107 */;
}
