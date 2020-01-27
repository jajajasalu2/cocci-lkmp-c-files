cocci_test_suite() {
	void cocci_id/* drivers/iio/humidity/dht11.c 95 */;
	struct dht11 {
		struct device *dev;
		struct gpio_desc *gpiod;
		int irq;
		struct completion completion;
		struct mutex lock;
		s64 timestamp;
		int temperature;
		int humidity;
		int num_edges;
		struct {
			s64 ts;
			int value;
		} edges[DHT11_EDGES_PER_READ];
	} cocci_id/* drivers/iio/humidity/dht11.c 71 */;
	struct platform_driver cocci_id/* drivers/iio/humidity/dht11.c 334 */;
	struct device *cocci_id/* drivers/iio/humidity/dht11.c 295 */;
	struct platform_device *cocci_id/* drivers/iio/humidity/dht11.c 293 */;
	const struct of_device_id cocci_id/* drivers/iio/humidity/dht11.c 287 */[];
	const struct iio_chan_spec cocci_id/* drivers/iio/humidity/dht11.c 280 */[];
	const struct iio_info cocci_id/* drivers/iio/humidity/dht11.c 276 */;
	int *cocci_id/* drivers/iio/humidity/dht11.c 192 */;
	long cocci_id/* drivers/iio/humidity/dht11.c 192 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/humidity/dht11.c 191 */;
	struct iio_dev *cocci_id/* drivers/iio/humidity/dht11.c 174 */;
	irqreturn_t cocci_id/* drivers/iio/humidity/dht11.c 172 */;
	void *cocci_id/* drivers/iio/humidity/dht11.c 172 */;
	unsigned char cocci_id/* drivers/iio/humidity/dht11.c 126 */;
	char cocci_id/* drivers/iio/humidity/dht11.c 125 */[DHT11_BITS_PER_READ];
	struct dht11 *cocci_id/* drivers/iio/humidity/dht11.c 122 */;
	int cocci_id/* drivers/iio/humidity/dht11.c 122 */;
	char *cocci_id/* drivers/iio/humidity/dht11.c 108 */;
}
