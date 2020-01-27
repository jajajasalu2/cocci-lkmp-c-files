cocci_test_suite() {
	enum ssb_mitigation_cmd __init cocci_id/* arch/x86/kernel/cpu/bugs.c 987 */;
	const struct {
		const char *option;
		enum ssb_mitigation_cmd cmd;
	} cocci_id/* arch/x86/kernel/cpu/bugs.c 976 */[]__initconst;
	enum ssb_mitigation_cmd{SPEC_STORE_BYPASS_CMD_NONE, SPEC_STORE_BYPASS_CMD_AUTO, SPEC_STORE_BYPASS_CMD_ON, SPEC_STORE_BYPASS_CMD_PRCTL, SPEC_STORE_BYPASS_CMD_SECCOMP,} cocci_id/* arch/x86/kernel/cpu/bugs.c 961 */;
	void *__unused cocci_id/* arch/x86/kernel/cpu/bugs.c 856 */;
	void __init cocci_id/* arch/x86/kernel/cpu/bugs.c 77 */;
	char cocci_id/* arch/x86/kernel/cpu/bugs.c 716 */[20];
	enum spectre_v2_mitigation_cmd cocci_id/* arch/x86/kernel/cpu/bugs.c 715 */;
	enum spectre_v2_mitigation_cmd __init cocci_id/* arch/x86/kernel/cpu/bugs.c 713 */;
	const struct {
		const char *option;
		enum spectre_v2_mitigation_cmd cmd;
		bool secure;
	} cocci_id/* arch/x86/kernel/cpu/bugs.c 694 */[]__initconst;
	enum spectre_v2_user_cmd cocci_id/* arch/x86/kernel/cpu/bugs.c 607 */;
	void __init cocci_id/* arch/x86/kernel/cpu/bugs.c 602 */;
	u64
__ro_after_init
 cocci_id/* arch/x86/kernel/cpu/bugs.c 60 */;
	enum spectre_v2_user_cmd __init cocci_id/* arch/x86/kernel/cpu/bugs.c 570 */;
	const struct {
		const char *option;
		enum spectre_v2_user_cmd cmd;
		bool secure;
	} cocci_id/* arch/x86/kernel/cpu/bugs.c 550 */[]__initconst;
	enum spectre_v2_user_cmd{SPECTRE_V2_USER_CMD_NONE, SPECTRE_V2_USER_CMD_AUTO, SPECTRE_V2_USER_CMD_FORCE, SPECTRE_V2_USER_CMD_PRCTL, SPECTRE_V2_USER_CMD_PRCTL_IBPB, SPECTRE_V2_USER_CMD_SECCOMP, SPECTRE_V2_USER_CMD_SECCOMP_IBPB,} cocci_id/* arch/x86/kernel/cpu/bugs.c 532 */;
	enum spectre_v2_mitigation_cmd{SPECTRE_V2_CMD_NONE, SPECTRE_V2_CMD_AUTO, SPECTRE_V2_CMD_FORCE, SPECTRE_V2_CMD_RETPOLINE, SPECTRE_V2_CMD_RETPOLINE_GENERIC, SPECTRE_V2_CMD_RETPOLINE_AMD,} cocci_id/* arch/x86/kernel/cpu/bugs.c 523 */;
	const char *cocci_id/* arch/x86/kernel/cpu/bugs.c 515 */;
	enum spectre_v2_user_mitigation cocci_id/* arch/x86/kernel/cpu/bugs.c 491 */;
	enum spectre_v2_mitigation cocci_id/* arch/x86/kernel/cpu/bugs.c 488 */;
	enum spectre_v1_mitigation cocci_id/* arch/x86/kernel/cpu/bugs.c 401 */;
	void __init cocci_id/* arch/x86/kernel/cpu/bugs.c 40 */(void);
	enum spectre_v1_mitigation{SPECTRE_V1_MITIGATION_NONE, SPECTRE_V1_MITIGATION_AUTO,} cocci_id/* arch/x86/kernel/cpu/bugs.c 396 */;
	enum taa_mitigations cocci_id/* arch/x86/kernel/cpu/bugs.c 290 */;
	enum mds_mitigations cocci_id/* arch/x86/kernel/cpu/bugs.c 229 */;
	struct thread_info *cocci_id/* arch/x86/kernel/cpu/bugs.c 156 */;
	char *cocci_id/* arch/x86/kernel/cpu/bugs.c 1525 */;
	unsigned int cocci_id/* arch/x86/kernel/cpu/bugs.c 1525 */;
	struct device_attribute *cocci_id/* arch/x86/kernel/cpu/bugs.c 1524 */;
	struct device *cocci_id/* arch/x86/kernel/cpu/bugs.c 1524 */;
	ssize_t cocci_id/* arch/x86/kernel/cpu/bugs.c 1524 */;
	const char *const cocci_id/* arch/x86/kernel/cpu/bugs.c 1415 */[];
	int __init cocci_id/* arch/x86/kernel/cpu/bugs.c 1382 */;
	u64 cocci_id/* arch/x86/kernel/cpu/bugs.c 1337 */;
	struct cpuinfo_x86 *cocci_id/* arch/x86/kernel/cpu/bugs.c 1310 */;
	enum vmx_l1d_flush_state cocci_id/* arch/x86/kernel/cpu/bugs.c 1293 */;
	enum l1tf_mitigations cocci_id/* arch/x86/kernel/cpu/bugs.c 1289 */;
	bool cocci_id/* arch/x86/kernel/cpu/bugs.c 1282 */;
	struct task_struct *cocci_id/* arch/x86/kernel/cpu/bugs.c 1261 */;
	unsigned long cocci_id/* arch/x86/kernel/cpu/bugs.c 1261 */;
	int cocci_id/* arch/x86/kernel/cpu/bugs.c 1261 */;
	enum ssb_mitigation_cmd cocci_id/* arch/x86/kernel/cpu/bugs.c 1022 */;
	enum ssb_mitigation cocci_id/* arch/x86/kernel/cpu/bugs.c 1021 */;
	enum ssb_mitigation __init cocci_id/* arch/x86/kernel/cpu/bugs.c 1019 */;
	void cocci_id/* arch/x86/kernel/cpu/bugs.c 1019 */;
}
