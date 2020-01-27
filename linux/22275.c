cocci_test_suite() {
	void cocci_id/* security/selinux/ss/services.c 94 */(struct policydb *policydb,
							     struct context *scontext,
							     struct context *tcontext,
							     u16 tclass,
							     struct av_decision *avd,
							     struct extended_perms *xperms);
	struct av_decision *cocci_id/* security/selinux/ss/services.c 935 */;
	int cocci_id/* security/selinux/ss/services.c 89 */(struct policydb *policydb,
							    struct context *context,
							    char **scontext,
							    u32 *scontext_len);
	struct selinux_ss **cocci_id/* security/selinux/ss/services.c 81 */;
	struct selinux_ss cocci_id/* security/selinux/ss/services.c 79 */;
	const char *cocci_id/* security/selinux/ss/services.c 70 */[__POLICYDB_CAPABILITY_MAX];
	unsigned int cocci_id/* security/selinux/ss/services.c 627 */;
	struct ebitmap_node *cocci_id/* security/selinux/ss/services.c 626 */;
	struct ebitmap *cocci_id/* security/selinux/ss/services.c 625 */;
	struct class_datum *cocci_id/* security/selinux/ss/services.c 624 */;
	struct avtab_node *cocci_id/* security/selinux/ss/services.c 623 */;
	struct avtab_key cocci_id/* security/selinux/ss/services.c 622 */;
	struct role_allow *cocci_id/* security/selinux/ss/services.c 621 */;
	struct constraint_node *cocci_id/* security/selinux/ss/services.c 620 */;
	struct extended_perms *cocci_id/* security/selinux/ss/services.c 618 */;
	char *cocci_id/* security/selinux/ss/services.c 466 */[32];
	struct common_datum *cocci_id/* security/selinux/ss/services.c 460 */;
	struct perm_datum *cocci_id/* security/selinux/ss/services.c 443 */;
	unsigned long cocci_id/* security/selinux/ss/services.c 3717 */;
	void **cocci_id/* security/selinux/ss/services.c 3692 */;
	size_t *cocci_id/* security/selinux/ss/services.c 3692 */;
	struct netlbl_lsm_secattr *cocci_id/* security/selinux/ss/services.c 3547 */;
	int __init cocci_id/* security/selinux/ss/services.c 3523 */;
	void cocci_id/* security/selinux/ss/services.c 3523 */;
	u32 cocci_id/* security/selinux/ss/services.c 3514 */;
	int (*cocci_id/* security/selinux/ss/services.c 3512 */)(void);
	struct audit_field *cocci_id/* security/selinux/ss/services.c 3385 */;
	struct audit_krule *cocci_id/* security/selinux/ss/services.c 3380 */;
	struct selinux_audit_rule cocci_id/* security/selinux/ss/services.c 3320 */;
	struct selinux_audit_rule **cocci_id/* security/selinux/ss/services.c 3288 */;
	struct selinux_audit_rule *cocci_id/* security/selinux/ss/services.c 3272 */;
	struct selinux_audit_rule {
		u32 au_seqno;
		struct context au_ctxt;
	} cocci_id/* security/selinux/ss/services.c 3265 */;
	struct cond_node *cocci_id/* security/selinux/ss/services.c 2933 */;
	struct cond_bool_datum *cocci_id/* security/selinux/ss/services.c 2932 */;
	char ***cocci_id/* security/selinux/ss/services.c 2796 */;
	int **cocci_id/* security/selinux/ss/services.c 2796 */;
	int *cocci_id/* security/selinux/ss/services.c 2796 */;
	struct superblock_security_struct *cocci_id/* security/selinux/ss/services.c 2755 */;
	struct super_block *cocci_id/* security/selinux/ss/services.c 2749 */;
	int cocci_id/* security/selinux/ss/services.c 273 */[CEXPR_MAXDEPTH];
	struct mls_level *cocci_id/* security/selinux/ss/services.c 271 */;
	struct role_datum *cocci_id/* security/selinux/ss/services.c 270 */;
	struct ocontext *cocci_id/* security/selinux/ss/services.c 2679 */;
	struct genfs *cocci_id/* security/selinux/ss/services.c 2678 */;
	struct sidtab *cocci_id/* security/selinux/ss/services.c 2675 */;
	struct policydb *cocci_id/* security/selinux/ss/services.c 2674 */;
	u32 *cocci_id/* security/selinux/ss/services.c 2672 */;
	u16 cocci_id/* security/selinux/ss/services.c 2671 */;
	char *cocci_id/* security/selinux/ss/services.c 2670 */;
	const char *cocci_id/* security/selinux/ss/services.c 2669 */;
	struct selinux_state *cocci_id/* security/selinux/ss/services.c 2668 */;
	int cocci_id/* security/selinux/ss/services.c 2668 */;
	struct constraint_expr *cocci_id/* security/selinux/ss/services.c 266 */;
	struct av_decision cocci_id/* security/selinux/ss/services.c 2637 */;
	u32 **cocci_id/* security/selinux/ss/services.c 2551 */;
	u64 cocci_id/* security/selinux/ss/services.c 2306 */;
	struct selinux_mapping *cocci_id/* security/selinux/ss/services.c 210 */;
	struct policy_file cocci_id/* security/selinux/ss/services.c 2095 */;
	struct convert_context_args cocci_id/* security/selinux/ss/services.c 2092 */;
	struct sidtab_convert_params cocci_id/* security/selinux/ss/services.c 2091 */;
	struct selinux_map cocci_id/* security/selinux/ss/services.c 2090 */;
	size_t cocci_id/* security/selinux/ss/services.c 2084 */;
	int cocci_id/* security/selinux/ss/services.c 2071 */(struct selinux_state *state,
							      struct policydb *newpolicydb);
	struct user_datum *cocci_id/* security/selinux/ss/services.c 1934 */;
	struct type_datum *cocci_id/* security/selinux/ss/services.c 1933 */;
	struct convert_context_args *cocci_id/* security/selinux/ss/services.c 1930 */;
	struct selinux_map *cocci_id/* security/selinux/ss/services.c 193 */;
	void *cocci_id/* security/selinux/ss/services.c 1928 */;
	struct convert_context_args {
		struct selinux_state *state;
		struct policydb *oldp;
		struct policydb *newp;
	} cocci_id/* security/selinux/ss/services.c 1914 */;
	const struct qstr *cocci_id/* security/selinux/ss/services.c 1831 */;
	struct avtab_datum *cocci_id/* security/selinux/ss/services.c 1651 */;
	struct role_trans *cocci_id/* security/selinux/ss/services.c 1649 */;
	bool cocci_id/* security/selinux/ss/services.c 1643 */;
	struct filename_trans_datum *cocci_id/* security/selinux/ss/services.c 1616 */;
	struct filename_trans cocci_id/* security/selinux/ss/services.c 1615 */;
	struct audit_buffer *cocci_id/* security/selinux/ss/services.c 1585 */;
	struct context *cocci_id/* security/selinux/ss/services.c 1577 */;
	gfp_t cocci_id/* security/selinux/ss/services.c 1535 */;
	struct context cocci_id/* security/selinux/ss/services.c 1460 */;
	char **cocci_id/* security/selinux/ss/services.c 1210 */;
	unsigned cocci_id/* security/selinux/ss/services.c 106 */;
	struct security_class_mapping *cocci_id/* security/selinux/ss/services.c 102 */;
	struct extended_perms_decision *cocci_id/* security/selinux/ss/services.c 1003 */;
	u8 cocci_id/* security/selinux/ss/services.c 1002 */;
}
