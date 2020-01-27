cocci_test_suite() {
	unsigned long cocci_id/* security/selinux/avc.c 956 */;
	spinlock_t *cocci_id/* security/selinux/avc.c 955 */;
	struct hlist_head *cocci_id/* security/selinux/avc.c 953 */;
	struct selinux_avc **cocci_id/* security/selinux/avc.c 93 */;
	struct selinux_avc cocci_id/* security/selinux/avc.c 91 */;
	struct selinux_avc {
		unsigned int avc_cache_threshold;
		struct avc_cache avc_cache;
	} cocci_id/* security/selinux/avc.c 86 */;
	int cocci_id/* security/selinux/avc.c 813 */;
	struct avc_callback_node *cocci_id/* security/selinux/avc.c 812 */;
	int (*cocci_id/* security/selinux/avc.c 810 */)(u32 event);
	u32 cocci_id/* security/selinux/avc.c 810 */;
	int __init cocci_id/* security/selinux/avc.c 810 */;
	struct selinux_audit_data cocci_id/* security/selinux/avc.c 765 */;
	struct common_audit_data cocci_id/* security/selinux/avc.c 764 */;
	struct avc_callback_node {
		int (*callback)(u32 event);
		u32 events;
		struct avc_callback_node *next;
	} cocci_id/* security/selinux/avc.c 76 */;
	char *cocci_id/* security/selinux/avc.c 708 */;
	struct selinux_audit_data *cocci_id/* security/selinux/avc.c 707 */;
	struct common_audit_data *cocci_id/* security/selinux/avc.c 706 */;
	struct audit_buffer *cocci_id/* security/selinux/avc.c 704 */;
	void *cocci_id/* security/selinux/avc.c 704 */;
	void cocci_id/* security/selinux/avc.c 704 */;
	struct avc_cache {
		struct hlist_head slots[AVC_CACHE_SLOTS];
		spinlock_t slots_lock[AVC_CACHE_SLOTS];
		atomic_t lru_hint;
		atomic_t active_nodes;
		u32 latest_notif;
	} cocci_id/* security/selinux/avc.c 68 */;
	const char **cocci_id/* security/selinux/avc.c 668 */;
	struct avc_xperms_node {
		struct extended_perms xp;
		struct list_head xpd_head;
	} cocci_id/* security/selinux/avc.c 63 */;
	struct avc_xperms_decision_node {
		struct extended_perms_decision xpd;
		struct list_head xpd_list;
	} cocci_id/* security/selinux/avc.c 58 */;
	struct avc_node {
		struct avc_entry ae;
		struct hlist_node list;
		struct rcu_head rhead;
	} cocci_id/* security/selinux/avc.c 52 */;
	struct selinux_avc *cocci_id/* security/selinux/avc.c 496 */;
	struct avc_entry {
		u32 ssid;
		u32 tsid;
		u16 tclass;
		struct av_decision avd;
		struct avc_xperms_node *xp_node;
	} cocci_id/* security/selinux/avc.c 44 */;
	struct rcu_head *cocci_id/* security/selinux/avc.c 430 */;
	u32 *cocci_id/* security/selinux/avc.c 388 */;
	struct avc_xperms_decision_node *cocci_id/* security/selinux/avc.c 329 */;
	struct extended_perms_decision *cocci_id/* security/selinux/avc.c 327 */;
	struct avc_node *cocci_id/* security/selinux/avc.c 326 */;
	struct avc_xperms_decision_node cocci_id/* security/selinux/avc.c 143 */;
	struct avc_node cocci_id/* security/selinux/avc.c 136 */;
	void __init cocci_id/* security/selinux/avc.c 134 */;
	struct kmem_cache *cocci_id/* security/selinux/avc.c 119 */;
	struct avc_xperms_node cocci_id/* security/selinux/avc.c 1060 */;
	struct extended_perms_data cocci_id/* security/selinux/avc.c 1057 */;
	struct extended_perms_decision cocci_id/* security/selinux/avc.c 1055 */;
	struct av_decision cocci_id/* security/selinux/avc.c 1053 */;
	u8 cocci_id/* security/selinux/avc.c 1026 */;
	unsigned int cocci_id/* security/selinux/avc.c 1026 */;
	struct avc_xperms_node *cocci_id/* security/selinux/avc.c 1014 */;
	u16 cocci_id/* security/selinux/avc.c 1013 */;
	struct av_decision *cocci_id/* security/selinux/avc.c 1013 */;
	struct selinux_state *cocci_id/* security/selinux/avc.c 1011 */;
	__typeof__(struct avc_cache_stats) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
