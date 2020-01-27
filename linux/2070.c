cocci_test_suite() {
	struct ltc2983_adc *cocci_id/* drivers/iio/temperature/ltc2983.c 590 */;
	struct ltc2983_rsense *cocci_id/* drivers/iio/temperature/ltc2983.c 579 */;
	struct ltc2983_diode *cocci_id/* drivers/iio/temperature/ltc2983.c 566 */;
	struct ltc2983_thermistor *cocci_id/* drivers/iio/temperature/ltc2983.c 543 */;
	struct ltc2983_rtd *cocci_id/* drivers/iio/temperature/ltc2983.c 521 */;
	struct ltc2983_thermocouple *cocci_id/* drivers/iio/temperature/ltc2983.c 501 */;
	struct device *cocci_id/* drivers/iio/temperature/ltc2983.c 388 */;
	const bool cocci_id/* drivers/iio/temperature/ltc2983.c 382 */;
	const char *cocci_id/* drivers/iio/temperature/ltc2983.c 381 */;
	const struct device_node *cocci_id/* drivers/iio/temperature/ltc2983.c 380 */;
	const u8 cocci_id/* drivers/iio/temperature/ltc2983.c 339 */;
	const struct device *cocci_id/* drivers/iio/temperature/ltc2983.c 332 */;
	u8 cocci_id/* drivers/iio/temperature/ltc2983.c 330 */;
	u32 *cocci_id/* drivers/iio/temperature/ltc2983.c 327 */;
	struct ltc2983_custom_sensor *cocci_id/* drivers/iio/temperature/ltc2983.c 326 */;
	struct ltc2983_data *cocci_id/* drivers/iio/temperature/ltc2983.c 325 */;
	__be32 cocci_id/* drivers/iio/temperature/ltc2983.c 315 */;
	const struct ltc2983_sensor *cocci_id/* drivers/iio/temperature/ltc2983.c 311 */;
	const struct ltc2983_data *cocci_id/* drivers/iio/temperature/ltc2983.c 310 */;
	int cocci_id/* drivers/iio/temperature/ltc2983.c 310 */;
	s64 cocci_id/* drivers/iio/temperature/ltc2983.c 286 */;
	s32 cocci_id/* drivers/iio/temperature/ltc2983.c 286 */;
	u64 cocci_id/* drivers/iio/temperature/ltc2983.c 276 */;
	const u64 cocci_id/* drivers/iio/temperature/ltc2983.c 274 */;
	const u32 cocci_id/* drivers/iio/temperature/ltc2983.c 274 */;
	u32 cocci_id/* drivers/iio/temperature/ltc2983.c 274 */;
	struct ltc2983_adc {
		struct ltc2983_sensor sensor;
		bool single_ended;
	} cocci_id/* drivers/iio/temperature/ltc2983.c 263 */;
	struct ltc2983_rsense {
		struct ltc2983_sensor sensor;
		u32 r_sense_val;
	} cocci_id/* drivers/iio/temperature/ltc2983.c 258 */;
	struct ltc2983_diode {
		struct ltc2983_sensor sensor;
		u32 sensor_config;
		u32 excitation_current;
		u32 ideal_factor_value;
	} cocci_id/* drivers/iio/temperature/ltc2983.c 251 */;
	struct ltc2983_thermistor {
		struct ltc2983_sensor sensor;
		struct ltc2983_custom_sensor *custom;
		u32 sensor_config;
		u32 r_sense_chan;
		u32 excitation_current;
	} cocci_id/* drivers/iio/temperature/ltc2983.c 243 */;
	struct ltc2983_rtd {
		struct ltc2983_sensor sensor;
		struct ltc2983_custom_sensor *custom;
		u32 sensor_config;
		u32 r_sense_chan;
		u32 excitation_current;
		u32 rtd_curve;
	} cocci_id/* drivers/iio/temperature/ltc2983.c 234 */;
	struct ltc2983_thermocouple {
		struct ltc2983_sensor sensor;
		struct ltc2983_custom_sensor *custom;
		u32 sensor_config;
		u32 cold_junction_chan;
	} cocci_id/* drivers/iio/temperature/ltc2983.c 227 */;
	struct ltc2983_custom_sensor {
		u8 *table;
		size_t size;
		s8 offset;
		bool is_steinhart;
	} cocci_id/* drivers/iio/temperature/ltc2983.c 218 */;
	struct ltc2983_sensor {
		int (*fault_handler)(const struct ltc2983_data *st,
				     const u32 result);
		int (*assign_chan)(struct ltc2983_data *st,
				   const struct ltc2983_sensor *sensor);
		u32 chan;
		u32 type;
	} cocci_id/* drivers/iio/temperature/ltc2983.c 208 */;
	struct ltc2983_data {
		struct regmap *regmap;
		struct spi_device *spi;
		struct mutex lock;
		struct completion completion;
		struct iio_chan_spec *iio_chan;
		struct ltc2983_sensor **sensors;
		u32 mux_delay_config;
		u32 filter_notch_freq;
		u16 custom_table_size;
		u8 num_channels;
		u8 iio_channels;
		__be32 temp ____cacheline_aligned;
	} cocci_id/* drivers/iio/temperature/ltc2983.c 188 */;
	struct ltc2983_adc cocci_id/* drivers/iio/temperature/ltc2983.c 186 */;
	struct ltc2983_rsense cocci_id/* drivers/iio/temperature/ltc2983.c 183 */;
	struct ltc2983_diode cocci_id/* drivers/iio/temperature/ltc2983.c 180 */;
	struct ltc2983_thermistor cocci_id/* drivers/iio/temperature/ltc2983.c 177 */;
	struct ltc2983_rtd cocci_id/* drivers/iio/temperature/ltc2983.c 174 */;
	struct ltc2983_thermocouple cocci_id/* drivers/iio/temperature/ltc2983.c 171 */;
	enum{LTC2983_SENSOR_THERMOCOUPLE=1, LTC2983_SENSOR_THERMOCOUPLE_CUSTOM=9, LTC2983_SENSOR_RTD=10, LTC2983_SENSOR_RTD_CUSTOM=18, LTC2983_SENSOR_THERMISTOR=19, LTC2983_SENSOR_THERMISTOR_STEINHART=26, LTC2983_SENSOR_THERMISTOR_CUSTOM=27, LTC2983_SENSOR_DIODE=28, LTC2983_SENSOR_SENSE_RESISTOR=29, LTC2983_SENSOR_DIRECT_ADC=30,} cocci_id/* drivers/iio/temperature/ltc2983.c 157 */;
	struct spi_driver cocci_id/* drivers/iio/temperature/ltc2983.c 1545 */;
	const struct of_device_id cocci_id/* drivers/iio/temperature/ltc2983.c 1539 */[];
	const struct spi_device_id cocci_id/* drivers/iio/temperature/ltc2983.c 1533 */[];
	int __maybe_unused cocci_id/* drivers/iio/temperature/ltc2983.c 1513 */;
	struct iio_dev *cocci_id/* drivers/iio/temperature/ltc2983.c 1464 */;
	struct spi_device *cocci_id/* drivers/iio/temperature/ltc2983.c 1461 */;
	const struct iio_info cocci_id/* drivers/iio/temperature/ltc2983.c 1456 */;
	const struct regmap_config cocci_id/* drivers/iio/temperature/ltc2983.c 1447 */;
	const struct regmap_access_table cocci_id/* drivers/iio/temperature/ltc2983.c 1438 */;
	const struct regmap_range cocci_id/* drivers/iio/temperature/ltc2983.c 1425 */[];
	bool cocci_id/* drivers/iio/temperature/ltc2983.c 1356 */;
	struct ltc2983_sensor cocci_id/* drivers/iio/temperature/ltc2983.c 1283 */;
	struct iio_chan_spec cocci_id/* drivers/iio/temperature/ltc2983.c 1252 */;
	irqreturn_t cocci_id/* drivers/iio/temperature/ltc2983.c 1243 */;
	void *cocci_id/* drivers/iio/temperature/ltc2983.c 1243 */;
	unsigned int *cocci_id/* drivers/iio/temperature/ltc2983.c 1233 */;
	unsigned int cocci_id/* drivers/iio/temperature/ltc2983.c 1231 */;
	long cocci_id/* drivers/iio/temperature/ltc2983.c 1190 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/temperature/ltc2983.c 1189 */;
	unsigned long cocci_id/* drivers/iio/temperature/ltc2983.c 1142 */;
	int *cocci_id/* drivers/iio/temperature/ltc2983.c 1138 */;
	struct ltc2983_sensor *cocci_id/* drivers/iio/temperature/ltc2983.c 1111 */;
	struct device_node *cocci_id/* drivers/iio/temperature/ltc2983.c 1111 */;
}
