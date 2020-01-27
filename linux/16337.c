cocci_test_suite() {
	unsigned int cocci_id/* drivers/staging/most/i2c/i2c.c 70 */;
	struct hdm_i2c *cocci_id/* drivers/staging/most/i2c/i2c.c 69 */;
	struct most_channel_config *cocci_id/* drivers/staging/most/i2c/i2c.c 66 */;
	struct most_interface *cocci_id/* drivers/staging/most/i2c/i2c.c 64 */;
	int cocci_id/* drivers/staging/most/i2c/i2c.c 64 */;
	void cocci_id/* drivers/staging/most/i2c/i2c.c 51 */(struct work_struct *);
	irqreturn_t cocci_id/* drivers/staging/most/i2c/i2c.c 50 */(int,
								    void *);
	struct i2c_driver cocci_id/* drivers/staging/most/i2c/i2c.c 361 */;
	const struct i2c_device_id cocci_id/* drivers/staging/most/i2c/i2c.c 354 */[];
	struct hdm_i2c {
		struct most_interface most_iface;
		struct most_channel_capability capabilities[NUM_CHANNELS];
		struct i2c_client *client;
		struct rx {
			struct delayed_work dwork;
			struct list_head list;
			bool int_disabled;
			unsigned int delay;
		} rx;
		char name[64];
	} cocci_id/* drivers/staging/most/i2c/i2c.c 35 */;
	struct mbo cocci_id/* drivers/staging/most/i2c/i2c.c 29 */;
	const struct i2c_device_id *cocci_id/* drivers/staging/most/i2c/i2c.c 288 */;
	struct i2c_client *cocci_id/* drivers/staging/most/i2c/i2c.c 288 */;
	irqreturn_t cocci_id/* drivers/staging/most/i2c/i2c.c 268 */;
	void *cocci_id/* drivers/staging/most/i2c/i2c.c 268 */;
	struct hdm_i2c cocci_id/* drivers/staging/most/i2c/i2c.c 235 */;
	struct work_struct *cocci_id/* drivers/staging/most/i2c/i2c.c 233 */;
	u16 cocci_id/* drivers/staging/most/i2c/i2c.c 196 */;
	unsigned char cocci_id/* drivers/staging/most/i2c/i2c.c 194 */[MAX_BUF_SIZE_CONTROL];
	struct mbo *cocci_id/* drivers/staging/most/i2c/i2c.c 193 */;
	void cocci_id/* drivers/staging/most/i2c/i2c.c 191 */;
	enum{CH_RX, CH_TX, NUM_CHANNELS,} cocci_id/* drivers/staging/most/i2c/i2c.c 19 */;
}
