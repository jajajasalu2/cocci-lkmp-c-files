cocci_test_suite() {
	u8 cocci_id/* drivers/macintosh/windfarm_smu_sat.c 58 */[4];
	u8 *cocci_id/* drivers/macintosh/windfarm_smu_sat.c 57 */;
	struct wf_sat *cocci_id/* drivers/macintosh/windfarm_smu_sat.c 54 */;
	unsigned int *cocci_id/* drivers/macintosh/windfarm_smu_sat.c 52 */;
	struct smu_sdbp_header *cocci_id/* drivers/macintosh/windfarm_smu_sat.c 51 */;
	unsigned int cocci_id/* drivers/macintosh/windfarm_smu_sat.c 51 */;
	int cocci_id/* drivers/macintosh/windfarm_smu_sat.c 51 */;
	struct wf_sat_sensor cocci_id/* drivers/macintosh/windfarm_smu_sat.c 49 */;
	struct wf_sat_sensor {
		struct list_head link;
		int index;
		int index2;
		int shift;
		struct wf_sat *sat;
		struct wf_sensor sens;
	} cocci_id/* drivers/macintosh/windfarm_smu_sat.c 40 */;
	struct wf_sat *cocci_id/* drivers/macintosh/windfarm_smu_sat.c 38 */[2];
	struct i2c_driver cocci_id/* drivers/macintosh/windfarm_smu_sat.c 344 */;
	const struct i2c_device_id cocci_id/* drivers/macintosh/windfarm_smu_sat.c 338 */[];
	struct wf_sat {
		struct kref ref;
		int nr;
		struct mutex mutex;
		unsigned long last_read;
		u8 cache[16];
		struct list_head sensors;
		struct i2c_client *i2c;
		struct device_node *node;
	} cocci_id/* drivers/macintosh/windfarm_smu_sat.c 27 */;
	struct wf_sat cocci_id/* drivers/macintosh/windfarm_smu_sat.c 206 */;
	int cocci_id/* drivers/macintosh/windfarm_smu_sat.c 204 */[2];
	char *cocci_id/* drivers/macintosh/windfarm_smu_sat.c 203 */;
	u8 cocci_id/* drivers/macintosh/windfarm_smu_sat.c 200 */;
	const char *cocci_id/* drivers/macintosh/windfarm_smu_sat.c 199 */;
	const u32 *cocci_id/* drivers/macintosh/windfarm_smu_sat.c 198 */;
	struct wf_sat_sensor *cocci_id/* drivers/macintosh/windfarm_smu_sat.c 197 */;
	struct device_node *cocci_id/* drivers/macintosh/windfarm_smu_sat.c 195 */;
	const struct i2c_device_id *cocci_id/* drivers/macintosh/windfarm_smu_sat.c 193 */;
	struct i2c_client *cocci_id/* drivers/macintosh/windfarm_smu_sat.c 192 */;
	const struct wf_sensor_ops cocci_id/* drivers/macintosh/windfarm_smu_sat.c 186 */;
	struct kref *cocci_id/* drivers/macintosh/windfarm_smu_sat.c 168 */;
	void cocci_id/* drivers/macintosh/windfarm_smu_sat.c 168 */;
	s32 cocci_id/* drivers/macintosh/windfarm_smu_sat.c 140 */;
	s32 *cocci_id/* drivers/macintosh/windfarm_smu_sat.c 135 */;
	struct wf_sensor *cocci_id/* drivers/macintosh/windfarm_smu_sat.c 135 */;
}
