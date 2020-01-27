cocci_test_suite() {
	char *cocci_id/* arch/um/os-Linux/drivers/ethertap_user.c 99 */[];
	char cocci_id/* arch/um/os-Linux/drivers/ethertap_user.c 98 */[sizeof("nnn.nnn.nnn.nnn\0")];
	char cocci_id/* arch/um/os-Linux/drivers/ethertap_user.c 97 */[sizeof("nnnnnn\0")];
	char cocci_id/* arch/um/os-Linux/drivers/ethertap_user.c 96 */[sizeof("nnnnn\0")];
	struct etap_pre_exec_data cocci_id/* arch/um/os-Linux/drivers/ethertap_user.c 94 */;
	struct etap_pre_exec_data *cocci_id/* arch/um/os-Linux/drivers/ethertap_user.c 84 */;
	struct etap_pre_exec_data {
		int control_remote;
		int control_me;
		int data_me;
	} cocci_id/* arch/um/os-Linux/drivers/ethertap_user.c 76 */;
	int *cocci_id/* arch/um/os-Linux/drivers/ethertap_user.c 73 */;
	char *cocci_id/* arch/um/os-Linux/drivers/ethertap_user.c 40 */;
	struct addr_change cocci_id/* arch/um/os-Linux/drivers/ethertap_user.c 39 */;
	int cocci_id/* arch/um/os-Linux/drivers/ethertap_user.c 36 */;
	struct addr_change {
		enum{ADD_ADDR, DEL_ADDR,} what;
		unsigned char addr[4];
		unsigned char netmask[4];
	} cocci_id/* arch/um/os-Linux/drivers/ethertap_user.c 30 */;
	const struct net_user_info cocci_id/* arch/um/os-Linux/drivers/ethertap_user.c 239 */;
	struct ethertap_data *cocci_id/* arch/um/os-Linux/drivers/ethertap_user.c 220 */;
	void *cocci_id/* arch/um/os-Linux/drivers/ethertap_user.c 218 */;
	unsigned char *cocci_id/* arch/um/os-Linux/drivers/ethertap_user.c 217 */;
	void cocci_id/* arch/um/os-Linux/drivers/ethertap_user.c 217 */;
	int cocci_id/* arch/um/os-Linux/drivers/ethertap_user.c 141 */[2];
	char **cocci_id/* arch/um/os-Linux/drivers/ethertap_user.c 103 */;
}
