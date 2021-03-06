cocci_test_suite() {
	struct i2c_msg cocci_id/* drivers/media/radio/radio-wl1273.c 99 */;
	unsigned int cocci_id/* drivers/media/radio/radio-wl1273.c 91 */;
	struct device *cocci_id/* drivers/media/radio/radio-wl1273.c 876 */;
	struct wl1273_fm_platform_data *cocci_id/* drivers/media/radio/radio-wl1273.c 559 */;
	__u8 *cocci_id/* drivers/media/radio/radio-wl1273.c 496 */;
	const char *cocci_id/* drivers/media/radio/radio-wl1273.c 494 */;
	const struct firmware *cocci_id/* drivers/media/radio/radio-wl1273.c 493 */;
	struct wl1273_device {
		char *bus_type;
		u8 forbidden;
		unsigned int preemphasis;
		unsigned int spacing;
		unsigned int tx_power;
		unsigned int rx_frequency;
		unsigned int tx_frequency;
		unsigned int rangelow;
		unsigned int rangehigh;
		unsigned int band;
		bool stereo;
		unsigned int rds_on;
		wait_queue_head_t read_queue;
		struct mutex lock;
		struct completion busy;
		unsigned char *buffer;
		unsigned int buf_size;
		unsigned int rd_index;
		unsigned int wr_index;
		u16 irq_flags;
		u16 irq_received;
		struct v4l2_ctrl_handler ctrl_handler;
		struct v4l2_device v4l2dev;
		struct video_device videodev;
		struct device *dev;
		struct wl1273_core *core;
		struct file *owner;
		char *write_buf;
		unsigned int rds_users;
	} cocci_id/* drivers/media/radio/radio-wl1273.c 43 */;
	unsigned long cocci_id/* drivers/media/radio/radio-wl1273.c 398 */;
	int cocci_id/* drivers/media/radio/radio-wl1273.c 39 */;
	irqreturn_t cocci_id/* drivers/media/radio/radio-wl1273.c 218 */;
	void *cocci_id/* drivers/media/radio/radio-wl1273.c 218 */;
	struct platform_driver cocci_id/* drivers/media/radio/radio-wl1273.c 2148 */;
	struct wl1273_core **cocci_id/* drivers/media/radio/radio-wl1273.c 1999 */;
	struct platform_device *cocci_id/* drivers/media/radio/radio-wl1273.c 1997 */;
	const struct video_device cocci_id/* drivers/media/radio/radio-wl1273.c 1968 */;
	const struct v4l2_ioctl_ops cocci_id/* drivers/media/radio/radio-wl1273.c 1952 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/radio/radio-wl1273.c 1947 */;
	struct video_device *cocci_id/* drivers/media/radio/radio-wl1273.c 1943 */;
	void cocci_id/* drivers/media/radio/radio-wl1273.c 1943 */;
	struct v4l2_modulator *cocci_id/* drivers/media/radio/radio-wl1273.c 1758 */;
	const struct v4l2_modulator *cocci_id/* drivers/media/radio/radio-wl1273.c 1720 */;
	const struct v4l2_hw_freq_seek *cocci_id/* drivers/media/radio/radio-wl1273.c 1684 */;
	const struct v4l2_frequency *cocci_id/* drivers/media/radio/radio-wl1273.c 1642 */;
	struct v4l2_frequency *cocci_id/* drivers/media/radio/radio-wl1273.c 1623 */;
	const struct v4l2_tuner *cocci_id/* drivers/media/radio/radio-wl1273.c 1561 */;
	s16 cocci_id/* drivers/media/radio/radio-wl1273.c 1543 */;
	struct v4l2_tuner *cocci_id/* drivers/media/radio/radio-wl1273.c 1497 */;
	const struct v4l2_audio *cocci_id/* drivers/media/radio/radio-wl1273.c 1481 */;
	u8 *cocci_id/* drivers/media/radio/radio-wl1273.c 148 */;
	struct v4l2_audio *cocci_id/* drivers/media/radio/radio-wl1273.c 1465 */;
	struct wl1273_device cocci_id/* drivers/media/radio/radio-wl1273.c 1407 */;
	struct wl1273_device *cocci_id/* drivers/media/radio/radio-wl1273.c 1405 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/radio/radio-wl1273.c 1405 */;
	struct i2c_msg cocci_id/* drivers/media/radio/radio-wl1273.c 138 */[];
	struct v4l2_rds_data cocci_id/* drivers/media/radio/radio-wl1273.c 137 */;
	u8 cocci_id/* drivers/media/radio/radio-wl1273.c 136 */;
	struct i2c_client *cocci_id/* drivers/media/radio/radio-wl1273.c 134 */;
	unsigned int *cocci_id/* drivers/media/radio/radio-wl1273.c 1290 */;
	struct v4l2_capability *cocci_id/* drivers/media/radio/radio-wl1273.c 1274 */;
	const struct v4l2_file_operations cocci_id/* drivers/media/radio/radio-wl1273.c 1263 */;
	u16 cocci_id/* drivers/media/radio/radio-wl1273.c 1181 */;
	loff_t *cocci_id/* drivers/media/radio/radio-wl1273.c 1175 */;
	size_t cocci_id/* drivers/media/radio/radio-wl1273.c 1175 */;
	char __user *cocci_id/* drivers/media/radio/radio-wl1273.c 1174 */;
	ssize_t cocci_id/* drivers/media/radio/radio-wl1273.c 1174 */;
	struct wl1273_core *cocci_id/* drivers/media/radio/radio-wl1273.c 1111 */;
	struct file *cocci_id/* drivers/media/radio/radio-wl1273.c 1108 */;
	struct poll_table_struct *cocci_id/* drivers/media/radio/radio-wl1273.c 1085 */;
	__poll_t cocci_id/* drivers/media/radio/radio-wl1273.c 1084 */;
	const char __user *cocci_id/* drivers/media/radio/radio-wl1273.c 1028 */;
}
