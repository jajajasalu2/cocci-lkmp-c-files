cocci_test_suite() {
	struct kvm_ldttss_desc *cocci_id/* arch/x86/kvm/svm.c 942 */;
	struct desc_struct *cocci_id/* arch/x86/kvm/svm.c 919 */;
	const char *cocci_id/* arch/x86/kvm/svm.c 893 */;
	void __exit cocci_id/* arch/x86/kvm/svm.c 7390 */;
	struct kvm_x86_ops cocci_id/* arch/x86/kvm/svm.c 7245 */;
	struct list_head *cocci_id/* arch/x86/kvm/svm.c 7130 */;
	struct kvm_enc_region *cocci_id/* arch/x86/kvm/svm.c 7127 */;
	struct kvm_sev_cmd cocci_id/* arch/x86/kvm/svm.c 7029 */;
	struct kvm_sev_launch_secret cocci_id/* arch/x86/kvm/svm.c 6962 */;
	struct sev_data_launch_secret *cocci_id/* arch/x86/kvm/svm.c 6961 */;
	size_t cocci_id/* arch/x86/kvm/svm.c 6928 */;
	struct kvm_sev_dbg cocci_id/* arch/x86/kvm/svm.c 6878 */;
	struct kvm_sev_cmd *cocci_id/* arch/x86/kvm/svm.c 6873 */;
	uintptr_t cocci_id/* arch/x86/kvm/svm.c 6784 */;
	void __user *cocci_id/* arch/x86/kvm/svm.c 6784 */;
	void *cocci_id/* arch/x86/kvm/svm.c 6771 */;
	struct page *cocci_id/* arch/x86/kvm/svm.c 6764 */;
	unsigned long __user cocci_id/* arch/x86/kvm/svm.c 6760 */;
	int *cocci_id/* arch/x86/kvm/svm.c 6744 */;
	struct kvm *cocci_id/* arch/x86/kvm/svm.c 6743 */;
	unsigned long cocci_id/* arch/x86/kvm/svm.c 6743 */;
	int cocci_id/* arch/x86/kvm/svm.c 6743 */;
	struct sev_data_dbg *cocci_id/* arch/x86/kvm/svm.c 6724 */;
	struct kvm_sev_info *cocci_id/* arch/x86/kvm/svm.c 6723 */;
	bool cocci_id/* arch/x86/kvm/svm.c 6721 */;
	struct sev_data_guest_status *cocci_id/* arch/x86/kvm/svm.c 6693 */;
	struct kvm_sev_guest_status cocci_id/* arch/x86/kvm/svm.c 6692 */;
	struct svm_cpu_data {
		int cpu;
		u64 asid_generation;
		u32 max_asid;
		u32 next_asid;
		u32 min_asid;
		struct kvm_ldttss_desc *tss_desc;
		struct page *save_area;
		struct vmcb *current_vmcb;
		struct vmcb **sev_vmcbs;
	} cocci_id/* arch/x86/kvm/svm.c 668 */;
	struct sev_data_launch_finish *cocci_id/* arch/x86/kvm/svm.c 6672 */;
	struct kvm_sev_launch_measure cocci_id/* arch/x86/kvm/svm.c 6605 */;
	struct sev_data_launch_measure *cocci_id/* arch/x86/kvm/svm.c 6604 */;
	struct kvm_ldttss_desc {
		u16 limit0;
		u16 base0;
		unsigned base1:8,type:5,dpl:2,p:1;
		unsigned limit1:4,zero0:3,g:1,base2:8;
		u32 base3;
		u32 zero1;
	}__attribute__((packed)) cocci_id/* arch/x86/kvm/svm.c 659 */;
	struct sev_data_launch_update_data *cocci_id/* arch/x86/kvm/svm.c 6529 */;
	struct kvm_sev_launch_update_data cocci_id/* arch/x86/kvm/svm.c 6528 */;
	struct page **cocci_id/* arch/x86/kvm/svm.c 6504 */;
	struct kvm_sev_launch_start cocci_id/* arch/x86/kvm/svm.c 6431 */;
	struct sev_data_launch_start *cocci_id/* arch/x86/kvm/svm.c 6430 */;
	struct fd cocci_id/* arch/x86/kvm/svm.c 6407 */;
	struct sev_data_activate *cocci_id/* arch/x86/kvm/svm.c 6388 */;
	void cocci_id/* arch/x86/kvm/svm.c 6310 */;
	char *cocci_id/* arch/x86/kvm/svm.c 6233 */;
	struct __x86_intercept cocci_id/* arch/x86/kvm/svm.c 6074 */;
	enum x86_intercept_stage cocci_id/* arch/x86/kvm/svm.c 6070 */;
	struct x86_instruction_info *cocci_id/* arch/x86/kvm/svm.c 6069 */;
	const struct __x86_intercept {
		u32 exit_code;
		enum x86_intercept_stage stage;
	} cocci_id/* arch/x86/kvm/svm.c 6011 */[];
	const struct x86_cpu_id cocci_id/* arch/x86/kvm/svm.c 60 */[];
	struct kvm_cpuid_entry2 *cocci_id/* arch/x86/kvm/svm.c 5929 */;
	gfn_t cocci_id/* arch/x86/kvm/svm.c 5906 */;
	int __init cocci_id/* arch/x86/kvm/svm.c 5883 */;
	unsigned char *cocci_id/* arch/x86/kvm/svm.c 5873 */;
	gva_t cocci_id/* arch/x86/kvm/svm.c 5505 */;
	struct amd_iommu_pi_data cocci_id/* arch/x86/kvm/svm.c 5322 */;
	struct vcpu_data cocci_id/* arch/x86/kvm/svm.c 5307 */;
	struct kvm_irq_routing_table *cocci_id/* arch/x86/kvm/svm.c 5292 */;
	struct kvm_lapic_irq cocci_id/* arch/x86/kvm/svm.c 5258 */;
	struct vcpu_data *cocci_id/* arch/x86/kvm/svm.c 5256 */;
	struct vcpu_svm **cocci_id/* arch/x86/kvm/svm.c 5256 */;
	struct kvm_kernel_irq_routing_entry *cocci_id/* arch/x86/kvm/svm.c 5255 */;
	struct amd_svm_iommu_ir cocci_id/* arch/x86/kvm/svm.c 5229 */;
	struct amd_iommu_pi_data *cocci_id/* arch/x86/kvm/svm.c 5199 */;
	struct nested_state *cocci_id/* arch/x86/kvm/svm.c 509 */;
	u64 cocci_id/* arch/x86/kvm/svm.c 489 */;
	struct vmcb_save_area *cocci_id/* arch/x86/kvm/svm.c 4818 */;
	int (*cocci_id/* arch/x86/kvm/svm.c 4746 */[])(struct vcpu_svm *svm);
	unsigned long *cocci_id/* arch/x86/kvm/svm.c 4600 */;
	u8 cocci_id/* arch/x86/kvm/svm.c 4574 */;
	u32 *cocci_id/* arch/x86/kvm/svm.c 4545 */;
	struct kvm_lapic *cocci_id/* arch/x86/kvm/svm.c 4489 */;
	enum avic_ipi_failure_cause{AVIC_IPI_FAILURE_INVALID_INT_TYPE, AVIC_IPI_FAILURE_TARGET_NOT_RUNNING, AVIC_IPI_FAILURE_INVALID_TARGET, AVIC_IPI_FAILURE_INVALID_BACKING_PAGE,} cocci_id/* arch/x86/kvm/svm.c 4476 */;
	struct kvm_msr_entry cocci_id/* arch/x86/kvm/svm.c 4397 */;
	struct enc_region {
		struct list_head list;
		unsigned long npages;
		struct page **pages;
		unsigned long uaddr;
		unsigned long size;
	} cocci_id/* arch/x86/kvm/svm.c 431 */;
	int cocci_id/* arch/x86/kvm/svm.c 422 */(void);
	struct msr_data *cocci_id/* arch/x86/kvm/svm.c 4131 */;
	struct kvm_msr_entry *cocci_id/* arch/x86/kvm/svm.c 4115 */;
	enum{VMCB_INTERCEPTS, VMCB_PERM_MAP, VMCB_ASID, VMCB_INTR, VMCB_NPT, VMCB_CR, VMCB_DR, VMCB_DT, VMCB_SEG, VMCB_CR2, VMCB_LBR, VMCB_AVIC, VMCB_DIRTY_MAX,} cocci_id/* arch/x86/kvm/svm.c 397 */;
	int cocci_id/* arch/x86/kvm/svm.c 394 */(struct vcpu_svm *svm,
						 unsigned nr,
						 bool has_error_code,
						 u32 error_code);
	int cocci_id/* arch/x86/kvm/svm.c 391 */(struct vcpu_svm *svm);
	void cocci_id/* arch/x86/kvm/svm.c 389 */(struct vcpu_svm *svm);
	void cocci_id/* arch/x86/kvm/svm.c 388 */(struct kvm_vcpu *vcpu,
						  bool invalidate_gpa);
	void cocci_id/* arch/x86/kvm/svm.c 387 */(struct kvm_vcpu *vcpu,
						  unsigned long cr0);
	u8 cocci_id/* arch/x86/kvm/svm.c 385 */[];
	bool __read_mostly cocci_id/* arch/x86/kvm/svm.c 382 */;
	struct kvm_host_map *cocci_id/* arch/x86/kvm/svm.c 3504 */;
	unsigned short cocci_id/* arch/x86/kvm/svm.c 337 */;
	struct kvm_host_map cocci_id/* arch/x86/kvm/svm.c 3318 */;
	struct vmcb_control_area *cocci_id/* arch/x86/kvm/svm.c 3282 */;
	u16 cocci_id/* arch/x86/kvm/svm.c 3115 */;
	struct x86_exception *cocci_id/* arch/x86/kvm/svm.c 2962 */;
	unsigned cocci_id/* arch/x86/kvm/svm.c 2890 */;
	struct vcpu_svm *cocci_id/* arch/x86/kvm/svm.c 2777 */;
	struct kvm_run *cocci_id/* arch/x86/kvm/svm.c 2764 */;
	const struct svm_direct_access_msrs {
		u32 index;
		bool always;
	} cocci_id/* arch/x86/kvm/svm.c 274 */[];
	struct svm_cpu_data *cocci_id/* arch/x86/kvm/svm.c 2659 */;
	struct amd_svm_iommu_ir {
		struct list_head node;
		void *data;
	} cocci_id/* arch/x86/kvm/svm.c 255 */;
	ulong cocci_id/* arch/x86/kvm/svm.c 2544 */;
	struct desc_ptr *cocci_id/* arch/x86/kvm/svm.c 2517 */;
	struct kvm_segment *cocci_id/* arch/x86/kvm/svm.c 2425 */;
	enum kvm_reg cocci_id/* arch/x86/kvm/svm.c 2377 */;
	struct vcpu_svm cocci_id/* arch/x86/kvm/svm.c 2156 */;
	struct amd_svm_iommu_ir *cocci_id/* arch/x86/kvm/svm.c 2017 */;
	struct enc_region cocci_id/* arch/x86/kvm/svm.c 1924 */;
	struct kvm_svm cocci_id/* arch/x86/kvm/svm.c 1895 */;
	struct vcpu_svm {
		struct kvm_vcpu vcpu;
		struct vmcb *vmcb;
		unsigned long vmcb_pa;
		struct svm_cpu_data *svm_data;
		uint64_t asid_generation;
		uint64_t sysenter_esp;
		uint64_t sysenter_eip;
		uint64_t tsc_aux;
		u64 msr_decfg;
		u64 next_rip;
		u64 host_user_msrs[NR_HOST_SAVE_USER_MSRS];
		struct {
			u16 fs;
			u16 gs;
			u16 ldt;
			u64 gs_base;
		} host;
		u64 spec_ctrl;
		u64 virt_spec_ctrl;
		u32 *msrpm;
		ulong nmi_iret_rip;
		struct nested_state nested;
		bool nmi_singlestep;
		u64 nmi_singlestep_guest_rflags;
		unsigned int3_injected;
		unsigned long int3_rip;
		bool nrips_enabled:1;
		u32 ldr_reg;
		u32 dfr_reg;
		struct page *avic_backing_page;
		u64 *avic_physical_id_cache;
		bool avic_is_running;
		struct list_head ir_list;
		spinlock_t ir_list_lock;
		unsigned int last_cpu;
	} cocci_id/* arch/x86/kvm/svm.c 188 */;
	struct enc_region *cocci_id/* arch/x86/kvm/svm.c 1878 */;
	uint8_t *cocci_id/* arch/x86/kvm/svm.c 1864 */;
	struct page *cocci_id/* arch/x86/kvm/svm.c 1862 */[];
	uint64_t cocci_id/* arch/x86/kvm/svm.c 186 */;
	u32 cocci_id/* arch/x86/kvm/svm.c 180 */[MSRPM_OFFSETS]__read_mostly;
	struct sev_data_deactivate *cocci_id/* arch/x86/kvm/svm.c 1766 */;
	struct sev_data_decommission *cocci_id/* arch/x86/kvm/svm.c 1765 */;
	unsigned int cocci_id/* arch/x86/kvm/svm.c 1668 */;
	u64 *cocci_id/* arch/x86/kvm/svm.c 1667 */;
	struct nested_state {
		struct vmcb *hsave;
		u64 hsave_msr;
		u64 vm_cr_msr;
		u64 vmcb;
		u32 *msrpm;
		u64 vmcb_msrpm;
		u64 vmcb_iopm;
		bool exit_required;
		u32 intercept_cr;
		u32 intercept_dr;
		u32 intercept_exceptions;
		u64 intercept;
		u64 nested_cr3;
	} cocci_id/* arch/x86/kvm/svm.c 153 */;
	struct kvm_vcpu cocci_id/* arch/x86/kvm/svm.c 151 */;
	phys_addr_t cocci_id/* arch/x86/kvm/svm.c 1497 */;
	struct vmcb *cocci_id/* arch/x86/kvm/svm.c 1495 */;
	uint32_t cocci_id/* arch/x86/kvm/svm.c 1453 */;
	struct vmcb_seg *cocci_id/* arch/x86/kvm/svm.c 1444 */;
	struct kvm_svm {
		struct kvm kvm;
		u32 avic_vm_id;
		struct page *avic_logical_id_table_page;
		struct page *avic_physical_id_table_page;
		struct hlist_node hnode;
		struct kvm_sev_info sev_info;
	} cocci_id/* arch/x86/kvm/svm.c 139 */;
	struct kvm_sev_info {
		bool active;
		unsigned int asid;
		unsigned int handle;
		int fd;
		unsigned long pages_locked;
		struct list_head regions_list;
	} cocci_id/* arch/x86/kvm/svm.c 130 */;
	struct sev_user_data_status *cocci_id/* arch/x86/kvm/svm.c 1231 */;
	struct kvm_vcpu *cocci_id/* arch/x86/kvm/svm.c 1203 */;
	struct kvm_svm *cocci_id/* arch/x86/kvm/svm.c 1202 */;
	const u32 cocci_id/* arch/x86/kvm/svm.c 119 */[];
	u32 cocci_id/* arch/x86/kvm/svm.c 1106 */;
	struct svm_cpu_data cocci_id/* arch/x86/kvm/svm.c 1008 */;
	__typeof__(u64) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(struct svm_cpu_data *) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}