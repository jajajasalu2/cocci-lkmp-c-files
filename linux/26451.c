cocci_test_suite() {
	const struct avc_opcode_info cocci_id/* tools/firewire/decode-fcp.c 66 */[256];
	struct avc_enum cocci_id/* tools/firewire/decode-fcp.c 60 */[];
	struct avc_opcode_info {
		const char *name;
		struct avc_field fields[8];
	} cocci_id/* tools/firewire/decode-fcp.c 55 */;
	struct avc_field {
		const char *name;
		int offset;
		int width;
		struct avc_enum *names;
	} cocci_id/* tools/firewire/decode-fcp.c 47 */;
	struct avc_enum {
		int value;
		const char *name;
	} cocci_id/* tools/firewire/decode-fcp.c 42 */;
	unsigned long long cocci_id/* tools/firewire/decode-fcp.c 178 */;
	int cocci_id/* tools/firewire/decode-fcp.c 152 */;
	char cocci_id/* tools/firewire/decode-fcp.c 151 */[32];
	const char *cocci_id/* tools/firewire/decode-fcp.c 150 */;
	const struct avc_opcode_info *cocci_id/* tools/firewire/decode-fcp.c 149 */;
	struct avc_frame *cocci_id/* tools/firewire/decode-fcp.c 147 */;
	struct link_transaction *cocci_id/* tools/firewire/decode-fcp.c 145 */;
	void cocci_id/* tools/firewire/decode-fcp.c 144 */;
	struct avc_frame {
		uint32_t operand0:8;
		uint32_t opcode:8;
		uint32_t subunit_id:3;
		uint32_t subunit_type:5;
		uint32_t ctype:4;
		uint32_t cts:4;
	} cocci_id/* tools/firewire/decode-fcp.c 135 */;
	const char *const cocci_id/* tools/firewire/decode-fcp.c 12 */[];
}
