cocci_test_suite() {
	struct platform_device *cocci_id/* drivers/macintosh/windfarm_pm121.c 987 */;
	struct smu_sdbp_sensortree *cocci_id/* drivers/macintosh/windfarm_pm121.c 973 */;
	struct notifier_block cocci_id/* drivers/macintosh/windfarm_pm121.c 963 */;
	void *cocci_id/* drivers/macintosh/windfarm_pm121.c 941 */;
	unsigned long cocci_id/* drivers/macintosh/windfarm_pm121.c 941 */;
	struct notifier_block *cocci_id/* drivers/macintosh/windfarm_pm121.c 940 */;
	struct wf_sensor *cocci_id/* drivers/macintosh/windfarm_pm121.c 908 */;
	struct wf_sensor **cocci_id/* drivers/macintosh/windfarm_pm121.c 899 */;
	const char *cocci_id/* drivers/macintosh/windfarm_pm121.c 868 */;
	struct wf_control *cocci_id/* drivers/macintosh/windfarm_pm121.c 721 */;
	struct pm121_cpu_state *cocci_id/* drivers/macintosh/windfarm_pm121.c 718 */;
	void cocci_id/* drivers/macintosh/windfarm_pm121.c 718 */;
	struct pm121_cpu_state cocci_id/* drivers/macintosh/windfarm_pm121.c 670 */;
	struct smu_sdbp_fvt *cocci_id/* drivers/macintosh/windfarm_pm121.c 645 */;
	struct smu_sdbp_cpupiddata *cocci_id/* drivers/macintosh/windfarm_pm121.c 644 */;
	const struct smu_sdbp_header *cocci_id/* drivers/macintosh/windfarm_pm121.c 643 */;
	struct wf_cpu_pid_param cocci_id/* drivers/macintosh/windfarm_pm121.c 642 */;
	struct pm121_sys_state *cocci_id/* drivers/macintosh/windfarm_pm121.c 583 */;
	struct pm121_sys_state cocci_id/* drivers/macintosh/windfarm_pm121.c 533 */;
	struct wf_pid_param cocci_id/* drivers/macintosh/windfarm_pm121.c 510 */;
	struct pm121_sys_param *cocci_id/* drivers/macintosh/windfarm_pm121.c 509 */;
	int cocci_id/* drivers/macintosh/windfarm_pm121.c 494 */;
	unsigned int cocci_id/* drivers/macintosh/windfarm_pm121.c 478 */;
	struct pm121_correction *cocci_id/* drivers/macintosh/windfarm_pm121.c 468 */;
	struct pm121_cpu_state {
		int ticks;
		s32 setpoint;
		struct wf_cpu_pid_state pid;
	} cocci_id/* drivers/macintosh/windfarm_pm121.c 447 */;
	struct pm121_sys_state *cocci_id/* drivers/macintosh/windfarm_pm121.c 436 */[N_LOOPS];
	struct pm121_sys_state {
		int ticks;
		s32 setpoint;
		struct wf_pid_state pid;
	} cocci_id/* drivers/macintosh/windfarm_pm121.c 430 */;
	struct pm121_sys_param cocci_id/* drivers/macintosh/windfarm_pm121.c 358 */[N_LOOPS][PM121_NUM_CONFIGS];
	struct pm121_sys_param {
		int model_id;
		struct wf_sensor **sensor;
		s32 gp,itarget;
		unsigned int control_id;
	} cocci_id/* drivers/macintosh/windfarm_pm121.c 350 */;
	struct pm121_connection *cocci_id/* drivers/macintosh/windfarm_pm121.c 338 */;
	struct pm121_connection cocci_id/* drivers/macintosh/windfarm_pm121.c 320 */[];
	struct pm121_connection {
		unsigned int control_id;
		unsigned int ref_id;
		struct pm121_correction correction;
	} cocci_id/* drivers/macintosh/windfarm_pm121.c 314 */;
	struct pm121_correction cocci_id/* drivers/macintosh/windfarm_pm121.c 277 */[N_CONTROLS][PM121_NUM_CONFIGS];
	struct pm121_correction {
		int offset;
		int slope;
	} cocci_id/* drivers/macintosh/windfarm_pm121.c 272 */;
	s32 cocci_id/* drivers/macintosh/windfarm_pm121.c 270 */;
	bool cocci_id/* drivers/macintosh/windfarm_pm121.c 269 */;
	const char *cocci_id/* drivers/macintosh/windfarm_pm121.c 258 */[N_LOOPS];
	enum{LOOP_GPU, LOOP_HD, LOOP_KODIAK, LOOP_OD, N_LOOPS,} cocci_id/* drivers/macintosh/windfarm_pm121.c 249 */;
	enum{FAILURE_FAN=1 << 0, FAILURE_SENSOR=1 << 1, FAILURE_OVERTEMP=1 << 2,} cocci_id/* drivers/macintosh/windfarm_pm121.c 241 */;
	struct wf_control *cocci_id/* drivers/macintosh/windfarm_pm121.c 235 */[N_CONTROLS];
	enum{FAN_CPU, FAN_HD, FAN_OD, CPUFREQ, N_CONTROLS,} cocci_id/* drivers/macintosh/windfarm_pm121.c 228 */;
	void __exit cocci_id/* drivers/macintosh/windfarm_pm121.c 1030 */;
	int __init cocci_id/* drivers/macintosh/windfarm_pm121.c 1010 */;
	struct platform_driver cocci_id/* drivers/macintosh/windfarm_pm121.c 1000 */;
}
