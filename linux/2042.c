cocci_test_suite() {
	struct mma9551_mbox_response {
		u8 app_id;
		u8 coco_err;
		u8 nbytes;
		u8 req_bytes;
		u8 buf[MMA9551_MAX_MAILBOX_DATA_REGS];
	}__packed cocci_id/* drivers/iio/accel/mma9551_core.c 86 */;
	u32 cocci_id/* drivers/iio/accel/mma9551_core.c 790 */;
	struct i2c_client *cocci_id/* drivers/iio/accel/mma9551_core.c 790 */;
	int cocci_id/* drivers/iio/accel/mma9551_core.c 790 */;
	s16 cocci_id/* drivers/iio/accel/mma9551_core.c 726 */;
	u16 cocci_id/* drivers/iio/accel/mma9551_core.c 725 */;
	int *cocci_id/* drivers/iio/accel/mma9551_core.c 723 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/accel/mma9551_core.c 722 */;
	struct mma9551_mbox_request {
		u8 start_mbox;
		u8 app_id;
		u8 cmd_off;
		u8 lower_off;
		u8 nbytes;
		u8 buf[MMA9551_MAX_MAILBOX_DATA_REGS - 1];
	}__packed cocci_id/* drivers/iio/accel/mma9551_core.c 70 */;
	void cocci_id/* drivers/iio/accel/mma9551_core.c 695 */;
	bool cocci_id/* drivers/iio/accel/mma9551_core.c 638 */;
	struct mma9551_version_info cocci_id/* drivers/iio/accel/mma9551_core.c 605 */;
	u8 cocci_id/* drivers/iio/accel/mma9551_core.c 532 */;
	enum mma9551_gpio_pin cocci_id/* drivers/iio/accel/mma9551_core.c 531 */;
	__be16 cocci_id/* drivers/iio/accel/mma9551_core.c 461 */[(MMA9551_MAX_MAILBOX_DATA_REGS - 1) / 2];
	__be16 cocci_id/* drivers/iio/accel/mma9551_core.c 383 */[MMA9551_MAX_MAILBOX_DATA_REGS / 2];
	__be16 cocci_id/* drivers/iio/accel/mma9551_core.c 295 */;
	u16 *cocci_id/* drivers/iio/accel/mma9551_core.c 292 */;
	u8 *cocci_id/* drivers/iio/accel/mma9551_core.c 217 */;
	struct i2c_msg cocci_id/* drivers/iio/accel/mma9551_core.c 115 */;
	struct mma9551_mbox_response cocci_id/* drivers/iio/accel/mma9551_core.c 114 */;
	struct mma9551_mbox_request cocci_id/* drivers/iio/accel/mma9551_core.c 113 */;
	struct mma9551_version_info {
		__be32 device_id;
		u8 rom_version[2];
		u8 fw_version[2];
		u8 hw_version[2];
		u8 fw_build[2];
	} cocci_id/* drivers/iio/accel/mma9551_core.c 100 */;
}
