cocci_test_suite() {
	struct arizona_extcon_info {
		struct device *dev;
		struct arizona *arizona;
		struct mutex lock;
		struct regulator *micvdd;
		struct input_dev *input;
		u16 last_jackdet;
		int micd_mode;
		const struct arizona_micd_config *micd_modes;
		int micd_num_modes;
		const struct arizona_micd_range *micd_ranges;
		int num_micd_ranges;
		int micd_timeout;
		bool micd_reva;
		bool micd_clamp;
		struct delayed_work hpdet_work;
		struct delayed_work micd_detect_work;
		struct delayed_work micd_timeout_work;
		bool hpdet_active;
		bool hpdet_done;
		bool hpdet_retried;
		int num_hpdet_res;
		unsigned int hpdet_res[3];
		bool mic;
		bool detecting;
		int jack_flips;
		int hpdet_ip_version;
		struct extcon_dev *edev;
		struct gpio_desc *micd_pol_gpio;
	} cocci_id/* drivers/extcon/extcon-arizona.c 64 */;
	irqreturn_t cocci_id/* drivers/extcon/extcon-arizona.c 594 */;
	void *cocci_id/* drivers/extcon/extcon-arizona.c 594 */;
	bool *cocci_id/* drivers/extcon/extcon-arizona.c 525 */;
	int *cocci_id/* drivers/extcon/extcon-arizona.c 524 */;
	struct {
		int min;
		int max;
	} cocci_id/* drivers/extcon/extcon-arizona.c 394 */[];
	struct {
		unsigned int threshold;
		unsigned int factor_a;
		unsigned int factor_b;
	} cocci_id/* drivers/extcon/extcon-arizona.c 382 */[];
	struct snd_soc_component *cocci_id/* drivers/extcon/extcon-arizona.c 267 */;
	struct snd_soc_dapm_context *cocci_id/* drivers/extcon/extcon-arizona.c 266 */;
	const char *cocci_id/* drivers/extcon/extcon-arizona.c 248 */;
	struct arizona_extcon_info *cocci_id/* drivers/extcon/extcon-arizona.c 248 */;
	struct platform_driver cocci_id/* drivers/extcon/extcon-arizona.c 1768 */;
	bool cocci_id/* drivers/extcon/extcon-arizona.c 143 */;
	void cocci_id/* drivers/extcon/extcon-arizona.c 142 */;
	void cocci_id/* drivers/extcon/extcon-arizona.c 140 */(struct arizona_extcon_info *info);
	struct platform_device *cocci_id/* drivers/extcon/extcon-arizona.c 1347 */;
	const unsigned int cocci_id/* drivers/extcon/extcon-arizona.c 132 */[];
	unsigned int cocci_id/* drivers/extcon/extcon-arizona.c 1294 */;
	struct arizona_pdata *cocci_id/* drivers/extcon/extcon-arizona.c 1293 */;
	struct arizona *cocci_id/* drivers/extcon/extcon-arizona.c 1291 */;
	struct device *cocci_id/* drivers/extcon/extcon-arizona.c 1290 */;
	int cocci_id/* drivers/extcon/extcon-arizona.c 1290 */;
	u32 cocci_id/* drivers/extcon/extcon-arizona.c 1260 */;
	u32 *cocci_id/* drivers/extcon/extcon-arizona.c 1254 */;
	struct arizona_micd_config *cocci_id/* drivers/extcon/extcon-arizona.c 1251 */;
	const int cocci_id/* drivers/extcon/extcon-arizona.c 1250 */;
	const char *const cocci_id/* drivers/extcon/extcon-arizona.c 1249 */;
	const int cocci_id/* drivers/extcon/extcon-arizona.c 124 */[];
	const struct arizona_micd_range cocci_id/* drivers/extcon/extcon-arizona.c 112 */[];
	const struct arizona_micd_config cocci_id/* drivers/extcon/extcon-arizona.c 107 */[];
	struct arizona_extcon_info cocci_id/* drivers/extcon/extcon-arizona.c 1042 */;
	struct work_struct *cocci_id/* drivers/extcon/extcon-arizona.c 1039 */;
}
