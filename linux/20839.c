cocci_test_suite() {
	bool cocci_id/* arch/x86/kvm/cpuid.c 989 */;
	struct kvm_cpuid_entry2 cocci_id/* arch/x86/kvm/cpuid.c 889 */;
	const struct kvm_cpuid_param cocci_id/* arch/x86/kvm/cpuid.c 873 */[];
	struct kvm_cpuid_entry2 __user *cocci_id/* arch/x86/kvm/cpuid.c 867 */;
	struct kvm_cpuid2 *cocci_id/* arch/x86/kvm/cpuid.c 866 */;
	__u32 cocci_id/* arch/x86/kvm/cpuid.c 843 */[3];
	__u32 cocci_id/* arch/x86/kvm/cpuid.c 840 */;
	const struct kvm_cpuid_param *cocci_id/* arch/x86/kvm/cpuid.c 834 */;
	struct kvm_cpuid_param {
		u32 func;
		bool (*qualifier)(const struct kvm_cpuid_param *param);
	} cocci_id/* arch/x86/kvm/cpuid.c 829 */;
	unsigned int cocci_id/* arch/x86/kvm/cpuid.c 818 */;
	struct kvm_lapic *cocci_id/* arch/x86/kvm/cpuid.c 70 */;
	const u32 *cocci_id/* arch/x86/kvm/cpuid.c 697 */;
	const char cocci_id/* arch/x86/kvm/cpuid.c 696 */[12];
	u64 cocci_id/* arch/x86/kvm/cpuid.c 644 */;
	union cpuid10_edx cocci_id/* arch/x86/kvm/cpuid.c 591 */;
	union cpuid10_eax cocci_id/* arch/x86/kvm/cpuid.c 590 */;
	struct x86_pmu_capability cocci_id/* arch/x86/kvm/cpuid.c 589 */;
	const u32 cocci_id/* arch/x86/kvm/cpuid.c 448 */;
	unsigned cocci_id/* arch/x86/kvm/cpuid.c 434 */;
	int *cocci_id/* arch/x86/kvm/cpuid.c 431 */;
	u32 cocci_id/* arch/x86/kvm/cpuid.c 430 */;
	struct kvm_cpuid_entry2 *cocci_id/* arch/x86/kvm/cpuid.c 430 */;
	int cocci_id/* arch/x86/kvm/cpuid.c 430 */;
	u32 *cocci_id/* arch/x86/kvm/cpuid.c 284 */;
	struct kvm_cpuid_entry cocci_id/* arch/x86/kvm/cpuid.c 211 */;
	struct kvm_cpuid_entry *cocci_id/* arch/x86/kvm/cpuid.c 203 */;
	struct kvm_cpuid_entry __user *cocci_id/* arch/x86/kvm/cpuid.c 200 */;
	struct kvm_cpuid *cocci_id/* arch/x86/kvm/cpuid.c 199 */;
	struct kvm_vcpu *cocci_id/* arch/x86/kvm/cpuid.c 163 */;
	void cocci_id/* arch/x86/kvm/cpuid.c 163 */;
	unsigned long long cocci_id/* arch/x86/kvm/cpuid.c 157 */;
}
