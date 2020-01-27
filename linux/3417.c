cocci_test_suite() {
	void __exit cocci_id/* drivers/macintosh/windfarm_pm81.c 798 */;
	int __init cocci_id/* drivers/macintosh/windfarm_pm81.c 776 */;
	struct platform_driver cocci_id/* drivers/macintosh/windfarm_pm81.c 767 */;
	struct platform_device *cocci_id/* drivers/macintosh/windfarm_pm81.c 719 */;
	struct smu_sdbp_sensortree *cocci_id/* drivers/macintosh/windfarm_pm81.c 708 */;
	const struct smu_sdbp_header *cocci_id/* drivers/macintosh/windfarm_pm81.c 704 */;
	void cocci_id/* drivers/macintosh/windfarm_pm81.c 702 */;
	struct notifier_block cocci_id/* drivers/macintosh/windfarm_pm81.c 698 */;
	void *cocci_id/* drivers/macintosh/windfarm_pm81.c 676 */;
	unsigned long cocci_id/* drivers/macintosh/windfarm_pm81.c 676 */;
	struct notifier_block *cocci_id/* drivers/macintosh/windfarm_pm81.c 675 */;
	s64 cocci_id/* drivers/macintosh/windfarm_pm81.c 515 */;
	s32 cocci_id/* drivers/macintosh/windfarm_pm81.c 474 */;
	struct wf_smu_cpu_fans_state cocci_id/* drivers/macintosh/windfarm_pm81.c 421 */;
	struct smu_sdbp_fvt *cocci_id/* drivers/macintosh/windfarm_pm81.c 398 */;
	struct smu_sdbp_cpupiddata *cocci_id/* drivers/macintosh/windfarm_pm81.c 397 */;
	struct wf_cpu_pid_param cocci_id/* drivers/macintosh/windfarm_pm81.c 395 */;
	struct wf_smu_sys_fans_state cocci_id/* drivers/macintosh/windfarm_pm81.c 285 */;
	struct wf_pid_param cocci_id/* drivers/macintosh/windfarm_pm81.c 267 */;
	struct wf_smu_sys_fans_param *cocci_id/* drivers/macintosh/windfarm_pm81.c 266 */;
	struct wf_smu_cpu_fans_state *cocci_id/* drivers/macintosh/windfarm_pm81.c 255 */;
	struct wf_smu_cpu_fans_state {
		int ticks;
		s32 cpu_setpoint;
		s32 scale;
		s32 offset;
		struct wf_cpu_pid_state pid;
	} cocci_id/* drivers/macintosh/windfarm_pm81.c 247 */;
	struct wf_smu_sys_fans_state *cocci_id/* drivers/macintosh/windfarm_pm81.c 232 */;
	struct wf_smu_sys_fans_param cocci_id/* drivers/macintosh/windfarm_pm81.c 192 */[];
	struct wf_smu_sys_fans_state {
		int ticks;
		s32 sys_setpoint;
		s32 hd_setpoint;
		s16 offset0;
		u16 scale0;
		s16 offset1;
		u16 scale1;
		struct wf_pid_state pid;
	} cocci_id/* drivers/macintosh/windfarm_pm81.c 178 */;
	struct wf_smu_sys_fans_param {
		int model_id;
		s32 itarget;
		s32 gd,gp,gr;
		s16 offset0;
		u16 scale0;
		s16 offset1;
		u16 scale1;
	} cocci_id/* drivers/macintosh/windfarm_pm81.c 162 */;
	bool cocci_id/* drivers/macintosh/windfarm_pm81.c 151 */;
	unsigned int cocci_id/* drivers/macintosh/windfarm_pm81.c 149 */;
	int cocci_id/* drivers/macintosh/windfarm_pm81.c 141 */;
	struct wf_control *cocci_id/* drivers/macintosh/windfarm_pm81.c 138 */;
	struct wf_sensor *cocci_id/* drivers/macintosh/windfarm_pm81.c 132 */;
}
