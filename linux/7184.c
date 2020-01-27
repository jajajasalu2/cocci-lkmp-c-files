cocci_test_suite() {
	struct adc_jack_pdata *cocci_id/* drivers/extcon/extcon-adc-jack.c 98 */;
	struct platform_device *cocci_id/* drivers/extcon/extcon-adc-jack.c 95 */;
	irqreturn_t cocci_id/* drivers/extcon/extcon-adc-jack.c 86 */;
	void *cocci_id/* drivers/extcon/extcon-adc-jack.c 86 */;
	int cocci_id/* drivers/extcon/extcon-adc-jack.c 61 */;
	struct adc_jack_cond *cocci_id/* drivers/extcon/extcon-adc-jack.c 60 */;
	struct adc_jack_data cocci_id/* drivers/extcon/extcon-adc-jack.c 58 */;
	struct adc_jack_data *cocci_id/* drivers/extcon/extcon-adc-jack.c 57 */;
	struct work_struct *cocci_id/* drivers/extcon/extcon-adc-jack.c 55 */;
	void cocci_id/* drivers/extcon/extcon-adc-jack.c 55 */;
	struct adc_jack_data {
		struct device *dev;
		struct extcon_dev *edev;
		const unsigned int **cable_names;
		struct adc_jack_cond *adc_conditions;
		int num_conditions;
		int irq;
		unsigned long handling_delay;
		struct delayed_work handler;
		struct iio_channel *chan;
		bool wakeup_source;
	} cocci_id/* drivers/extcon/extcon-adc-jack.c 39 */;
	struct platform_driver cocci_id/* drivers/extcon/extcon-adc-jack.c 198 */;
	struct device *cocci_id/* drivers/extcon/extcon-adc-jack.c 184 */;
}
