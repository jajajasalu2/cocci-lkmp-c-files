cocci_test_suite() {
	u64 *cocci_id/* arch/x86/kvm/vmx/nested.c 945 */;
	struct vmx_msr_entry *cocci_id/* arch/x86/kvm/vmx/nested.c 871 */;
	struct shadow_vmcs_field cocci_id/* arch/x86/kvm/vmx/nested.c 67 */[];
	struct shadow_vmcs_field {
		u16 encoding;
		u16 offset;
	} cocci_id/* arch/x86/kvm/vmx/nested.c 63 */;
	int (*cocci_id/* arch/x86/kvm/vmx/nested.c 6181 */[])(struct kvm_vcpu *);
	struct nested_vmx_msrs *cocci_id/* arch/x86/kvm/vmx/nested.c 5941 */;
	unsigned long *cocci_id/* arch/x86/kvm/vmx/nested.c 58 */[VMX_BITMAP_NR];
	struct kvm_nested_state *cocci_id/* arch/x86/kvm/vmx/nested.c 5768 */;
	struct kvm_vmx_nested_state_data __user *cocci_id/* arch/x86/kvm/vmx/nested.c 5667 */;
	struct kvm_nested_state cocci_id/* arch/x86/kvm/vmx/nested.c 5660 */;
	struct kvm_nested_state __user *cocci_id/* arch/x86/kvm/vmx/nested.c 5655 */;
	long cocci_id/* arch/x86/kvm/vmx/nested.c 564 */;
	unsigned cocci_id/* arch/x86/kvm/vmx/nested.c 561 */;
	unsigned long *cocci_id/* arch/x86/kvm/vmx/nested.c 557 */;
	unsigned char cocci_id/* arch/x86/kvm/vmx/nested.c 5351 */;
	enum{VMX_VMREAD_BITMAP, VMX_VMWRITE_BITMAP, VMX_BITMAP_NR,} cocci_id/* arch/x86/kvm/vmx/nested.c 53 */;
	struct kvm_mmu *cocci_id/* arch/x86/kvm/vmx/nested.c 5201 */;
	u16 cocci_id/* arch/x86/kvm/vmx/nested.c 5128 */;
	struct {
		u64 vpid;
		u64 gla;
	} cocci_id/* arch/x86/kvm/vmx/nested.c 5124 */;
	struct {
		u64 eptp,gpa;
	} cocci_id/* arch/x86/kvm/vmx/nested.c 5067 */;
	struct x86_exception cocci_id/* arch/x86/kvm/vmx/nested.c 5066 */;
	void *cocci_id/* arch/x86/kvm/vmx/nested.c 5051 */;
	struct kvm_host_map cocci_id/* arch/x86/kvm/vmx/nested.c 4993 */;
	short cocci_id/* arch/x86/kvm/vmx/nested.c 4762 */;
	int cocci_id/* arch/x86/kvm/vmx/nested.c 4737 */(struct kvm_vcpu *vcpu,
							 bool launch);
	struct vmcs12 cocci_id/* arch/x86/kvm/vmx/nested.c 4729 */;
	gpa_t cocci_id/* arch/x86/kvm/vmx/nested.c 4696 */;
	const u64 cocci_id/* arch/x86/kvm/vmx/nested.c 4591 */;
	uint32_t cocci_id/* arch/x86/kvm/vmx/nested.c 4589 */;
	struct loaded_vmcs *cocci_id/* arch/x86/kvm/vmx/nested.c 4510 */;
	struct vcpu_vmx *cocci_id/* arch/x86/kvm/vmx/nested.c 4509 */;
	struct vmcs *cocci_id/* arch/x86/kvm/vmx/nested.c 4507 */;
	struct kvm_vcpu *cocci_id/* arch/x86/kvm/vmx/nested.c 4507 */;
	gpa_t *cocci_id/* arch/x86/kvm/vmx/nested.c 4484 */;
	u64 cocci_id/* arch/x86/kvm/vmx/nested.c 4450 */;
	struct kvm_segment cocci_id/* arch/x86/kvm/vmx/nested.c 4344 */;
	gva_t cocci_id/* arch/x86/kvm/vmx/nested.c 4342 */;
	u32 cocci_id/* arch/x86/kvm/vmx/nested.c 4340 */;
	bool cocci_id/* arch/x86/kvm/vmx/nested.c 4340 */;
	gva_t *cocci_id/* arch/x86/kvm/vmx/nested.c 4340 */;
	struct shared_msr_entry *cocci_id/* arch/x86/kvm/vmx/nested.c 4064 */;
	unsigned int cocci_id/* arch/x86/kvm/vmx/nested.c 401 */;
	ktime_t cocci_id/* arch/x86/kvm/vmx/nested.c 3648 */;
	struct kvm_lapic *cocci_id/* arch/x86/kvm/vmx/nested.c 3592 */;
	gfn_t cocci_id/* arch/x86/kvm/vmx/nested.c 3511 */;
	struct x86_exception *cocci_id/* arch/x86/kvm/vmx/nested.c 337 */;
	enum nvmx_vmentry_status cocci_id/* arch/x86/kvm/vmx/nested.c 3176 */;
	void cocci_id/* arch/x86/kvm/vmx/nested.c 3163 */(struct kvm_vcpu *vcpu,
							  struct vmcs12 *vmcs12);
	struct pi_desc *cocci_id/* arch/x86/kvm/vmx/nested.c 3120 */;
	struct page *cocci_id/* arch/x86/kvm/vmx/nested.c 3059 */;
	struct kvm_host_map *cocci_id/* arch/x86/kvm/vmx/nested.c 3058 */;
	bool cocci_id/* arch/x86/kvm/vmx/nested.c 3051 */(struct kvm_vcpu *vcpu,
							  struct vmcs12 *vmcs12);
	u32 *cocci_id/* arch/x86/kvm/vmx/nested.c 2892 */;
	struct vmcs_host_state *cocci_id/* arch/x86/kvm/vmx/nested.c 288 */;
	u8 cocci_id/* arch/x86/kvm/vmx/nested.c 2708 */;
	struct vcpu_vmx cocci_id/* arch/x86/kvm/vmx/nested.c 2031 */;
	enum hrtimer_restart cocci_id/* arch/x86/kvm/vmx/nested.c 2028 */;
	struct hrtimer *cocci_id/* arch/x86/kvm/vmx/nested.c 2028 */;
	bool __read_mostly cocci_id/* arch/x86/kvm/vmx/nested.c 17 */;
	struct hv_enlightened_vmcs *cocci_id/* arch/x86/kvm/vmx/nested.c 1534 */;
	struct vmcs12 *cocci_id/* arch/x86/kvm/vmx/nested.c 1533 */;
	int cocci_id/* arch/x86/kvm/vmx/nested.c 1531 */;
	const int cocci_id/* arch/x86/kvm/vmx/nested.c 1503 */[];
	const struct shadow_vmcs_field *cocci_id/* arch/x86/kvm/vmx/nested.c 1499 */[];
	unsigned long cocci_id/* arch/x86/kvm/vmx/nested.c 1475 */;
	struct shadow_vmcs_field cocci_id/* arch/x86/kvm/vmx/nested.c 1474 */;
	void cocci_id/* arch/x86/kvm/vmx/nested.c 1470 */;
	struct vmx_msrs *cocci_id/* arch/x86/kvm/vmx/nested.c 1046 */;
	struct vmx_msr_entry cocci_id/* arch/x86/kvm/vmx/nested.c 1029 */;
}
