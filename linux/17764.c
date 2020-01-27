cocci_test_suite() {
	int cocci_id/* arch/powerpc/kvm/book3s_rtas.c 46 */;
	u32 cocci_id/* arch/powerpc/kvm/book3s_rtas.c 45 */;
	struct rtas_args *cocci_id/* arch/powerpc/kvm/book3s_rtas.c 43 */;
	struct kvm_vcpu *cocci_id/* arch/powerpc/kvm/book3s_rtas.c 43 */;
	void cocci_id/* arch/powerpc/kvm/book3s_rtas.c 43 */;
	gpa_t cocci_id/* arch/powerpc/kvm/book3s_rtas.c 223 */;
	rtas_arg_t *cocci_id/* arch/powerpc/kvm/book3s_rtas.c 222 */;
	struct rtas_args cocci_id/* arch/powerpc/kvm/book3s_rtas.c 221 */;
	struct rtas_token_definition *cocci_id/* arch/powerpc/kvm/book3s_rtas.c 220 */;
	struct kvm_rtas_token_args cocci_id/* arch/powerpc/kvm/book3s_rtas.c 200 */;
	struct kvm *cocci_id/* arch/powerpc/kvm/book3s_rtas.c 198 */;
	void __user *cocci_id/* arch/powerpc/kvm/book3s_rtas.c 198 */;
	bool cocci_id/* arch/powerpc/kvm/book3s_rtas.c 164 */;
	struct rtas_handler *cocci_id/* arch/powerpc/kvm/book3s_rtas.c 163 */;
	u64 cocci_id/* arch/powerpc/kvm/book3s_rtas.c 160 */;
	char *cocci_id/* arch/powerpc/kvm/book3s_rtas.c 136 */;
	struct rtas_token_definition {
		struct list_head list;
		struct rtas_handler *handler;
		u64 token;
	} cocci_id/* arch/powerpc/kvm/book3s_rtas.c 130 */;
	struct rtas_handler cocci_id/* arch/powerpc/kvm/book3s_rtas.c 121 */[];
	struct rtas_handler {
		void (*handler)(struct kvm_vcpu *vcpu, struct rtas_args *args);
		char *name;
	} cocci_id/* arch/powerpc/kvm/book3s_rtas.c 116 */;
}
