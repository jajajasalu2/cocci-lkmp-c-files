cocci_test_suite() {
	struct utsname cocci_id/* tools/hv/hv_kvp_daemon.c 89 */;
	char cocci_id/* tools/hv/hv_kvp_daemon.c 88 */[HV_KVP_EXCHANGE_MAX_VALUE_SIZE];
	struct sockaddr_in6 *cocci_id/* tools/hv/hv_kvp_daemon.c 818 */;
	char cocci_id/* tools/hv/hv_kvp_daemon.c 813 */[5];
	struct hv_kvp_ipaddr_value *cocci_id/* tools/hv/hv_kvp_daemon.c 812 */;
	struct ifaddrs *cocci_id/* tools/hv/hv_kvp_daemon.c 806 */;
	void *cocci_id/* tools/hv/hv_kvp_daemon.c 804 */;
	const char *cocci_id/* tools/hv/hv_kvp_daemon.c 772 */;
	char cocci_id/* tools/hv/hv_kvp_daemon.c 771 */[50];
	struct sockaddr_in *cocci_id/* tools/hv/hv_kvp_daemon.c 768 */;
	int *cocci_id/* tools/hv/hv_kvp_daemon.c 766 */;
	unsigned int *cocci_id/* tools/hv/hv_kvp_daemon.c 755 */;
	unsigned int cocci_id/* tools/hv/hv_kvp_daemon.c 755 */;
	enum{IPADDR=0, NETMASK, GATEWAY, DNS,} cocci_id/* tools/hv/hv_kvp_daemon.c 72 */;
	char cocci_id/* tools/hv/hv_kvp_daemon.c 673 */[128];
	char cocci_id/* tools/hv/hv_kvp_daemon.c 672 */[512];
	enum key_index{FullyQualifiedDomainName=0, IntegrationServicesVersion, NetworkAddressIPv4, NetworkAddressIPv6, OSBuildNumber, OSName, OSMajorVersion, OSMinorVersion, OSVersion, ProcessorArchitecture,} cocci_id/* tools/hv/hv_kvp_daemon.c 58 */;
	char cocci_id/* tools/hv/hv_kvp_daemon.c 563 */[PATH_MAX];
	char cocci_id/* tools/hv/hv_kvp_daemon.c 562 */[256];
	FILE *cocci_id/* tools/hv/hv_kvp_daemon.c 559 */;
	struct dirent *cocci_id/* tools/hv/hv_kvp_daemon.c 558 */;
	DIR *cocci_id/* tools/hv/hv_kvp_daemon.c 557 */;
	struct kvp_record *cocci_id/* tools/hv/hv_kvp_daemon.c 369 */;
	const __u8 *cocci_id/* tools/hv/hv_kvp_daemon.c 364 */;
	__u8 *cocci_id/* tools/hv/hv_kvp_daemon.c 364 */;
	struct kvp_record cocci_id/* tools/hv/hv_kvp_daemon.c 237 */;
	size_t cocci_id/* tools/hv/hv_kvp_daemon.c 178 */;
	struct hv_kvp_msg cocci_id/* tools/hv/hv_kvp_daemon.c 1430 */;
	struct option cocci_id/* tools/hv/hv_kvp_daemon.c 1376 */[];
	struct hv_kvp_msg cocci_id/* tools/hv/hv_kvp_daemon.c 1367 */[1];
	struct pollfd cocci_id/* tools/hv/hv_kvp_daemon.c 1365 */;
	char *cocci_id/* tools/hv/hv_kvp_daemon.c 1361 */[];
	struct addrinfo cocci_id/* tools/hv/hv_kvp_daemon.c 1334 */;
	struct flock cocci_id/* tools/hv/hv_kvp_daemon.c 123 */;
	void cocci_id/* tools/hv/hv_kvp_daemon.c 121 */;
	struct kvp_file_state cocci_id/* tools/hv/hv_kvp_daemon.c 119 */[KVP_POOL_COUNT];
	struct kvp_file_state {
		int fd;
		int num_blocks;
		struct kvp_record *records;
		int num_records;
		char fname[MAX_FILE_NAME];
	} cocci_id/* tools/hv/hv_kvp_daemon.c 111 */;
	char cocci_id/* tools/hv/hv_kvp_daemon.c 1103 */[13];
	char cocci_id/* tools/hv/hv_kvp_daemon.c 1099 */[INET6_ADDRSTRLEN];
	struct kvp_record {
		char key[HV_KVP_EXCHANGE_MAX_KEY_SIZE];
		char value[HV_KVP_EXCHANGE_MAX_VALUE_SIZE];
	} cocci_id/* tools/hv/hv_kvp_daemon.c 106 */;
	struct in_addr cocci_id/* tools/hv/hv_kvp_daemon.c 1038 */;
	struct in6_addr cocci_id/* tools/hv/hv_kvp_daemon.c 1010 */;
	char *cocci_id/* tools/hv/hv_kvp_daemon.c 1007 */;
	int cocci_id/* tools/hv/hv_kvp_daemon.c 1007 */;
}
