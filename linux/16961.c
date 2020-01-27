cocci_test_suite() {
	u8 cocci_id/* drivers/input/touchscreen/pcap_ts.c 88 */[2];
	struct pcap_ts cocci_id/* drivers/input/touchscreen/pcap_ts.c 87 */;
	struct delayed_work *cocci_id/* drivers/input/touchscreen/pcap_ts.c 86 */;
	struct work_struct *cocci_id/* drivers/input/touchscreen/pcap_ts.c 84 */;
	u16 cocci_id/* drivers/input/touchscreen/pcap_ts.c 38 */[2];
	struct platform_driver cocci_id/* drivers/input/touchscreen/pcap_ts.c 241 */;
	const struct dev_pm_ops cocci_id/* drivers/input/touchscreen/pcap_ts.c 232 */;
	struct device *cocci_id/* drivers/input/touchscreen/pcap_ts.c 223 */;
	struct pcap_ts {
		struct pcap_chip *pcap;
		struct input_dev *input;
		struct delayed_work work;
		u16 x,y;
		u16 pressure;
		u8 read_state;
	} cocci_id/* drivers/input/touchscreen/pcap_ts.c 20 */;
	struct platform_device *cocci_id/* drivers/input/touchscreen/pcap_ts.c 135 */;
	struct pcap_ts *cocci_id/* drivers/input/touchscreen/pcap_ts.c 126 */;
	struct input_dev *cocci_id/* drivers/input/touchscreen/pcap_ts.c 124 */;
	void cocci_id/* drivers/input/touchscreen/pcap_ts.c 124 */;
	irqreturn_t cocci_id/* drivers/input/touchscreen/pcap_ts.c 103 */;
	void *cocci_id/* drivers/input/touchscreen/pcap_ts.c 103 */;
	int cocci_id/* drivers/input/touchscreen/pcap_ts.c 103 */;
}
