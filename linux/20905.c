cocci_test_suite() {
	struct sockaddr_un cocci_id/* arch/um/drivers/daemon_user.c 85 */;
	struct sockaddr *cocci_id/* arch/um/drivers/daemon_user.c 63 */;
	struct request_v3 cocci_id/* arch/um/drivers/daemon_user.c 52 */;
	struct sockaddr_un *cocci_id/* arch/um/drivers/daemon_user.c 49 */;
	struct daemon_data *cocci_id/* arch/um/drivers/daemon_user.c 47 */;
	int cocci_id/* arch/um/drivers/daemon_user.c 47 */;
	struct request_v3 {
		uint32_t magic;
		uint32_t version;
		enum request_type type;
		struct sockaddr_un sock;
	} cocci_id/* arch/um/drivers/daemon_user.c 25 */;
	enum request_type{REQ_NEW_CONTROL,} cocci_id/* arch/um/drivers/daemon_user.c 21 */;
	const struct net_user_info cocci_id/* arch/um/drivers/daemon_user.c 184 */;
	void cocci_id/* arch/um/drivers/daemon_user.c 160 */;
	void *cocci_id/* arch/um/drivers/daemon_user.c 154 */;
	struct {
		char zero;
		int pid;
		int usecs;
	} cocci_id/* arch/um/drivers/daemon_user.c 129 */;
	struct timeval cocci_id/* arch/um/drivers/daemon_user.c 128 */;
}
