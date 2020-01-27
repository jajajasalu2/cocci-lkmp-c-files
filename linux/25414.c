cocci_test_suite() {
	struct test *cocci_id/* tools/perf/arch/x86/tests/intel-pt-pkt-decoder-test.c 292 */;
	struct intel_pt_pkt cocci_id/* tools/perf/arch/x86/tests/intel-pt-pkt-decoder-test.c 247 */;
	unsigned long long cocci_id/* tools/perf/arch/x86/tests/intel-pt-pkt-decoder-test.c 219 */;
	enum intel_pt_pkt_ctx cocci_id/* tools/perf/arch/x86/tests/intel-pt-pkt-decoder-test.c 201 */;
	struct test_data {
		int len;
		u8 bytes[INTEL_PT_PKT_MAX_SZ];
		enum intel_pt_pkt_ctx ctx;
		struct intel_pt_pkt packet;
		enum intel_pt_pkt_ctx new_ctx;
		int ctx_unchanged;
	} cocci_id/* tools/perf/arch/x86/tests/intel-pt-pkt-decoder-test.c 20 */[];
	struct test_data *cocci_id/* tools/perf/arch/x86/tests/intel-pt-pkt-decoder-test.c 193 */;
	void cocci_id/* tools/perf/arch/x86/tests/intel-pt-pkt-decoder-test.c 193 */;
	char cocci_id/* tools/perf/arch/x86/tests/intel-pt-pkt-decoder-test.c 175 */[INTEL_PT_PKT_DESC_MAX];
	u8 *cocci_id/* tools/perf/arch/x86/tests/intel-pt-pkt-decoder-test.c 173 */;
	struct intel_pt_pkt *cocci_id/* tools/perf/arch/x86/tests/intel-pt-pkt-decoder-test.c 173 */;
	int cocci_id/* tools/perf/arch/x86/tests/intel-pt-pkt-decoder-test.c 173 */;
}
