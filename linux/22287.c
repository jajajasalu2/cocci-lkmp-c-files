cocci_test_suite() {
	const struct seq_operations cocci_id/* security/smack/smackfs.c 973 */;
	char cocci_id/* security/smack/smackfs.c 957 */;
	struct netlbl_lsm_catmap *cocci_id/* security/smack/smackfs.c 956 */;
	struct smack_known cocci_id/* security/smack/smackfs.c 955 */;
	struct smack_known *cocci_id/* security/smack/smackfs.c 954 */;
	struct list_head *cocci_id/* security/smack/smackfs.c 953 */;
	struct seq_file *cocci_id/* security/smack/smackfs.c 951 */;
	void *cocci_id/* security/smack/smackfs.c 951 */;
	int cocci_id/* security/smack/smackfs.c 951 */;
	char cocci_id/* security/smack/smackfs.c 836 */[SMK_CIPSOLEN];
	struct netlbl_lsm_secattr cocci_id/* security/smack/smackfs.c 835 */;
	const char __user *cocci_id/* security/smack/smackfs.c 831 */;
	struct inode *cocci_id/* security/smack/smackfs.c 815 */;
	struct file *cocci_id/* security/smack/smackfs.c 815 */;
	loff_t *cocci_id/* security/smack/smackfs.c 758 */;
	struct cipso_v4_doi cocci_id/* security/smack/smackfs.c 696 */;
	struct netlbl_audit cocci_id/* security/smack/smackfs.c 687 */;
	struct cipso_v4_doi *cocci_id/* security/smack/smackfs.c 686 */;
	char *cocci_id/* security/smack/smackfs.c 391 */[4];
	ssize_t cocci_id/* security/smack/smackfs.c 387 */;
	enum smk_inos{SMK_ROOT_INO=2, SMK_LOAD=3, SMK_CIPSO=4, SMK_DOI=5, SMK_DIRECT=6, SMK_AMBIENT=7, SMK_NET4ADDR=8, SMK_ONLYCAP=9, SMK_LOGGING=10, SMK_LOAD_SELF=11, SMK_ACCESSES=12, SMK_MAPPED=13, SMK_LOAD2=14, SMK_LOAD_SELF2=15, SMK_ACCESS2=16, SMK_CIPSO2=17, SMK_REVOKE_SUBJ=18, SMK_CHANGE_RULE=19, SMK_SYSLOG=20, SMK_PTRACE=21,

#ifdef CONFIG_SECURITY_SMACK_BRINGUP
 SMK_UNCONFINED=22,

#endif


#if IS_ENABLED(CONFIG_IPV6)
 SMK_NET6ADDR=23,

#endif
 SMK_RELABEL_SELF=24,} cocci_id/* security/smack/smackfs.c 34 */;
	struct smack_parsed_rule *cocci_id/* security/smack/smackfs.c 316 */;
	const char *cocci_id/* security/smack/smackfs.c 314 */;
	int __init cocci_id/* security/smack/smackfs.c 2952 */;
	void cocci_id/* security/smack/smackfs.c 2952 */;
	struct vfsmount *cocci_id/* security/smack/smackfs.c 2928 */;
	struct file_system_type cocci_id/* security/smack/smackfs.c 2922 */;
	const struct fs_context_operations cocci_id/* security/smack/smackfs.c 2908 */;
	const struct tree_descr cocci_id/* security/smack/smackfs.c 2830 */[];
	struct super_block *cocci_id/* security/smack/smackfs.c 2826 */;
	struct fs_context *cocci_id/* security/smack/smackfs.c 2826 */;
	const struct file_operations cocci_id/* security/smack/smackfs.c 2471 */;
	struct smack_rule cocci_id/* security/smack/smackfs.c 2407 */;
	struct task_smack *cocci_id/* security/smack/smackfs.c 2398 */;
	struct smack_rule *cocci_id/* security/smack/smackfs.c 2327 */;
	struct smack_parsed_rule cocci_id/* security/smack/smackfs.c 2261 */;
	struct mutex *cocci_id/* security/smack/smackfs.c 213 */;
	char cocci_id/* security/smack/smackfs.c 2124 */[32];
	struct smack_known_list_elem cocci_id/* security/smack/smackfs.c 1865 */;
	struct smack_known_list_elem *cocci_id/* security/smack/smackfs.c 1864 */;
	struct netlbl_audit *cocci_id/* security/smack/smackfs.c 182 */;
	size_t cocci_id/* security/smack/smackfs.c 1772 */;
	char __user *cocci_id/* security/smack/smackfs.c 1771 */;
	unsigned int cocci_id/* security/smack/smackfs.c 170 */;
	char cocci_id/* security/smack/smackfs.c 1618 */[80];
	unsigned int cocci_id/* security/smack/smackfs.c 1397 */[8];
	struct in6_addr cocci_id/* security/smack/smackfs.c 1389 */;
	struct smack_parsed_rule {
		struct smack_known *smk_subject;
		struct smack_known *smk_object;
		int smk_access1;
		int smk_access2;
	} cocci_id/* security/smack/smackfs.c 134 */;
	struct smk_net6addr cocci_id/* security/smack/smackfs.c 1304 */;
	struct smk_net6addr *cocci_id/* security/smack/smackfs.c 1303 */;
	__be32 cocci_id/* security/smack/smackfs.c 1138 */;
	u32 cocci_id/* security/smack/smackfs.c 1137 */;
	struct in_addr cocci_id/* security/smack/smackfs.c 1133 */;
	struct sockaddr_in cocci_id/* security/smack/smackfs.c 1126 */;
	char *cocci_id/* security/smack/smackfs.c 1039 */;
	struct smk_net4addr cocci_id/* security/smack/smackfs.c 1038 */;
	struct smk_net4addr *cocci_id/* security/smack/smackfs.c 1037 */;
}
