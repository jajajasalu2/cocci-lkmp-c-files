cocci_test_suite() {
	unsigned long cocci_id/* drivers/iio/adc/rcar-gyroadc.c 80 */;
	const unsigned long cocci_id/* drivers/iio/adc/rcar-gyroadc.c 77 */;
	struct rcar_gyroadc {
		struct device *dev;
		void __iomem *regs;
		struct clk *clk;
		struct regulator *vref[8];
		unsigned int num_channels;
		enum rcar_gyroadc_model model;
		unsigned int mode;
		unsigned int sample_width;
	} cocci_id/* drivers/iio/adc/rcar-gyroadc.c 64 */;
	struct platform_driver cocci_id/* drivers/iio/adc/rcar-gyroadc.c 604 */;
	const struct dev_pm_ops cocci_id/* drivers/iio/adc/rcar-gyroadc.c 600 */;
	enum rcar_gyroadc_model{RCAR_GYROADC_MODEL_DEFAULT, RCAR_GYROADC_MODEL_R8A7792,} cocci_id/* drivers/iio/adc/rcar-gyroadc.c 59 */;
	enum rcar_gyroadc_model cocci_id/* drivers/iio/adc/rcar-gyroadc.c 513 */;
	struct platform_device *cocci_id/* drivers/iio/adc/rcar-gyroadc.c 479 */;
	struct device *cocci_id/* drivers/iio/adc/rcar-gyroadc.c 456 */;
	int cocci_id/* drivers/iio/adc/rcar-gyroadc.c 453 */;
	unsigned int cocci_id/* drivers/iio/adc/rcar-gyroadc.c 443 */;
	struct rcar_gyroadc *cocci_id/* drivers/iio/adc/rcar-gyroadc.c 442 */;
	struct iio_dev *cocci_id/* drivers/iio/adc/rcar-gyroadc.c 440 */;
	void cocci_id/* drivers/iio/adc/rcar-gyroadc.c 440 */;
	uintptr_t cocci_id/* drivers/iio/adc/rcar-gyroadc.c 342 */;
	struct regulator *cocci_id/* drivers/iio/adc/rcar-gyroadc.c 327 */;
	struct device_node *cocci_id/* drivers/iio/adc/rcar-gyroadc.c 325 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/adc/rcar-gyroadc.c 322 */;
	const struct of_device_id *cocci_id/* drivers/iio/adc/rcar-gyroadc.c 321 */;
	void *cocci_id/* drivers/iio/adc/rcar-gyroadc.c 295 */;
	const struct of_device_id cocci_id/* drivers/iio/adc/rcar-gyroadc.c 291 */[];
	const struct iio_info cocci_id/* drivers/iio/adc/rcar-gyroadc.c 270 */;
	unsigned int *cocci_id/* drivers/iio/adc/rcar-gyroadc.c 247 */;
	int *cocci_id/* drivers/iio/adc/rcar-gyroadc.c 181 */;
	long cocci_id/* drivers/iio/adc/rcar-gyroadc.c 181 */;
	bool cocci_id/* drivers/iio/adc/rcar-gyroadc.c 162 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/adc/rcar-gyroadc.c 133 */[];
}
