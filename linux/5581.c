cocci_test_suite() {
	struct i2c_msg cocci_id/* drivers/rtc/rtc-pcf8583.c 52 */[2];
	unsigned char cocci_id/* drivers/rtc/rtc-pcf8583.c 51 */[8];
	struct rtc_time *cocci_id/* drivers/rtc/rtc-pcf8583.c 49 */;
	struct i2c_driver cocci_id/* drivers/rtc/rtc-pcf8583.c 41 */;
	const struct i2c_device_id cocci_id/* drivers/rtc/rtc-pcf8583.c 300 */[];
	struct pcf8583 cocci_id/* drivers/rtc/rtc-pcf8583.c 286 */;
	struct pcf8583 *cocci_id/* drivers/rtc/rtc-pcf8583.c 281 */;
	const struct i2c_device_id *cocci_id/* drivers/rtc/rtc-pcf8583.c 279 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-pcf8583.c 273 */;
	struct pcf8583 {
		struct rtc_device *rtc;
		unsigned char ctrl;
	} cocci_id/* drivers/rtc/rtc-pcf8583.c 27 */;
	unsigned int cocci_id/* drivers/rtc/rtc-pcf8583.c 236 */;
	unsigned char cocci_id/* drivers/rtc/rtc-pcf8583.c 225 */[2];
	struct rtc_mem {
		unsigned int loc;
		unsigned int nr;
		unsigned char *data;
	} cocci_id/* drivers/rtc/rtc-pcf8583.c 21 */;
	struct rtc_mem cocci_id/* drivers/rtc/rtc-pcf8583.c 176 */;
	unsigned char cocci_id/* drivers/rtc/rtc-pcf8583.c 175 */;
	struct device *cocci_id/* drivers/rtc/rtc-pcf8583.c 172 */;
	unsigned char cocci_id/* drivers/rtc/rtc-pcf8583.c 159 */[9];
	unsigned char cocci_id/* drivers/rtc/rtc-pcf8583.c 134 */[1];
	struct rtc_mem *cocci_id/* drivers/rtc/rtc-pcf8583.c 132 */;
	char *cocci_id/* drivers/rtc/rtc-pcf8583.c 129 */;
	struct i2c_client *cocci_id/* drivers/rtc/rtc-pcf8583.c 115 */;
	unsigned char *cocci_id/* drivers/rtc/rtc-pcf8583.c 115 */;
	int cocci_id/* drivers/rtc/rtc-pcf8583.c 115 */;
}
