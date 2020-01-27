cocci_test_suite() {
	unsigned char *cocci_id/* drivers/macintosh/windfarm_fcu_controls.c 87 */;
	struct wf_fcu_priv cocci_id/* drivers/macintosh/windfarm_fcu_controls.c 73 */;
	struct kref *cocci_id/* drivers/macintosh/windfarm_fcu_controls.c 71 */;
	struct wf_fcu_fan {
		struct list_head link;
		int id;
		s32 min,max,target;
		struct wf_fcu_priv *fcu_priv;
		struct wf_control ctrl;
	} cocci_id/* drivers/macintosh/windfarm_fcu_controls.c 63 */;
	struct i2c_driver cocci_id/* drivers/macintosh/windfarm_fcu_controls.c 583 */;
	const struct i2c_device_id cocci_id/* drivers/macintosh/windfarm_fcu_controls.c 577 */[];
	struct wf_fcu_fan cocci_id/* drivers/macintosh/windfarm_fcu_controls.c 569 */;
	struct wf_fcu_priv {
		struct kref ref;
		struct i2c_client *i2c;
		struct mutex lock;
		struct list_head fan_list;
		int rpm_shift;
	} cocci_id/* drivers/macintosh/windfarm_fcu_controls.c 55 */;
	const struct i2c_device_id *cocci_id/* drivers/macintosh/windfarm_fcu_controls.c 518 */;
	struct i2c_client *cocci_id/* drivers/macintosh/windfarm_fcu_controls.c 517 */;
	const u32 *cocci_id/* drivers/macintosh/windfarm_fcu_controls.c 436 */;
	struct device_node *cocci_id/* drivers/macintosh/windfarm_fcu_controls.c 427 */;
	const struct {
		const char *dt_name;
		const char *ct_name;
	} cocci_id/* drivers/macintosh/windfarm_fcu_controls.c 405 */[];
	struct wf_fcu_fan *cocci_id/* drivers/macintosh/windfarm_fcu_controls.c 364 */;
	int cocci_id/* drivers/macintosh/windfarm_fcu_controls.c 362 */;
	const char *cocci_id/* drivers/macintosh/windfarm_fcu_controls.c 361 */;
	struct wf_fcu_priv *cocci_id/* drivers/macintosh/windfarm_fcu_controls.c 361 */;
	void cocci_id/* drivers/macintosh/windfarm_fcu_controls.c 361 */;
	u16 cocci_id/* drivers/macintosh/windfarm_fcu_controls.c 288 */[4];
	u16 cocci_id/* drivers/macintosh/windfarm_fcu_controls.c 287 */;
	const struct mpu_data *cocci_id/* drivers/macintosh/windfarm_fcu_controls.c 286 */;
	const struct wf_control_ops cocci_id/* drivers/macintosh/windfarm_fcu_controls.c 275 */;
	s32 cocci_id/* drivers/macintosh/windfarm_fcu_controls.c 247 */;
	unsigned char cocci_id/* drivers/macintosh/windfarm_fcu_controls.c 229 */[2];
	unsigned char cocci_id/* drivers/macintosh/windfarm_fcu_controls.c 227 */;
	s32 *cocci_id/* drivers/macintosh/windfarm_fcu_controls.c 223 */;
	struct wf_control *cocci_id/* drivers/macintosh/windfarm_fcu_controls.c 223 */;
	unsigned char cocci_id/* drivers/macintosh/windfarm_fcu_controls.c 126 */[16];
	const unsigned char *cocci_id/* drivers/macintosh/windfarm_fcu_controls.c 123 */;
}
