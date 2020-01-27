cocci_test_suite() {
	unsigned long long cocci_id/* tools/power/cpupower/utils/helpers/amd.c 93 */;
	union msr_pstate cocci_id/* tools/power/cpupower/utils/helpers/amd.c 92 */;
	unsigned long *cocci_id/* tools/power/cpupower/utils/helpers/amd.c 89 */;
	unsigned int cocci_id/* tools/power/cpupower/utils/helpers/amd.c 88 */;
	union msr_pstate {
		struct {
			unsigned fid:6;
			unsigned did:3;
			unsigned vid:7;
			unsigned res1:6;
			unsigned nbdid:1;
			unsigned res2:2;
			unsigned nbvid:7;
			unsigned iddval:8;
			unsigned idddiv:2;
			unsigned res3:21;
			unsigned en:1;
		} bits;
		struct {
			unsigned fid:8;
			unsigned did:6;
			unsigned vid:8;
			unsigned iddval:8;
			unsigned idddiv:2;
			unsigned res1:31;
			unsigned en:1;
		} fam17h_bits;
		unsigned long long val;
	} cocci_id/* tools/power/cpupower/utils/helpers/amd.c 16 */;
	uint8_t cocci_id/* tools/power/cpupower/utils/helpers/amd.c 137 */;
	struct pci_dev *cocci_id/* tools/power/cpupower/utils/helpers/amd.c 136 */;
	struct pci_access *cocci_id/* tools/power/cpupower/utils/helpers/amd.c 135 */;
	int *cocci_id/* tools/power/cpupower/utils/helpers/amd.c 133 */;
	int cocci_id/* tools/power/cpupower/utils/helpers/amd.c 133 */;
}
