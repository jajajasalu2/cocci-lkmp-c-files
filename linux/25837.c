cocci_test_suite() {
	struct test_case cocci_id/* tools/testing/selftests/networking/timestamping/rxtimestamp.c 67 */[];
	struct socket_type cocci_id/* tools/testing/selftests/networking/timestamping/rxtimestamp.c 61 */[];
	struct sof_flag cocci_id/* tools/testing/selftests/networking/timestamping/rxtimestamp.c 54 */[];
	struct sof_flag {
		int mask;
		char *name;
	} cocci_id/* tools/testing/selftests/networking/timestamping/rxtimestamp.c 49 */;
	struct test_case {
		struct options sockopt;
		struct tstamps expected;
		bool enabled;
	} cocci_id/* tools/testing/selftests/networking/timestamping/rxtimestamp.c 43 */;
	struct socket_type {
		char *friendly_name;
		int type;
		int protocol;
		bool enabled;
	} cocci_id/* tools/testing/selftests/networking/timestamping/rxtimestamp.c 36 */;
	char cocci_id/* tools/testing/selftests/networking/timestamping/rxtimestamp.c 332 */;
	char **cocci_id/* tools/testing/selftests/networking/timestamping/rxtimestamp.c 325 */;
	struct sockaddr *cocci_id/* tools/testing/selftests/networking/timestamping/rxtimestamp.c 293 */;
	struct tstamps {
		bool tstamp;
		bool tstampns;
		bool swtstamp;
		bool hwtstamp;
	} cocci_id/* tools/testing/selftests/networking/timestamping/rxtimestamp.c 29 */;
	struct sockaddr_in cocci_id/* tools/testing/selftests/networking/timestamping/rxtimestamp.c 276 */;
	struct test_case cocci_id/* tools/testing/selftests/networking/timestamping/rxtimestamp.c 272 */;
	struct socket_type cocci_id/* tools/testing/selftests/networking/timestamping/rxtimestamp.c 272 */;
	struct options cocci_id/* tools/testing/selftests/networking/timestamping/rxtimestamp.c 249 */;
	int cocci_id/* tools/testing/selftests/networking/timestamping/rxtimestamp.c 249 */;
	void cocci_id/* tools/testing/selftests/networking/timestamping/rxtimestamp.c 249 */;
	struct options {
		int so_timestamp;
		int so_timestampns;
		int so_timestamping;
	} cocci_id/* tools/testing/selftests/networking/timestamping/rxtimestamp.c 23 */;
	struct msghdr cocci_id/* tools/testing/selftests/networking/timestamping/rxtimestamp.c 180 */;
	struct cmsghdr *cocci_id/* tools/testing/selftests/networking/timestamping/rxtimestamp.c 178 */;
	struct iovec cocci_id/* tools/testing/selftests/networking/timestamping/rxtimestamp.c 177 */;
	char cocci_id/* tools/testing/selftests/networking/timestamping/rxtimestamp.c 176 */[CMSG_SIZE];
	struct scm_timestamping *cocci_id/* tools/testing/selftests/networking/timestamping/rxtimestamp.c 174 */;
	const int cocci_id/* tools/testing/selftests/networking/timestamping/rxtimestamp.c 172 */;
	bool cocci_id/* tools/testing/selftests/networking/timestamping/rxtimestamp.c 170 */;
	struct tstamps cocci_id/* tools/testing/selftests/networking/timestamping/rxtimestamp.c 170 */;
	char *cocci_id/* tools/testing/selftests/networking/timestamping/rxtimestamp.c 160 */;
	struct test_case *cocci_id/* tools/testing/selftests/networking/timestamping/rxtimestamp.c 123 */;
	struct option cocci_id/* tools/testing/selftests/networking/timestamping/rxtimestamp.c 111 */[];
}
