cocci_test_suite() {
	enum{X86_BR_NONE=0, X86_BR_USER=1 << 0, X86_BR_KERNEL=1 << 1, X86_BR_CALL=1 << 2, X86_BR_RET=1 << 3, X86_BR_SYSCALL=1 << 4, X86_BR_SYSRET=1 << 5, X86_BR_INT=1 << 6, X86_BR_IRET=1 << 7, X86_BR_JCC=1 << 8, X86_BR_JMP=1 << 9, X86_BR_IRQ=1 << 10, X86_BR_IND_CALL=1 << 11, X86_BR_ABORT=1 << 12, X86_BR_IN_TX=1 << 13, X86_BR_NO_TX=1 << 14, X86_BR_ZERO_CALL=1 << 15, X86_BR_CALL_STACK=1 << 16, X86_BR_IND_JMP=1 << 17, X86_BR_TYPE_SAVE=1 << 18,} cocci_id/* arch/x86/events/intel/lbr.c 91 */;
	void __user *cocci_id/* arch/x86/events/intel/lbr.c 887 */;
	u8 cocci_id/* arch/x86/events/intel/lbr.c 862 */[MAX_INSN_SIZE];
	void *cocci_id/* arch/x86/events/intel/lbr.c 858 */;
	struct insn cocci_id/* arch/x86/events/intel/lbr.c 857 */;
	unsigned long cocci_id/* arch/x86/events/intel/lbr.c 855 */;
	struct hw_perf_event_extra *cocci_id/* arch/x86/events/intel/lbr.c 781 */;
	s64 cocci_id/* arch/x86/events/intel/lbr.c 645 */;
	u16 cocci_id/* arch/x86/events/intel/lbr.c 615 */;
	union {
		struct {
			u32 from;
			u32 to;
		};
		u64 lbr;
	} cocci_id/* arch/x86/events/intel/lbr.c 567 */;
	struct perf_event *cocci_id/* arch/x86/events/intel/lbr.c 480 */;
	struct perf_event_context *cocci_id/* arch/x86/events/intel/lbr.c 443 */;
	unsigned cocci_id/* arch/x86/events/intel/lbr.c 344 */;
	int cocci_id/* arch/x86/events/intel/lbr.c 343 */;
	struct x86_perf_task_context *cocci_id/* arch/x86/events/intel/lbr.c 340 */;
	unsigned int cocci_id/* arch/x86/events/intel/lbr.c 322 */;
	enum{LBR_NONE, LBR_VALID,} cocci_id/* arch/x86/events/intel/lbr.c 244 */;
	const enum{LBR_EIP_FLAGS=1, LBR_TSX=2,} cocci_id/* arch/x86/events/intel/lbr.c 22 */[LBR_FORMAT_MAX_KNOWN + 1];
	u64 cocci_id/* arch/x86/events/intel/lbr.c 190 */;
	void cocci_id/* arch/x86/events/intel/lbr.c 188 */;
	struct cpu_hw_events *cocci_id/* arch/x86/events/intel/lbr.c 155 */;
	bool cocci_id/* arch/x86/events/intel/lbr.c 153 */;
	void cocci_id/* arch/x86/events/intel/lbr.c 146 */(struct cpu_hw_events *cpuc);
	void __init cocci_id/* arch/x86/events/intel/lbr.c 1280 */;
	const int cocci_id/* arch/x86/events/intel/lbr.c 1176 */[PERF_SAMPLE_BRANCH_MAX_SHIFT];
	struct perf_branch_entry *cocci_id/* arch/x86/events/intel/lbr.c 1125 */;
	struct pebs_lbr *cocci_id/* arch/x86/events/intel/lbr.c 1117 */;
	enum{LBR_FORMAT_32=0x00, LBR_FORMAT_LIP=0x01, LBR_FORMAT_EIP=0x02, LBR_FORMAT_EIP_FLAGS=0x03, LBR_FORMAT_EIP_FLAGS2=0x04, LBR_FORMAT_INFO=0x05, LBR_FORMAT_TIME=0x06, LBR_FORMAT_MAX_KNOWN=LBR_FORMAT_TIME,} cocci_id/* arch/x86/events/intel/lbr.c 11 */;
	int cocci_id/* arch/x86/events/intel/lbr.c 1022 */[X86_BR_TYPE_MAP_MAX];
}
