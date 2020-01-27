cocci_test_suite() {
	struct shell_cmd {
		const char *name;
		int (*func)(char *args);
	} cocci_id/* tools/bpf/bpf_dbg.c 96 */;
	struct stat cocci_id/* tools/bpf/bpf_dbg.c 946 */;
	struct pcap_filehdr *cocci_id/* tools/bpf/bpf_dbg.c 945 */;
	struct pcap_filehdr cocci_id/* tools/bpf/bpf_dbg.c 940 */;
	void *cocci_id/* tools/bpf/bpf_dbg.c 918 */;
	enum{CMD_OK, CMD_ERR, CMD_EX,} cocci_id/* tools/bpf/bpf_dbg.c 90 */;
	bool cocci_id/* tools/bpf/bpf_dbg.c 854 */;
	uint16_t cocci_id/* tools/bpf/bpf_dbg.c 840 */;
	uint8_t cocci_id/* tools/bpf/bpf_dbg.c 680 */;
	struct sock_fprog cocci_id/* tools/bpf/bpf_dbg.c 501 */;
	const struct sock_filter *cocci_id/* tools/bpf/bpf_dbg.c 480 */;
	uint32_t cocci_id/* tools/bpf/bpf_dbg.c 470 */;
	uint8_t *cocci_id/* tools/bpf/bpf_dbg.c 470 */;
	struct sock_filter *cocci_id/* tools/bpf/bpf_dbg.c 438 */;
	struct bpf_regs *cocci_id/* tools/bpf/bpf_dbg.c 438 */;
	char cocci_id/* tools/bpf/bpf_dbg.c 220 */[256];
	int cocci_id/* tools/bpf/bpf_dbg.c 219 */;
	const char *cocci_id/* tools/bpf/bpf_dbg.c 218 */;
	const struct sock_filter cocci_id/* tools/bpf/bpf_dbg.c 216 */;
	unsigned int cocci_id/* tools/bpf/bpf_dbg.c 216 */;
	void cocci_id/* tools/bpf/bpf_dbg.c 216 */;
	const uint8_t *cocci_id/* tools/bpf/bpf_dbg.c 195 */;
	size_t cocci_id/* tools/bpf/bpf_dbg.c 195 */;
	va_list cocci_id/* tools/bpf/bpf_dbg.c 176 */;
	const char *const cocci_id/* tools/bpf/bpf_dbg.c 144 */[];
	char **cocci_id/* tools/bpf/bpf_dbg.c 1388 */;
	struct bpf_regs cocci_id/* tools/bpf/bpf_dbg.c 136 */;
	char cocci_id/* tools/bpf/bpf_dbg.c 1352 */[128];
	FILE *cocci_id/* tools/bpf/bpf_dbg.c 1350 */;
	struct bpf_regs cocci_id/* tools/bpf/bpf_dbg.c 135 */[BPF_MAXINSNS + 1];
	int cocci_id/* tools/bpf/bpf_dbg.c 134 */[64];
	struct sock_filter cocci_id/* tools/bpf/bpf_dbg.c 131 */[BPF_MAXINSNS + 1];
	const struct shell_cmd cocci_id/* tools/bpf/bpf_dbg.c 1245 */[];
	struct bpf_regs {
		uint32_t A;
		uint32_t X;
		uint32_t M[BPF_MEMWORDS];
		uint32_t R;
		bool Rs;
		uint16_t Pc;
	} cocci_id/* tools/bpf/bpf_dbg.c 122 */;
	unsigned long cocci_id/* tools/bpf/bpf_dbg.c 1215 */;
	struct pcap_pkthdr *cocci_id/* tools/bpf/bpf_dbg.c 1190 */;
	struct pcap_pkthdr {
		struct pcap_timeval ts;
		uint32_t caplen;
		uint32_t len;
	} cocci_id/* tools/bpf/bpf_dbg.c 116 */;
	char *cocci_id/* tools/bpf/bpf_dbg.c 1155 */;
	struct pcap_timeval {
		int32_t tv_sec;
		int32_t tv_usec;
	} cocci_id/* tools/bpf/bpf_dbg.c 111 */;
	struct pcap_filehdr {
		uint32_t magic;
		uint16_t version_major;
		uint16_t version_minor;
		int32_t thiszone;
		uint32_t sigfigs;
		uint32_t snaplen;
		uint32_t linktype;
	} cocci_id/* tools/bpf/bpf_dbg.c 101 */;
	struct sock_filter cocci_id/* tools/bpf/bpf_dbg.c 1008 */;
	unsigned short cocci_id/* tools/bpf/bpf_dbg.c 1007 */;
	char cocci_id/* tools/bpf/bpf_dbg.c 1006 */;
}
