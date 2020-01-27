cocci_test_suite() {
	u8 cocci_id/* drivers/media/spi/cxd2880-spi.c 84 */[BURST_WRITE_MAX + 4];
	const u8 *cocci_id/* drivers/media/spi/cxd2880-spi.c 82 */;
	struct spi_driver cocci_id/* drivers/media/spi/cxd2880-spi.c 664 */;
	const struct spi_device_id cocci_id/* drivers/media/spi/cxd2880-spi.c 658 */[];
	struct spi_transfer cocci_id/* drivers/media/spi/cxd2880-spi.c 65 */;
	struct cxd2880_dvb_spi cocci_id/* drivers/media/spi/cxd2880-spi.c 519 */;
	struct cxd2880_config cocci_id/* drivers/media/spi/cxd2880-spi.c 512 */;
	struct cxd2880_dvb_spi *cocci_id/* drivers/media/spi/cxd2880-spi.c 511 */;
	const struct of_device_id cocci_id/* drivers/media/spi/cxd2880-spi.c 500 */[];
	struct cxd2880_dvb_spi {
		struct dvb_frontend dvb_fe;
		struct dvb_adapter adapter;
		struct dvb_demux demux;
		struct dmxdev dmxdev;
		struct dmx_frontend dmx_fe;
		struct task_struct *cxd2880_ts_read_thread;
		struct spi_device *spi;
		struct mutex spi_mutex;
		int feed_count;
		int all_pid_feed_count;
		struct regulator *vcc_supply;
		u8 *ts_buf;
		struct cxd2880_pid_filter_config filter_config;
	} cocci_id/* drivers/media/spi/cxd2880-spi.c 44 */;
	struct cxd2880_pid_filter_config {
		u8 is_negative;
		struct cxd2880_pid_config pid_config[CXD2880_MAX_FILTER_SIZE];
	} cocci_id/* drivers/media/spi/cxd2880-spi.c 39 */;
	struct cxd2880_pid_filter_config cocci_id/* drivers/media/spi/cxd2880-spi.c 362 */;
	struct cxd2880_pid_config {
		u8 is_enable;
		u16 pid;
	} cocci_id/* drivers/media/spi/cxd2880-spi.c 34 */;
	struct dvb_demux *cocci_id/* drivers/media/spi/cxd2880-spi.c 326 */;
	struct dvb_demux_feed *cocci_id/* drivers/media/spi/cxd2880-spi.c 322 */;
	ktime_t cocci_id/* drivers/media/spi/cxd2880-spi.c 270 */;
	struct cxd2880_ts_buf_info cocci_id/* drivers/media/spi/cxd2880-spi.c 269 */;
	void *cocci_id/* drivers/media/spi/cxd2880-spi.c 266 */;
	struct cxd2880_ts_buf_info {
		u8 read_ready:1;
		u8 almost_full:1;
		u8 almost_empty:1;
		u8 overflow:1;
		u8 underflow:1;
		u16 pkt_num;
	} cocci_id/* drivers/media/spi/cxd2880-spi.c 25 */;
	bool cocci_id/* drivers/media/spi/cxd2880-spi.c 236 */;
	u16 cocci_id/* drivers/media/spi/cxd2880-spi.c 200 */;
	u8 cocci_id/* drivers/media/spi/cxd2880-spi.c 198 */[65];
	struct cxd2880_pid_filter_config *cocci_id/* drivers/media/spi/cxd2880-spi.c 196 */;
	struct spi_device *cocci_id/* drivers/media/spi/cxd2880-spi.c 195 */;
	int cocci_id/* drivers/media/spi/cxd2880-spi.c 195 */;
	u8 cocci_id/* drivers/media/spi/cxd2880-spi.c 184 */;
	u8 cocci_id/* drivers/media/spi/cxd2880-spi.c 159 */[2];
	struct cxd2880_ts_buf_info *cocci_id/* drivers/media/spi/cxd2880-spi.c 156 */;
	struct spi_transfer cocci_id/* drivers/media/spi/cxd2880-spi.c 124 */[2];
	struct spi_message cocci_id/* drivers/media/spi/cxd2880-spi.c 123 */;
	u8 cocci_id/* drivers/media/spi/cxd2880-spi.c 122 */[3];
	u32 cocci_id/* drivers/media/spi/cxd2880-spi.c 119 */;
	u8 *cocci_id/* drivers/media/spi/cxd2880-spi.c 118 */;
}
