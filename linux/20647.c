cocci_test_suite() {
	struct perf_event_attr *cocci_id/* arch/x86/events/intel/ds.c 967 */;
	struct pebs_lbr_entry cocci_id/* arch/x86/events/intel/ds.c 956 */;
	struct pebs_xmm cocci_id/* arch/x86/events/intel/ds.c 954 */;
	struct pebs_gprs cocci_id/* arch/x86/events/intel/ds.c 952 */;
	struct pebs_meminfo cocci_id/* arch/x86/events/intel/ds.c 950 */;
	struct pebs_basic cocci_id/* arch/x86/events/intel/ds.c 947 */;
	u64 cocci_id/* arch/x86/events/intel/ds.c 946 */;
	struct perf_event_context *cocci_id/* arch/x86/events/intel/ds.c 911 */;
	struct event_constraint *cocci_id/* arch/x86/events/intel/ds.c 872 */;
	struct event_constraint cocci_id/* arch/x86/events/intel/ds.c 691 */[];
	u64 cocci_id/* arch/x86/events/intel/ds.c 61 */[];
	struct pt_regs cocci_id/* arch/x86/events/intel/ds.c 595 */;
	struct perf_event_header cocci_id/* arch/x86/events/intel/ds.c 592 */;
	struct perf_output_handle cocci_id/* arch/x86/events/intel/ds.c 591 */;
	struct bts_record *cocci_id/* arch/x86/events/intel/ds.c 590 */;
	struct bts_record {
		u64 from;
		u64 to;
		u64 flags;
	} cocci_id/* arch/x86/events/intel/ds.c 584 */;
	struct event_constraint cocci_id/* arch/x86/events/intel/ds.c 540 */;
	unsigned long cocci_id/* arch/x86/events/intel/ds.c 408 */;
	struct debug_store *cocci_id/* arch/x86/events/intel/ds.c 393 */;
	size_t cocci_id/* arch/x86/events/intel/ds.c 338 */;
	const void *cocci_id/* arch/x86/events/intel/ds.c 328 */;
	struct page *cocci_id/* arch/x86/events/intel/ds.c 322 */;
	unsigned int cocci_id/* arch/x86/events/intel/ds.c 320 */;
	union intel_x86_pebs_dse {
		u64 val;
		struct {
			unsigned int ld_dse:4;
			unsigned int ld_stlb_miss:1;
			unsigned int ld_locked:1;
			unsigned int ld_reserved:26;
		};
		struct {
			unsigned int st_l1d_hit:1;
			unsigned int st_reserved1:3;
			unsigned int st_stlb_miss:1;
			unsigned int st_locked:1;
			unsigned int st_reserved2:26;
		};
	} cocci_id/* arch/x86/events/intel/ds.c 32 */;
	gfp_t cocci_id/* arch/x86/events/intel/ds.c 318 */;
	phys_addr_t cocci_id/* arch/x86/events/intel/ds.c 288 */;
	pgprot_t cocci_id/* arch/x86/events/intel/ds.c 285 */;
	u32 cocci_id/* arch/x86/events/intel/ds.c 271 */;
	struct pebs_record_skl {
		u64 flags,ip;
		u64 ax,bx,cx,dx;
		u64 si,di,bp,sp;
		u64 r8,r9,r10,r11;
		u64 r12,r13,r14,r15;
		u64 status,dla,dse,lat;
		u64 real_ip,tsx_tuning;
		u64 tsc;
	} cocci_id/* arch/x86/events/intel/ds.c 252 */;
	union hsw_tsx_tuning {
		struct {
			u32 cycles_last_block:32,hle_abort:1,rtm_abort:1,instruction_abort:1,non_instruction_abort:1,retry:1,data_conflict:1,capacity_writes:1,capacity_reads:1;
		};
		u64 value;
	} cocci_id/* arch/x86/events/intel/ds.c 233 */;
	struct pebs_record_hsw {
		u64 flags,ip;
		u64 ax,bx,cx,dx;
		u64 si,di,bp,sp;
		u64 r8,r9,r10,r11;
		u64 r12,r13,r14,r15;
		u64 status,dla,dse,lat;
		u64 real_ip,tsx_tuning;
	} cocci_id/* arch/x86/events/intel/ds.c 223 */;
	struct pebs_record_nhm {
		u64 flags,ip;
		u64 ax,bx,cx,dx;
		u64 si,di,bp,sp;
		u64 r8,r9,r10,r11;
		u64 r12,r13,r14,r15;
		u64 status,dla,dse,lat;
	} cocci_id/* arch/x86/events/intel/ds.c 211 */;
	struct pebs_record_skl cocci_id/* arch/x86/events/intel/ds.c 2051 */;
	struct pebs_record_hsw cocci_id/* arch/x86/events/intel/ds.c 2044 */;
	struct pebs_record_nhm cocci_id/* arch/x86/events/intel/ds.c 2038 */;
	struct pebs_record_core {
		u64 flags,ip;
		u64 ax,bx,cx,dx;
		u64 si,di,bp,sp;
		u64 r8,r9,r10,r11;
		u64 r12,r13,r14,r15;
	} cocci_id/* arch/x86/events/intel/ds.c 203 */;
	struct pebs_record_core cocci_id/* arch/x86/events/intel/ds.c 2024 */;
	char *cocci_id/* arch/x86/events/intel/ds.c 2015 */;
	char cocci_id/* arch/x86/events/intel/ds.c 2014 */;
	void __init cocci_id/* arch/x86/events/intel/ds.c 1999 */;
	short cocci_id/* arch/x86/events/intel/ds.c 1943 */[INTEL_PMC_IDX_FIXED + MAX_FIXED_PEBS_EVENTS];
	struct pebs_record_core *cocci_id/* arch/x86/events/intel/ds.c 1775 */;
	struct x86_perf_regs cocci_id/* arch/x86/events/intel/ds.c 1734 */;
	struct perf_sample_data cocci_id/* arch/x86/events/intel/ds.c 1733 */;
	struct hw_perf_event *cocci_id/* arch/x86/events/intel/ds.c 1732 */;
	struct cpu_hw_events *cocci_id/* arch/x86/events/intel/ds.c 1731 */;
	void (*cocci_id/* arch/x86/events/intel/ds.c 1725 */)(struct perf_event *,
							      struct pt_regs *,
							      void *,
							      struct perf_sample_data *,
							      struct pt_regs *);
	int cocci_id/* arch/x86/events/intel/ds.c 1724 */;
	void *cocci_id/* arch/x86/events/intel/ds.c 1723 */;
	struct pt_regs *cocci_id/* arch/x86/events/intel/ds.c 1722 */;
	struct perf_event *cocci_id/* arch/x86/events/intel/ds.c 1721 */;
	void cocci_id/* arch/x86/events/intel/ds.c 1721 */;
	s64 cocci_id/* arch/x86/events/intel/ds.c 1672 */;
	union intel_x86_pebs_dse cocci_id/* arch/x86/events/intel/ds.c 167 */;
	unsigned long *cocci_id/* arch/x86/events/intel/ds.c 1635 */;
	struct pebs_lbr *cocci_id/* arch/x86/events/intel/ds.c 1597 */;
	struct pebs_xmm *cocci_id/* arch/x86/events/intel/ds.c 1590 */;
	struct x86_perf_regs *cocci_id/* arch/x86/events/intel/ds.c 1520 */;
	struct pebs_meminfo *cocci_id/* arch/x86/events/intel/ds.c 1518 */;
	struct perf_sample_data *cocci_id/* arch/x86/events/intel/ds.c 1510 */;
	struct pebs_gprs *cocci_id/* arch/x86/events/intel/ds.c 1482 */;
	struct debug_store cocci_id/* arch/x86/events/intel/ds.c 14 */;
	union perf_mem_data_src cocci_id/* arch/x86/events/intel/ds.c 139 */;
	struct pebs_record_skl *cocci_id/* arch/x86/events/intel/ds.c 1349 */;
	bool cocci_id/* arch/x86/events/intel/ds.c 1328 */;
	struct pebs_basic *cocci_id/* arch/x86/events/intel/ds.c 1316 */;
	struct pebs_record_nhm *cocci_id/* arch/x86/events/intel/ds.c 1315 */;
	union hsw_tsx_tuning cocci_id/* arch/x86/events/intel/ds.c 1296 */;
	struct insn cocci_id/* arch/x86/events/intel/ds.c 1258 */;
	void __user *cocci_id/* arch/x86/events/intel/ds.c 1248 */;
	u8 *cocci_id/* arch/x86/events/intel/ds.c 1245 */;
	struct pmu *cocci_id/* arch/x86/events/intel/ds.c 1015 */;
	__typeof__(void *) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
