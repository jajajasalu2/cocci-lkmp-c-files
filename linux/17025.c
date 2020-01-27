cocci_test_suite() {
	bool cocci_id/* drivers/input/joystick/psxpad-spi.c 94 */;
	void cocci_id/* drivers/input/joystick/psxpad-spi.c 93 */;
	struct spi_transfer cocci_id/* drivers/input/joystick/psxpad-spi.c 74 */;
	const u8 cocci_id/* drivers/input/joystick/psxpad-spi.c 72 */;
	struct psxpad *cocci_id/* drivers/input/joystick/psxpad-spi.c 72 */;
	int cocci_id/* drivers/input/joystick/psxpad-spi.c 72 */;
	struct psxpad {
		struct spi_device *spi;
		struct input_dev *idev;
		char phys[0x20];
		bool motor1enable;
		bool motor2enable;
		u8 motor1level;
		u8 motor2level;
		u8 sendbuf[0x20]____cacheline_aligned;
		u8 response[sizeof(PSX_CMD_POLL)]____cacheline_aligned;
	} cocci_id/* drivers/input/joystick/psxpad-spi.c 60 */;
	const u8 cocci_id/* drivers/input/joystick/psxpad-spi.c 56 */[];
	struct spi_driver cocci_id/* drivers/input/joystick/psxpad-spi.c 392 */;
	const struct spi_device_id cocci_id/* drivers/input/joystick/psxpad-spi.c 386 */[];
	struct device *cocci_id/* drivers/input/joystick/psxpad-spi.c 374 */;
	int __maybe_unused cocci_id/* drivers/input/joystick/psxpad-spi.c 374 */;
	struct psxpad cocci_id/* drivers/input/joystick/psxpad-spi.c 288 */;
	struct spi_device *cocci_id/* drivers/input/joystick/psxpad-spi.c 282 */;
	struct ff_effect *cocci_id/* drivers/input/joystick/psxpad-spi.c 140 */;
	void *cocci_id/* drivers/input/joystick/psxpad-spi.c 140 */;
	struct input_dev *cocci_id/* drivers/input/joystick/psxpad-spi.c 139 */;
	u8 cocci_id/* drivers/input/joystick/psxpad-spi.c 133 */;
}
