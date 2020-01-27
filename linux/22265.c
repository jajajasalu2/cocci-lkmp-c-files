cocci_test_suite() {
	unsigned int cocci_id/* security/selinux/netport.c 86 */;
	u8 cocci_id/* security/selinux/netport.c 84 */;
	u16 cocci_id/* security/selinux/netport.c 84 */;
	struct sel_netport *cocci_id/* security/selinux/netport.c 84 */;
	struct sel_netport_bkt cocci_id/* security/selinux/netport.c 58 */[SEL_NETPORT_HASH_SIZE];
	struct sel_netport {
		struct netport_security_struct psec;
		struct list_head list;
		struct rcu_head rcu;
	} cocci_id/* security/selinux/netport.c 43 */;
	struct sel_netport_bkt {
		int size;
		struct list_head list;
	} cocci_id/* security/selinux/netport.c 38 */;
	int cocci_id/* security/selinux/netport.c 224 */;
	void cocci_id/* security/selinux/netport.c 207 */;
	u32 *cocci_id/* security/selinux/netport.c 184 */;
	struct sel_netport cocci_id/* security/selinux/netport.c 119 */;
}
