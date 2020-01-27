cocci_test_suite() {
	struct mtrr_iter cocci_id/* arch/x86/kvm/mtrr.c 695 */;
	gfn_t cocci_id/* arch/x86/kvm/mtrr.c 691 */;
	struct kvm_vcpu *cocci_id/* arch/x86/kvm/mtrr.c 691 */;
	const int cocci_id/* arch/x86/kvm/mtrr.c 621 */;
	u8 cocci_id/* arch/x86/kvm/mtrr.c 615 */;
	struct kvm_mtrr *cocci_id/* arch/x86/kvm/mtrr.c 516 */;
	struct mtrr_iter *cocci_id/* arch/x86/kvm/mtrr.c 514 */;
	void cocci_id/* arch/x86/kvm/mtrr.c 514 */;
	struct kvm_mtrr_range *cocci_id/* arch/x86/kvm/mtrr.c 491 */;
	struct mtrr_iter {
		struct kvm_mtrr *mtrr_state;
		u64 start;
		u64 end;
		int mem_type;
		bool mtrr_disabled;
		bool partial_map;
		union {
			struct {
				int index;
				int seg;
			};
			struct {
				struct kvm_mtrr_range *range;
				u64 start_max;
			};
		};
		bool fixed;
	} cocci_id/* arch/x86/kvm/mtrr.c 440 */;
	struct fixed_mtrr_segment *cocci_id/* arch/x86/kvm/mtrr.c 275 */;
	u64 cocci_id/* arch/x86/kvm/mtrr.c 273 */;
	unsigned cocci_id/* arch/x86/kvm/mtrr.c 27 */;
	int cocci_id/* arch/x86/kvm/mtrr.c 240 */;
	u32 cocci_id/* arch/x86/kvm/mtrr.c 238 */;
	bool cocci_id/* arch/x86/kvm/mtrr.c 238 */;
	u64 *cocci_id/* arch/x86/kvm/mtrr.c 238 */;
	int *cocci_id/* arch/x86/kvm/mtrr.c 186 */;
	struct fixed_mtrr_segment cocci_id/* arch/x86/kvm/mtrr.c 145 */[];
	struct fixed_mtrr_segment {
		u64 start;
		u64 end;
		int range_shift;
		int range_start;
	} cocci_id/* arch/x86/kvm/mtrr.c 135 */;
}
