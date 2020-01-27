cocci_test_suite() {
	struct mux *cocci_id/* drivers/iio/multiplexer/iio-mux.c 80 */;
	void cocci_id/* drivers/iio/multiplexer/iio-mux.c 80 */;
	struct mux_ext_info_cache *cocci_id/* drivers/iio/multiplexer/iio-mux.c 57 */;
	const char *cocci_id/* drivers/iio/multiplexer/iio-mux.c 56 */;
	struct platform_driver cocci_id/* drivers/iio/multiplexer/iio-mux.c 451 */;
	const struct of_device_id cocci_id/* drivers/iio/multiplexer/iio-mux.c 445 */[];
	const struct iio_chan_spec *cocci_id/* drivers/iio/multiplexer/iio-mux.c 41 */;
	struct mux_child *cocci_id/* drivers/iio/multiplexer/iio-mux.c 40 */;
	int cocci_id/* drivers/iio/multiplexer/iio-mux.c 38 */;
	struct property *cocci_id/* drivers/iio/multiplexer/iio-mux.c 344 */;
	struct iio_channel *cocci_id/* drivers/iio/multiplexer/iio-mux.c 342 */;
	struct iio_dev *cocci_id/* drivers/iio/multiplexer/iio-mux.c 341 */;
	struct device_node *cocci_id/* drivers/iio/multiplexer/iio-mux.c 340 */;
	struct platform_device *cocci_id/* drivers/iio/multiplexer/iio-mux.c 337 */;
	struct mux {
		int cached_state;
		struct mux_control *control;
		struct iio_channel *parent;
		struct iio_dev *indio_dev;
		struct iio_chan_spec *chan;
		struct iio_chan_spec_ext_info *ext_info;
		struct mux_child *child;
	} cocci_id/* drivers/iio/multiplexer/iio-mux.c 28 */;
	char *cocci_id/* drivers/iio/multiplexer/iio-mux.c 244 */;
	struct iio_chan_spec *cocci_id/* drivers/iio/multiplexer/iio-mux.c 242 */;
	struct mux_child {
		struct mux_ext_info_cache *ext_info_cache;
	} cocci_id/* drivers/iio/multiplexer/iio-mux.c 24 */;
	u32 cocci_id/* drivers/iio/multiplexer/iio-mux.c 239 */;
	struct device *cocci_id/* drivers/iio/multiplexer/iio-mux.c 238 */;
	size_t cocci_id/* drivers/iio/multiplexer/iio-mux.c 197 */;
	struct mux_ext_info_cache {
		char *data;
		ssize_t size;
	} cocci_id/* drivers/iio/multiplexer/iio-mux.c 19 */;
	uintptr_t cocci_id/* drivers/iio/multiplexer/iio-mux.c 175 */;
	ssize_t cocci_id/* drivers/iio/multiplexer/iio-mux.c 175 */;
	const struct iio_info cocci_id/* drivers/iio/multiplexer/iio-mux.c 169 */;
	long cocci_id/* drivers/iio/multiplexer/iio-mux.c 118 */;
	const int **cocci_id/* drivers/iio/multiplexer/iio-mux.c 117 */;
	int *cocci_id/* drivers/iio/multiplexer/iio-mux.c 117 */;
}
