cocci_test_suite() {
	unsigned int cocci_id/* drivers/input/touchscreen/mxs-lradc-ts.c 97 */;
	bool cocci_id/* drivers/input/touchscreen/mxs-lradc-ts.c 91 */;
	struct mxs_lradc_ts *cocci_id/* drivers/input/touchscreen/mxs-lradc-ts.c 91 */;
	struct state_info cocci_id/* drivers/input/touchscreen/mxs-lradc-ts.c 80 */[];
	struct state_info {
		u32 mask;
		u32 bit;
		u32 x_plate;
		u32 y_plate;
		u32 pressure;
	} cocci_id/* drivers/input/touchscreen/mxs-lradc-ts.c 72 */;
	struct platform_driver cocci_id/* drivers/input/touchscreen/mxs-lradc-ts.c 692 */;
	struct device_node *cocci_id/* drivers/input/touchscreen/mxs-lradc-ts.c 606 */;
	struct device *cocci_id/* drivers/input/touchscreen/mxs-lradc-ts.c 605 */;
	struct platform_device *cocci_id/* drivers/input/touchscreen/mxs-lradc-ts.c 603 */;
	struct input_dev *cocci_id/* drivers/input/touchscreen/mxs-lradc-ts.c 554 */;
	const u32 cocci_id/* drivers/input/touchscreen/mxs-lradc-ts.c 499 */;
	unsigned long cocci_id/* drivers/input/touchscreen/mxs-lradc-ts.c 497 */;
	irqreturn_t cocci_id/* drivers/input/touchscreen/mxs-lradc-ts.c 493 */;
	void *cocci_id/* drivers/input/touchscreen/mxs-lradc-ts.c 493 */;
	int cocci_id/* drivers/input/touchscreen/mxs-lradc-ts.c 493 */;
	struct mxs_lradc_ts {
		struct mxs_lradc *lradc;
		struct device *dev;
		void __iomem *base;
#define TOUCHSCREEN_VCHANNEL1 7
#define TOUCHSCREEN_VCHANNEL2 6
		struct input_dev *ts_input;
		enum mxs_lradc_ts_plate cur_plate;
		bool ts_valid;
		unsigned int ts_x_pos;
		unsigned int ts_y_pos;
		unsigned int ts_pressure;
		unsigned int over_sample_cnt;
		unsigned int over_sample_delay;
		unsigned int settling_delay;
		spinlock_t lock;
	} cocci_id/* drivers/input/touchscreen/mxs-lradc-ts.c 41 */;
	void cocci_id/* drivers/input/touchscreen/mxs-lradc-ts.c 401 */;
	struct mxs_lradc *cocci_id/* drivers/input/touchscreen/mxs-lradc-ts.c 354 */;
	enum mxs_lradc_ts_plate{LRADC_TOUCH=0, LRADC_SAMPLE_X, LRADC_SAMPLE_Y, LRADC_SAMPLE_PRESSURE, LRADC_SAMPLE_VALID,} cocci_id/* drivers/input/touchscreen/mxs-lradc-ts.c 33 */;
	const char *const cocci_id/* drivers/input/touchscreen/mxs-lradc-ts.c 24 */[];
	u32 cocci_id/* drivers/input/touchscreen/mxs-lradc-ts.c 227 */;
}
