@ initialize:python @
@@
from collections import defaultdict
rule_matches = defaultdict(dict)

@ r1 @
symbol cocci_id;
position p;
@@
 struct kvm_irq_routing_table * cocci_id@p ;

@ script:python depends on r1 @
p << r1.p;
@@

if 1 not in rule_matches:
    rule_matches[1] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['75']:
    rule_matches[1]['correct_lines'].append(p[0].line)
else:
    rule_matches[1]['other_lines'].append(p[0].line)

@ r2 @
symbol cocci_id;
position p;
typedef u64,bool,u32,u16,uint64_t,spinlock_t;
@@
 struct vcpu_svm {  struct kvm_vcpu vcpu ;  struct vmcb * vmcb ;  unsigned long vmcb_pa ;  struct svm_cpu_data * svm_data ;  uint64_t asid_generation ;  uint64_t sysenter_esp ;  uint64_t sysenter_eip ;  uint64_t tsc_aux ;  u64 msr_decfg ;  u64 next_rip ;  u64 host_user_msrs [ NR_HOST_SAVE_USER_MSRS ] ;  struct {  u16 fs ;  u16 gs ;  u16 ldt ;  u64 gs_base ; } host ;  u64 spec_ctrl ;  u64 virt_spec_ctrl ;  u32 * msrpm ;  ulong nmi_iret_rip ;  struct nested_state nested ;  bool nmi_singlestep ;  u64 nmi_singlestep_guest_rflags ;  unsigned int3_injected ;  unsigned long int3_rip ;  bool nrips_enabled : 1 ;  u32 ldr_reg ;  u32 dfr_reg ;  struct page * avic_backing_page ;  u64 * avic_physical_id_cache ;  bool avic_is_running ;  struct list_head ir_list ;  spinlock_t ir_list_lock ;  unsigned int last_cpu ; } cocci_id@p ;

@ script:python depends on r2 @
p << r2.p;
@@

if 2 not in rule_matches:
    rule_matches[2] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['141', '177']:
    rule_matches[2]['correct_lines'].append(p[0].line)
else:
    rule_matches[2]['other_lines'].append(p[0].line)

@ r3 @
symbol cocci_id;
position p;
typedef bool,u32;
@@
 int cocci_id@p ( struct vcpu_svm * svm , unsigned nr , bool has_error_code , u32 error_code ) ;

@ script:python depends on r3 @
p << r3.p;
@@

if 3 not in rule_matches:
    rule_matches[3] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['103', '106']:
    rule_matches[3]['correct_lines'].append(p[0].line)
else:
    rule_matches[3]['other_lines'].append(p[0].line)

@ r4 @
symbol cocci_id;
position p;
@@
 int ( * cocci_id@p [ ] ) ( struct vcpu_svm * svm ) ;

@ script:python depends on r4 @
p << r4.p;
@@

if 4 not in rule_matches:
    rule_matches[4] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['85']:
    rule_matches[4]['correct_lines'].append(p[0].line)
else:
    rule_matches[4]['other_lines'].append(p[0].line)

@ r5 @
symbol cocci_id;
position p;
@@
 enum { VMCB_INTERCEPTS , VMCB_PERM_MAP , VMCB_ASID , VMCB_INTR , VMCB_NPT , VMCB_CR , VMCB_DR , VMCB_DT , VMCB_SEG , VMCB_CR2 , VMCB_LBR , VMCB_AVIC , VMCB_DIRTY_MAX , } cocci_id@p ;

@ script:python depends on r5 @
p << r5.p;
@@

if 5 not in rule_matches:
    rule_matches[5] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['102']:
    rule_matches[5]['correct_lines'].append(p[0].line)
else:
    rule_matches[5]['other_lines'].append(p[0].line)

@ r6 @
symbol cocci_id;
position p;
typedef gfn_t;
@@
 gfn_t cocci_id@p ;

@ script:python depends on r6 @
p << r6.p;
@@

if 6 not in rule_matches:
    rule_matches[6] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['69']:
    rule_matches[6]['correct_lines'].append(p[0].line)
else:
    rule_matches[6]['other_lines'].append(p[0].line)

@ r7 @
symbol cocci_id;
position p;
@@
 struct kvm_sev_launch_update_data cocci_id@p ;

@ script:python depends on r7 @
p << r7.p;
@@

if 7 not in rule_matches:
    rule_matches[7] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['52']:
    rule_matches[7]['correct_lines'].append(p[0].line)
else:
    rule_matches[7]['other_lines'].append(p[0].line)

@ r8 @
symbol cocci_id;
position p;
@@
 struct kvm_svm * cocci_id@p ;

@ script:python depends on r8 @
p << r8.p;
@@

if 8 not in rule_matches:
    rule_matches[8] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['225']:
    rule_matches[8]['correct_lines'].append(p[0].line)
else:
    rule_matches[8]['other_lines'].append(p[0].line)

@ r9 @
symbol cocci_id;
position p;
@@
 struct vcpu_svm cocci_id@p ;

@ script:python depends on r9 @
p << r9.p;
@@

if 9 not in rule_matches:
    rule_matches[9] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['137']:
    rule_matches[9]['correct_lines'].append(p[0].line)
else:
    rule_matches[9]['other_lines'].append(p[0].line)

@ r10 @
symbol cocci_id;
position p;
typedef uint32_t;
@@
 uint32_t cocci_id@p ;

@ script:python depends on r10 @
p << r10.p;
@@

if 10 not in rule_matches:
    rule_matches[10] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['205']:
    rule_matches[10]['correct_lines'].append(p[0].line)
else:
    rule_matches[10]['other_lines'].append(p[0].line)

@ r11 @
symbol cocci_id;
position p;
@@
 struct kvm_host_map cocci_id@p ;

@ script:python depends on r11 @
p << r11.p;
@@

if 11 not in rule_matches:
    rule_matches[11] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['117']:
    rule_matches[11]['correct_lines'].append(p[0].line)
else:
    rule_matches[11]['other_lines'].append(p[0].line)

@ r12 @
symbol cocci_id;
position p;
@@
 const struct x86_cpu_id cocci_id@p [ ] ;

@ script:python depends on r12 @
p << r12.p;
@@

if 12 not in rule_matches:
    rule_matches[12] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['67']:
    rule_matches[12]['correct_lines'].append(p[0].line)
else:
    rule_matches[12]['other_lines'].append(p[0].line)

@ r13 @
symbol cocci_id;
position p;
@@
 struct fd cocci_id@p ;

@ script:python depends on r13 @
p << r13.p;
@@

if 13 not in rule_matches:
    rule_matches[13] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['56']:
    rule_matches[13]['correct_lines'].append(p[0].line)
else:
    rule_matches[13]['other_lines'].append(p[0].line)

@ r14 @
symbol cocci_id;
position p;
@@
 struct sev_data_guest_status * cocci_id@p ;

@ script:python depends on r14 @
p << r14.p;
@@

if 14 not in rule_matches:
    rule_matches[14] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['27']:
    rule_matches[14]['correct_lines'].append(p[0].line)
else:
    rule_matches[14]['other_lines'].append(p[0].line)

@ r15 @
symbol cocci_id;
position p;
@@
 struct kvm_svm cocci_id@p ;

@ script:python depends on r15 @
p << r15.p;
@@

if 15 not in rule_matches:
    rule_matches[15] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['140']:
    rule_matches[15]['correct_lines'].append(p[0].line)
else:
    rule_matches[15]['other_lines'].append(p[0].line)

@ r16 @
symbol cocci_id;
position p;
typedef uint64_t;
@@
 uint64_t cocci_id@p ;

@ script:python depends on r16 @
p << r16.p;
@@

if 16 not in rule_matches:
    rule_matches[16] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['181']:
    rule_matches[16]['correct_lines'].append(p[0].line)
else:
    rule_matches[16]['other_lines'].append(p[0].line)

@ r17 @
symbol cocci_id;
position p;
@@
 struct kvm_sev_cmd cocci_id@p ;

@ script:python depends on r17 @
p << r17.p;
@@

if 17 not in rule_matches:
    rule_matches[17] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['9']:
    rule_matches[17]['correct_lines'].append(p[0].line)
else:
    rule_matches[17]['other_lines'].append(p[0].line)

@ r18 @
symbol cocci_id;
position p;
@@
 unsigned cocci_id@p ;

@ script:python depends on r18 @
p << r18.p;
@@

if 18 not in rule_matches:
    rule_matches[18] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['121']:
    rule_matches[18]['correct_lines'].append(p[0].line)
else:
    rule_matches[18]['other_lines'].append(p[0].line)

@ r19 @
symbol cocci_id;
position p;
@@
 struct sev_user_data_status * cocci_id@p ;

@ script:python depends on r19 @
p << r19.p;
@@

if 19 not in rule_matches:
    rule_matches[19] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['223']:
    rule_matches[19]['correct_lines'].append(p[0].line)
else:
    rule_matches[19]['other_lines'].append(p[0].line)

@ r20 @
symbol cocci_id;
position p;
@@
 int cocci_id@p ;

@ script:python depends on r20 @
p << r20.p;
@@

if 20 not in rule_matches:
    rule_matches[20] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['23']:
    rule_matches[20]['correct_lines'].append(p[0].line)
else:
    rule_matches[20]['other_lines'].append(p[0].line)

@ r21 @
symbol cocci_id;
position p;
@@
 struct kvm_sev_guest_status cocci_id@p ;

@ script:python depends on r21 @
p << r21.p;
@@

if 21 not in rule_matches:
    rule_matches[21] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['28']:
    rule_matches[21]['correct_lines'].append(p[0].line)
else:
    rule_matches[21]['other_lines'].append(p[0].line)

@ r22 @
symbol cocci_id;
position p;
@@
 struct svm_cpu_data cocci_id@p ;

@ script:python depends on r22 @
p << r22.p;
@@

if 22 not in rule_matches:
    rule_matches[22] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['228']:
    rule_matches[22]['correct_lines'].append(p[0].line)
else:
    rule_matches[22]['other_lines'].append(p[0].line)

@ r23 @
symbol cocci_id;
position p;
@@
 struct sev_data_launch_finish * cocci_id@p ;

@ script:python depends on r23 @
p << r23.p;
@@

if 23 not in rule_matches:
    rule_matches[23] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['40']:
    rule_matches[23]['correct_lines'].append(p[0].line)
else:
    rule_matches[23]['other_lines'].append(p[0].line)

@ r24 @
symbol cocci_id;
position p;
@@
 struct page * cocci_id@p [ ] ;

@ script:python depends on r24 @
p << r24.p;
@@

if 24 not in rule_matches:
    rule_matches[24] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['180']:
    rule_matches[24]['correct_lines'].append(p[0].line)
else:
    rule_matches[24]['other_lines'].append(p[0].line)

@ r25 @
symbol cocci_id;
position p;
@@
 struct kvm_ldttss_desc * cocci_id@p ;

@ script:python depends on r25 @
p << r25.p;
@@

if 25 not in rule_matches:
    rule_matches[25] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['2']:
    rule_matches[25]['correct_lines'].append(p[0].line)
else:
    rule_matches[25]['other_lines'].append(p[0].line)

@ r26 @
symbol cocci_id;
position p;
@@
 struct page * * cocci_id@p ;

@ script:python depends on r26 @
p << r26.p;
@@

if 26 not in rule_matches:
    rule_matches[26] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['53']:
    rule_matches[26]['correct_lines'].append(p[0].line)
else:
    rule_matches[26]['other_lines'].append(p[0].line)

@ r27 @
symbol cocci_id;
position p;
typedef u64,u32;
@@
 struct svm_cpu_data {  int cpu ;  u64 asid_generation ;  u32 max_asid ;  u32 next_asid ;  u32 min_asid ;  struct kvm_ldttss_desc * tss_desc ;  struct page * save_area ;  struct vmcb * current_vmcb ;  struct vmcb * * sev_vmcbs ; } cocci_id@p ;

@ script:python depends on r27 @
p << r27.p;
@@

if 27 not in rule_matches:
    rule_matches[27] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['29', '39']:
    rule_matches[27]['correct_lines'].append(p[0].line)
else:
    rule_matches[27]['other_lines'].append(p[0].line)

@ r28 @
symbol cocci_id;
position p;
@@
 struct vmcb_control_area * cocci_id@p ;

@ script:python depends on r28 @
p << r28.p;
@@

if 28 not in rule_matches:
    rule_matches[28] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['118']:
    rule_matches[28]['correct_lines'].append(p[0].line)
else:
    rule_matches[28]['other_lines'].append(p[0].line)

@ r29 @
symbol cocci_id;
position p;
@@
 struct sev_data_launch_start * cocci_id@p ;

@ script:python depends on r29 @
p << r29.p;
@@

if 29 not in rule_matches:
    rule_matches[29] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['55']:
    rule_matches[29]['correct_lines'].append(p[0].line)
else:
    rule_matches[29]['other_lines'].append(p[0].line)

@ r30 @
symbol cocci_id;
position p;
typedef bool;
@@
 struct kvm_sev_info {  bool active ;  unsigned int asid ;  unsigned int handle ;  int fd ;  unsigned long pages_locked ;  struct list_head regions_list ; } cocci_id@p ;

@ script:python depends on r30 @
p << r30.p;
@@

if 30 not in rule_matches:
    rule_matches[30] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['215', '222']:
    rule_matches[30]['correct_lines'].append(p[0].line)
else:
    rule_matches[30]['other_lines'].append(p[0].line)

@ r31 @
symbol cocci_id;
position p;
@@
 struct sev_data_launch_measure * cocci_id@p ;

@ script:python depends on r31 @
p << r31.p;
@@

if 31 not in rule_matches:
    rule_matches[31] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['42']:
    rule_matches[31]['correct_lines'].append(p[0].line)
else:
    rule_matches[31]['other_lines'].append(p[0].line)

@ r32 @
symbol cocci_id;
position p;
@@
 unsigned char * cocci_id@p ;

@ script:python depends on r32 @
p << r32.p;
@@

if 32 not in rule_matches:
    rule_matches[32] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['71']:
    rule_matches[32]['correct_lines'].append(p[0].line)
else:
    rule_matches[32]['other_lines'].append(p[0].line)

@ r33 @
symbol cocci_id;
position p;
typedef u8;
@@
 u8 cocci_id@p ;

@ script:python depends on r33 @
p << r33.p;
@@

if 33 not in rule_matches:
    rule_matches[33] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['87']:
    rule_matches[33]['correct_lines'].append(p[0].line)
else:
    rule_matches[33]['other_lines'].append(p[0].line)

@ r34 @
symbol cocci_id;
position p;
@@
 void cocci_id@p ( struct vcpu_svm * svm ) ;

@ script:python depends on r34 @
p << r34.p;
@@

if 34 not in rule_matches:
    rule_matches[34] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['108']:
    rule_matches[34]['correct_lines'].append(p[0].line)
else:
    rule_matches[34]['other_lines'].append(p[0].line)

@ r35 @
symbol cocci_id;
position p;
@@
 struct vmcb_save_area * cocci_id@p ;

@ script:python depends on r35 @
p << r35.p;
@@

if 35 not in rule_matches:
    rule_matches[35] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['84']:
    rule_matches[35]['correct_lines'].append(p[0].line)
else:
    rule_matches[35]['other_lines'].append(p[0].line)

@ r36 @
symbol cocci_id;
position p;
typedef uint8_t;
@@
 uint8_t * cocci_id@p ;

@ script:python depends on r36 @
p << r36.p;
@@

if 36 not in rule_matches:
    rule_matches[36] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['179']:
    rule_matches[36]['correct_lines'].append(p[0].line)
else:
    rule_matches[36]['other_lines'].append(p[0].line)

@ r37 @
symbol cocci_id;
position p;
@@
 enum avic_ipi_failure_cause { AVIC_IPI_FAILURE_INVALID_INT_TYPE , AVIC_IPI_FAILURE_TARGET_NOT_RUNNING , AVIC_IPI_FAILURE_INVALID_TARGET , AVIC_IPI_FAILURE_INVALID_BACKING_PAGE , } cocci_id@p ;

@ script:python depends on r37 @
p << r37.p;
@@

if 37 not in rule_matches:
    rule_matches[37] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['90']:
    rule_matches[37]['correct_lines'].append(p[0].line)
else:
    rule_matches[37]['other_lines'].append(p[0].line)

@ r38 @
symbol cocci_id;
position p;
@@
 struct x86_exception * cocci_id@p ;

@ script:python depends on r38 @
p << r38.p;
@@

if 38 not in rule_matches:
    rule_matches[38] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['120']:
    rule_matches[38]['correct_lines'].append(p[0].line)
else:
    rule_matches[38]['other_lines'].append(p[0].line)

@ r39 @
symbol cocci_id;
position p;
typedef bool;
@@
 bool cocci_id@p ;

@ script:python depends on r39 @
p << r39.p;
@@

if 39 not in rule_matches:
    rule_matches[39] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['26']:
    rule_matches[39]['correct_lines'].append(p[0].line)
else:
    rule_matches[39]['other_lines'].append(p[0].line)

@ r40 @
symbol cocci_id;
position p;
@@
 struct kvm_sev_info * cocci_id@p ;

@ script:python depends on r40 @
p << r40.p;
@@

if 40 not in rule_matches:
    rule_matches[40] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['25']:
    rule_matches[40]['correct_lines'].append(p[0].line)
else:
    rule_matches[40]['other_lines'].append(p[0].line)

@ r41 @
symbol cocci_id;
position p;
@@
 struct kvm_cpuid_entry2 * cocci_id@p ;

@ script:python depends on r41 @
p << r41.p;
@@

if 41 not in rule_matches:
    rule_matches[41] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['68']:
    rule_matches[41]['correct_lines'].append(p[0].line)
else:
    rule_matches[41]['other_lines'].append(p[0].line)

@ r42 @
symbol cocci_id;
position p;
@@
 struct kvm_lapic * cocci_id@p ;

@ script:python depends on r42 @
p << r42.p;
@@

if 42 not in rule_matches:
    rule_matches[42] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['89']:
    rule_matches[42]['correct_lines'].append(p[0].line)
else:
    rule_matches[42]['other_lines'].append(p[0].line)

@ r43 @
symbol cocci_id;
position p;
typedef bool,u32;
@@
 const struct svm_direct_access_msrs {  u32 index ;  bool always ; } cocci_id@p [ ] ;

@ script:python depends on r43 @
p << r43.p;
@@

if 43 not in rule_matches:
    rule_matches[43] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['124', '127']:
    rule_matches[43]['correct_lines'].append(p[0].line)
else:
    rule_matches[43]['other_lines'].append(p[0].line)

@ r44 @
symbol cocci_id;
position p;
@@
 struct amd_iommu_pi_data cocci_id@p ;

@ script:python depends on r44 @
p << r44.p;
@@

if 44 not in rule_matches:
    rule_matches[44] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['73']:
    rule_matches[44]['correct_lines'].append(p[0].line)
else:
    rule_matches[44]['other_lines'].append(p[0].line)

@ r45 @
symbol cocci_id;
position p;
@@
 enum x86_intercept_stage cocci_id@p ;

@ script:python depends on r45 @
p << r45.p;
@@

if 45 not in rule_matches:
    rule_matches[45] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['61']:
    rule_matches[45]['correct_lines'].append(p[0].line)
else:
    rule_matches[45]['other_lines'].append(p[0].line)

@ r46 @
symbol cocci_id;
position p;
@@
 struct vmcb * cocci_id@p ;

@ script:python depends on r46 @
p << r46.p;
@@

if 46 not in rule_matches:
    rule_matches[46] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['204']:
    rule_matches[46]['correct_lines'].append(p[0].line)
else:
    rule_matches[46]['other_lines'].append(p[0].line)

@ r47 @
symbol cocci_id;
position p;
@@
 const char * cocci_id@p ;

@ script:python depends on r47 @
p << r47.p;
@@

if 47 not in rule_matches:
    rule_matches[47] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['4']:
    rule_matches[47]['correct_lines'].append(p[0].line)
else:
    rule_matches[47]['other_lines'].append(p[0].line)

@ r48 @
symbol cocci_id;
position p;
@@
 unsigned int cocci_id@p ;

@ script:python depends on r48 @
p << r48.p;
@@

if 48 not in rule_matches:
    rule_matches[48] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['185']:
    rule_matches[48]['correct_lines'].append(p[0].line)
else:
    rule_matches[48]['other_lines'].append(p[0].line)

@ r49 @
symbol cocci_id;
position p;
typedef gva_t;
@@
 gva_t cocci_id@p ;

@ script:python depends on r49 @
p << r49.p;
@@

if 49 not in rule_matches:
    rule_matches[49] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['72']:
    rule_matches[49]['correct_lines'].append(p[0].line)
else:
    rule_matches[49]['other_lines'].append(p[0].line)

@ r50 @
symbol cocci_id;
position p;
@@
 struct kvm_sev_launch_secret cocci_id@p ;

@ script:python depends on r50 @
p << r50.p;
@@

if 50 not in rule_matches:
    rule_matches[50] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['10']:
    rule_matches[50]['correct_lines'].append(p[0].line)
else:
    rule_matches[50]['other_lines'].append(p[0].line)

@ r51 @
symbol cocci_id;
position p;
typedef u32;
@@
 const struct __x86_intercept {  u32 exit_code ;  enum x86_intercept_stage stage ; } cocci_id@p [ ] ;

@ script:python depends on r51 @
p << r51.p;
@@

if 51 not in rule_matches:
    rule_matches[51] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['63', '66']:
    rule_matches[51]['correct_lines'].append(p[0].line)
else:
    rule_matches[51]['other_lines'].append(p[0].line)

@ r52 @
symbol cocci_id;
position p;
@@
 struct sev_data_dbg * cocci_id@p ;

@ script:python depends on r52 @
p << r52.p;
@@

if 52 not in rule_matches:
    rule_matches[52] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['24']:
    rule_matches[52]['correct_lines'].append(p[0].line)
else:
    rule_matches[52]['other_lines'].append(p[0].line)

@ r53 @
symbol cocci_id;
position p;
@@
 struct amd_svm_iommu_ir * cocci_id@p ;

@ script:python depends on r53 @
p << r53.p;
@@

if 53 not in rule_matches:
    rule_matches[53] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['138']:
    rule_matches[53]['correct_lines'].append(p[0].line)
else:
    rule_matches[53]['other_lines'].append(p[0].line)

@ r54 @
symbol cocci_id;
position p;
@@
 int * cocci_id@p ;

@ script:python depends on r54 @
p << r54.p;
@@

if 54 not in rule_matches:
    rule_matches[54] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['20']:
    rule_matches[54]['correct_lines'].append(p[0].line)
else:
    rule_matches[54]['other_lines'].append(p[0].line)

@ r55 @
symbol cocci_id;
position p;
@@
 struct kvm_msr_entry cocci_id@p ;

@ script:python depends on r55 @
p << r55.p;
@@

if 55 not in rule_matches:
    rule_matches[55] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['91']:
    rule_matches[55]['correct_lines'].append(p[0].line)
else:
    rule_matches[55]['other_lines'].append(p[0].line)

@ r56 @
symbol cocci_id;
position p;
@@
 unsigned long cocci_id@p ;

@ script:python depends on r56 @
p << r56.p;
@@

if 56 not in rule_matches:
    rule_matches[56] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['22']:
    rule_matches[56]['correct_lines'].append(p[0].line)
else:
    rule_matches[56]['other_lines'].append(p[0].line)

@ r57 @
symbol cocci_id;
position p;
@@
 struct sev_data_decommission * cocci_id@p ;

@ script:python depends on r57 @
p << r57.p;
@@

if 57 not in rule_matches:
    rule_matches[57] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['184']:
    rule_matches[57]['correct_lines'].append(p[0].line)
else:
    rule_matches[57]['other_lines'].append(p[0].line)

@ r58 @
symbol cocci_id;
position p;
@@
 unsigned long * cocci_id@p ;

@ script:python depends on r58 @
p << r58.p;
@@

if 58 not in rule_matches:
    rule_matches[58] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['86']:
    rule_matches[58]['correct_lines'].append(p[0].line)
else:
    rule_matches[58]['other_lines'].append(p[0].line)

@ r59 @
symbol cocci_id;
position p;
@@
 struct enc_region {  struct list_head list ;  unsigned long npages ;  struct page * * pages ;  unsigned long uaddr ;  unsigned long size ; } cocci_id@p ;

@ script:python depends on r59 @
p << r59.p;
@@

if 59 not in rule_matches:
    rule_matches[59] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['92', '98']:
    rule_matches[59]['correct_lines'].append(p[0].line)
else:
    rule_matches[59]['other_lines'].append(p[0].line)

@ r60 @
symbol cocci_id;
position p;
typedef u64;
@@
 u64 cocci_id@p ;

@ script:python depends on r60 @
p << r60.p;
@@

if 60 not in rule_matches:
    rule_matches[60] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['83']:
    rule_matches[60]['correct_lines'].append(p[0].line)
else:
    rule_matches[60]['other_lines'].append(p[0].line)

@ r61 @
symbol cocci_id;
position p;
typedef u32;
@@
 u32 * cocci_id@p ;

@ script:python depends on r61 @
p << r61.p;
@@

if 61 not in rule_matches:
    rule_matches[61] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['88']:
    rule_matches[61]['correct_lines'].append(p[0].line)
else:
    rule_matches[61]['other_lines'].append(p[0].line)

@ r62 @
symbol cocci_id;
position p;
@@
 struct page * cocci_id@p ;

@ script:python depends on r62 @
p << r62.p;
@@

if 62 not in rule_matches:
    rule_matches[62] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['18']:
    rule_matches[62]['correct_lines'].append(p[0].line)
else:
    rule_matches[62]['other_lines'].append(p[0].line)

@ r63 @
symbol cocci_id;
position p;
@@
 struct kvm_lapic_irq cocci_id@p ;

@ script:python depends on r63 @
p << r63.p;
@@

if 63 not in rule_matches:
    rule_matches[63] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['76']:
    rule_matches[63]['correct_lines'].append(p[0].line)
else:
    rule_matches[63]['other_lines'].append(p[0].line)

@ r64 @
symbol cocci_id;
position p;
@@
 struct kvm_enc_region * cocci_id@p ;

@ script:python depends on r64 @
p << r64.p;
@@

if 64 not in rule_matches:
    rule_matches[64] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['8']:
    rule_matches[64]['correct_lines'].append(p[0].line)
else:
    rule_matches[64]['other_lines'].append(p[0].line)

@ r65 @
symbol cocci_id;
position p;
@@
 void cocci_id@p ;

@ script:python depends on r65 @
p << r65.p;
@@

if 65 not in rule_matches:
    rule_matches[65] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['58']:
    rule_matches[65]['correct_lines'].append(p[0].line)
else:
    rule_matches[65]['other_lines'].append(p[0].line)

@ r66 @
symbol cocci_id;
position p;
@@
 struct vcpu_svm * * cocci_id@p ;

@ script:python depends on r66 @
p << r66.p;
@@

if 66 not in rule_matches:
    rule_matches[66] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['78']:
    rule_matches[66]['correct_lines'].append(p[0].line)
else:
    rule_matches[66]['other_lines'].append(p[0].line)

@ r67 @
symbol cocci_id;
position p;
typedef u32;
@@
 struct kvm_svm {  struct kvm kvm ;  u32 avic_vm_id ;  struct page * avic_logical_id_table_page ;  struct page * avic_physical_id_table_page ;  struct hlist_node hnode ;  struct kvm_sev_info sev_info ; } cocci_id@p ;

@ script:python depends on r67 @
p << r67.p;
@@

if 67 not in rule_matches:
    rule_matches[67] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['207', '214']:
    rule_matches[67]['correct_lines'].append(p[0].line)
else:
    rule_matches[67]['other_lines'].append(p[0].line)

@ r68 @
symbol cocci_id;
position p;
typedef u8;
@@
 u8 cocci_id@p [ ] ;

@ script:python depends on r68 @
p << r68.p;
@@

if 68 not in rule_matches:
    rule_matches[68] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['113']:
    rule_matches[68]['correct_lines'].append(p[0].line)
else:
    rule_matches[68]['other_lines'].append(p[0].line)

@ r69 @
symbol cocci_id;
position p;
@@
 void * cocci_id@p ;

@ script:python depends on r69 @
p << r69.p;
@@

if 69 not in rule_matches:
    rule_matches[69] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['17']:
    rule_matches[69]['correct_lines'].append(p[0].line)
else:
    rule_matches[69]['other_lines'].append(p[0].line)

@ r70 @
symbol cocci_id;
position p;
@@
 struct enc_region cocci_id@p ;

@ script:python depends on r70 @
p << r70.p;
@@

if 70 not in rule_matches:
    rule_matches[70] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['139']:
    rule_matches[70]['correct_lines'].append(p[0].line)
else:
    rule_matches[70]['other_lines'].append(p[0].line)

@ r71 @
symbol cocci_id;
position p;
@@
 struct list_head * cocci_id@p ;

@ script:python depends on r71 @
p << r71.p;
@@

if 71 not in rule_matches:
    rule_matches[71] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['7']:
    rule_matches[71]['correct_lines'].append(p[0].line)
else:
    rule_matches[71]['other_lines'].append(p[0].line)

@ r72 @
symbol cocci_id;
position p;
typedef u32;
@@
 u32 cocci_id@p ;

@ script:python depends on r72 @
p << r72.p;
@@

if 72 not in rule_matches:
    rule_matches[72] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['227']:
    rule_matches[72]['correct_lines'].append(p[0].line)
else:
    rule_matches[72]['other_lines'].append(p[0].line)

@ r73 @
symbol cocci_id;
position p;
@@
 struct enc_region * cocci_id@p ;

@ script:python depends on r73 @
p << r73.p;
@@

if 73 not in rule_matches:
    rule_matches[73] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['178']:
    rule_matches[73]['correct_lines'].append(p[0].line)
else:
    rule_matches[73]['other_lines'].append(p[0].line)

@ r74 @
symbol cocci_id;
position p;
@@
 struct sev_data_activate * cocci_id@p ;

@ script:python depends on r74 @
p << r74.p;
@@

if 74 not in rule_matches:
    rule_matches[74] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['57']:
    rule_matches[74]['correct_lines'].append(p[0].line)
else:
    rule_matches[74]['other_lines'].append(p[0].line)

@ r75 @
symbol cocci_id;
position p;
@@
 struct kvm_msr_entry * cocci_id@p ;

@ script:python depends on r75 @
p << r75.p;
@@

if 75 not in rule_matches:
    rule_matches[75] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['101']:
    rule_matches[75]['correct_lines'].append(p[0].line)
else:
    rule_matches[75]['other_lines'].append(p[0].line)

@ r76 @
symbol cocci_id;
position p;
@@
 struct svm_cpu_data * cocci_id@p ;

@ script:python depends on r76 @
p << r76.p;
@@

if 76 not in rule_matches:
    rule_matches[76] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['128']:
    rule_matches[76]['correct_lines'].append(p[0].line)
else:
    rule_matches[76]['other_lines'].append(p[0].line)

@ r77 @
symbol cocci_id;
position p;
@@
 struct desc_struct * cocci_id@p ;

@ script:python depends on r77 @
p << r77.p;
@@

if 77 not in rule_matches:
    rule_matches[77] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['3']:
    rule_matches[77]['correct_lines'].append(p[0].line)
else:
    rule_matches[77]['other_lines'].append(p[0].line)

@ r78 @
symbol cocci_id;
position p;
@@
 struct kvm_host_map * cocci_id@p ;

@ script:python depends on r78 @
p << r78.p;
@@

if 78 not in rule_matches:
    rule_matches[78] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['115']:
    rule_matches[78]['correct_lines'].append(p[0].line)
else:
    rule_matches[78]['other_lines'].append(p[0].line)

@ r79 @
symbol cocci_id;
position p;
@@
 struct kvm_sev_launch_measure cocci_id@p ;

@ script:python depends on r79 @
p << r79.p;
@@

if 79 not in rule_matches:
    rule_matches[79] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['41']:
    rule_matches[79]['correct_lines'].append(p[0].line)
else:
    rule_matches[79]['other_lines'].append(p[0].line)

@ r80 @
symbol cocci_id;
position p;
@@
 struct nested_state * cocci_id@p ;

@ script:python depends on r80 @
p << r80.p;
@@

if 80 not in rule_matches:
    rule_matches[80] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['82']:
    rule_matches[80]['correct_lines'].append(p[0].line)
else:
    rule_matches[80]['other_lines'].append(p[0].line)

@ r81 @
symbol cocci_id;
position p;
@@
 struct kvm_sev_launch_start cocci_id@p ;

@ script:python depends on r81 @
p << r81.p;
@@

if 81 not in rule_matches:
    rule_matches[81] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['54']:
    rule_matches[81]['correct_lines'].append(p[0].line)
else:
    rule_matches[81]['other_lines'].append(p[0].line)

@ r82 @
symbol cocci_id;
position p;
typedef u32;
@@
 const u32 cocci_id@p [ ] ;

@ script:python depends on r82 @
p << r82.p;
@@

if 82 not in rule_matches:
    rule_matches[82] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['226']:
    rule_matches[82]['correct_lines'].append(p[0].line)
else:
    rule_matches[82]['other_lines'].append(p[0].line)

@ r83 @
symbol cocci_id;
position p;
@@
 size_t cocci_id@p ;

@ script:python depends on r83 @
p << r83.p;
@@

if 83 not in rule_matches:
    rule_matches[83] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['12']:
    rule_matches[83]['correct_lines'].append(p[0].line)
else:
    rule_matches[83]['other_lines'].append(p[0].line)

@ r84 @
symbol cocci_id;
position p;
@@
 struct sev_data_deactivate * cocci_id@p ;

@ script:python depends on r84 @
p << r84.p;
@@

if 84 not in rule_matches:
    rule_matches[84] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['183']:
    rule_matches[84]['correct_lines'].append(p[0].line)
else:
    rule_matches[84]['other_lines'].append(p[0].line)

@ r85 @
symbol cocci_id;
position p;
@@
 struct vcpu_data * cocci_id@p ;

@ script:python depends on r85 @
p << r85.p;
@@

if 85 not in rule_matches:
    rule_matches[85] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['77']:
    rule_matches[85]['correct_lines'].append(p[0].line)
else:
    rule_matches[85]['other_lines'].append(p[0].line)

@ r86 @
symbol cocci_id;
position p;
typedef uintptr_t;
@@
 uintptr_t cocci_id@p ;

@ script:python depends on r86 @
p << r86.p;
@@

if 86 not in rule_matches:
    rule_matches[86] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['15']:
    rule_matches[86]['correct_lines'].append(p[0].line)
else:
    rule_matches[86]['other_lines'].append(p[0].line)

@ r87 @
symbol cocci_id;
position p;
@@
 struct kvm_sev_dbg cocci_id@p ;

@ script:python depends on r87 @
p << r87.p;
@@

if 87 not in rule_matches:
    rule_matches[87] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['13']:
    rule_matches[87]['correct_lines'].append(p[0].line)
else:
    rule_matches[87]['other_lines'].append(p[0].line)

@ r88 @
symbol cocci_id;
position p;
@@
 int cocci_id@p ( struct vcpu_svm * svm ) ;

@ script:python depends on r88 @
p << r88.p;
@@

if 88 not in rule_matches:
    rule_matches[88] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['107']:
    rule_matches[88]['correct_lines'].append(p[0].line)
else:
    rule_matches[88]['other_lines'].append(p[0].line)

@ r89 @
symbol cocci_id;
position p;
@@
 struct kvm_segment * cocci_id@p ;

@ script:python depends on r89 @
p << r89.p;
@@

if 89 not in rule_matches:
    rule_matches[89] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['135']:
    rule_matches[89]['correct_lines'].append(p[0].line)
else:
    rule_matches[89]['other_lines'].append(p[0].line)

@ r90 @
symbol cocci_id;
position p;
@@
 struct kvm_vcpu * cocci_id@p ;

@ script:python depends on r90 @
p << r90.p;
@@

if 90 not in rule_matches:
    rule_matches[90] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['224']:
    rule_matches[90]['correct_lines'].append(p[0].line)
else:
    rule_matches[90]['other_lines'].append(p[0].line)

@ r91 @
symbol cocci_id;
position p;
@@
 struct kvm_vcpu cocci_id@p ;

@ script:python depends on r91 @
p << r91.p;
@@

if 91 not in rule_matches:
    rule_matches[91] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['202']:
    rule_matches[91]['correct_lines'].append(p[0].line)
else:
    rule_matches[91]['other_lines'].append(p[0].line)

@ r92 @
symbol cocci_id;
position p;
@@
 char * cocci_id@p ;

@ script:python depends on r92 @
p << r92.p;
@@

if 92 not in rule_matches:
    rule_matches[92] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['59']:
    rule_matches[92]['correct_lines'].append(p[0].line)
else:
    rule_matches[92]['other_lines'].append(p[0].line)

@ r93 @
symbol cocci_id;
position p;
@@
 struct msr_data * cocci_id@p ;

@ script:python depends on r93 @
p << r93.p;
@@

if 93 not in rule_matches:
    rule_matches[93] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['100']:
    rule_matches[93]['correct_lines'].append(p[0].line)
else:
    rule_matches[93]['other_lines'].append(p[0].line)

@ r94 @
symbol cocci_id;
position p;
@@
 struct desc_ptr * cocci_id@p ;

@ script:python depends on r94 @
p << r94.p;
@@

if 94 not in rule_matches:
    rule_matches[94] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['134']:
    rule_matches[94]['correct_lines'].append(p[0].line)
else:
    rule_matches[94]['other_lines'].append(p[0].line)

@ r95 @
symbol cocci_id;
position p;
@@
 struct kvm_x86_ops cocci_id@p ;

@ script:python depends on r95 @
p << r95.p;
@@

if 95 not in rule_matches:
    rule_matches[95] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['6']:
    rule_matches[95]['correct_lines'].append(p[0].line)
else:
    rule_matches[95]['other_lines'].append(p[0].line)

@ r96 @
symbol cocci_id;
position p;
@@
 struct kvm * cocci_id@p ;

@ script:python depends on r96 @
p << r96.p;
@@

if 96 not in rule_matches:
    rule_matches[96] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['21']:
    rule_matches[96]['correct_lines'].append(p[0].line)
else:
    rule_matches[96]['other_lines'].append(p[0].line)

@ r97 @
symbol cocci_id;
position p;
@@
 void cocci_id@p ( struct kvm_vcpu * vcpu , unsigned long cr0 ) ;

@ script:python depends on r97 @
p << r97.p;
@@

if 97 not in rule_matches:
    rule_matches[97] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['111', '112']:
    rule_matches[97]['correct_lines'].append(p[0].line)
else:
    rule_matches[97]['other_lines'].append(p[0].line)

@ r98 @
symbol cocci_id;
position p;
typedef u64,bool,u32;
@@
 struct nested_state {  struct vmcb * hsave ;  u64 hsave_msr ;  u64 vm_cr_msr ;  u64 vmcb ;  u32 * msrpm ;  u64 vmcb_msrpm ;  u64 vmcb_iopm ;  bool exit_required ;  u32 intercept_cr ;  u32 intercept_dr ;  u32 intercept_exceptions ;  u64 intercept ;  u64 nested_cr3 ; } cocci_id@p ;

@ script:python depends on r98 @
p << r98.p;
@@

if 98 not in rule_matches:
    rule_matches[98] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['187', '201']:
    rule_matches[98]['correct_lines'].append(p[0].line)
else:
    rule_matches[98]['other_lines'].append(p[0].line)

@ r99 @
symbol cocci_id;
position p;
@@
 int cocci_id@p ( void ) ;

@ script:python depends on r99 @
p << r99.p;
@@

if 99 not in rule_matches:
    rule_matches[99] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['99']:
    rule_matches[99]['correct_lines'].append(p[0].line)
else:
    rule_matches[99]['other_lines'].append(p[0].line)

@ r100 @
symbol cocci_id;
position p;
@@
 struct vcpu_svm * cocci_id@p ;

@ script:python depends on r100 @
p << r100.p;
@@

if 100 not in rule_matches:
    rule_matches[100] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['122']:
    rule_matches[100]['correct_lines'].append(p[0].line)
else:
    rule_matches[100]['other_lines'].append(p[0].line)

@ r101 @
symbol cocci_id;
position p;
typedef u64;
@@
 u64 * cocci_id@p ;

@ script:python depends on r101 @
p << r101.p;
@@

if 101 not in rule_matches:
    rule_matches[101] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['186']:
    rule_matches[101]['correct_lines'].append(p[0].line)
else:
    rule_matches[101]['other_lines'].append(p[0].line)

@ r102 @
symbol cocci_id;
position p;
@@
 struct x86_instruction_info * cocci_id@p ;

@ script:python depends on r102 @
p << r102.p;
@@

if 102 not in rule_matches:
    rule_matches[102] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['62']:
    rule_matches[102]['correct_lines'].append(p[0].line)
else:
    rule_matches[102]['other_lines'].append(p[0].line)

@ r103 @
symbol cocci_id;
position p;
typedef u16;
@@
 u16 cocci_id@p ;

@ script:python depends on r103 @
p << r103.p;
@@

if 103 not in rule_matches:
    rule_matches[103] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['119']:
    rule_matches[103]['correct_lines'].append(p[0].line)
else:
    rule_matches[103]['other_lines'].append(p[0].line)

@ r104 @
symbol cocci_id;
position p;
@@
 struct amd_svm_iommu_ir cocci_id@p ;

@ script:python depends on r104 @
p << r104.p;
@@

if 104 not in rule_matches:
    rule_matches[104] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['80']:
    rule_matches[104]['correct_lines'].append(p[0].line)
else:
    rule_matches[104]['other_lines'].append(p[0].line)

@ r105 @
symbol cocci_id;
position p;
typedef phys_addr_t;
@@
 phys_addr_t cocci_id@p ;

@ script:python depends on r105 @
p << r105.p;
@@

if 105 not in rule_matches:
    rule_matches[105] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['203']:
    rule_matches[105]['correct_lines'].append(p[0].line)
else:
    rule_matches[105]['other_lines'].append(p[0].line)

@ r106 @
symbol cocci_id;
position p;
@@
 ulong cocci_id@p ;

@ script:python depends on r106 @
p << r106.p;
@@

if 106 not in rule_matches:
    rule_matches[106] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['133']:
    rule_matches[106]['correct_lines'].append(p[0].line)
else:
    rule_matches[106]['other_lines'].append(p[0].line)

@ r107 @
symbol cocci_id;
position p;
@@
 struct sev_data_launch_update_data * cocci_id@p ;

@ script:python depends on r107 @
p << r107.p;
@@

if 107 not in rule_matches:
    rule_matches[107] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['51']:
    rule_matches[107]['correct_lines'].append(p[0].line)
else:
    rule_matches[107]['other_lines'].append(p[0].line)

@ r108 @
symbol cocci_id;
position p;
@@
 unsigned short cocci_id@p ;

@ script:python depends on r108 @
p << r108.p;
@@

if 108 not in rule_matches:
    rule_matches[108] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['116']:
    rule_matches[108]['correct_lines'].append(p[0].line)
else:
    rule_matches[108]['other_lines'].append(p[0].line)

@ r109 @
symbol cocci_id;
position p;
@@
 enum kvm_reg cocci_id@p ;

@ script:python depends on r109 @
p << r109.p;
@@

if 109 not in rule_matches:
    rule_matches[109] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['136']:
    rule_matches[109]['correct_lines'].append(p[0].line)
else:
    rule_matches[109]['other_lines'].append(p[0].line)

@ r110 @
symbol cocci_id;
position p;
@@
 struct kvm_sev_cmd * cocci_id@p ;

@ script:python depends on r110 @
p << r110.p;
@@

if 110 not in rule_matches:
    rule_matches[110] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['14']:
    rule_matches[110]['correct_lines'].append(p[0].line)
else:
    rule_matches[110]['other_lines'].append(p[0].line)

@ r111 @
symbol cocci_id;
position p;
@@
 struct vmcb_seg * cocci_id@p ;

@ script:python depends on r111 @
p << r111.p;
@@

if 111 not in rule_matches:
    rule_matches[111] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['206']:
    rule_matches[111]['correct_lines'].append(p[0].line)
else:
    rule_matches[111]['other_lines'].append(p[0].line)

@ r112 @
symbol cocci_id;
position p;
typedef bool;
@@
 void cocci_id@p ( struct kvm_vcpu * vcpu , bool invalidate_gpa ) ;

@ script:python depends on r112 @
p << r112.p;
@@

if 112 not in rule_matches:
    rule_matches[112] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['109', '110']:
    rule_matches[112]['correct_lines'].append(p[0].line)
else:
    rule_matches[112]['other_lines'].append(p[0].line)

@ r113 @
symbol cocci_id;
position p;
@@
 struct amd_svm_iommu_ir {  struct list_head node ;  void * data ; } cocci_id@p ;

@ script:python depends on r113 @
p << r113.p;
@@

if 113 not in rule_matches:
    rule_matches[113] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['129', '132']:
    rule_matches[113]['correct_lines'].append(p[0].line)
else:
    rule_matches[113]['other_lines'].append(p[0].line)

@ r114 @
symbol cocci_id;
position p;
@@
 struct amd_iommu_pi_data * cocci_id@p ;

@ script:python depends on r114 @
p << r114.p;
@@

if 114 not in rule_matches:
    rule_matches[114] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['81']:
    rule_matches[114]['correct_lines'].append(p[0].line)
else:
    rule_matches[114]['other_lines'].append(p[0].line)

@ r115 @
symbol cocci_id;
position p;
@@
 struct sev_data_launch_secret * cocci_id@p ;

@ script:python depends on r115 @
p << r115.p;
@@

if 115 not in rule_matches:
    rule_matches[115] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['11']:
    rule_matches[115]['correct_lines'].append(p[0].line)
else:
    rule_matches[115]['other_lines'].append(p[0].line)

@ r116 @
symbol cocci_id;
position p;
@@
 struct vcpu_data cocci_id@p ;

@ script:python depends on r116 @
p << r116.p;
@@

if 116 not in rule_matches:
    rule_matches[116] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['74']:
    rule_matches[116]['correct_lines'].append(p[0].line)
else:
    rule_matches[116]['other_lines'].append(p[0].line)

@ r117 @
symbol cocci_id;
position p;
@@
 struct kvm_run * cocci_id@p ;

@ script:python depends on r117 @
p << r117.p;
@@

if 117 not in rule_matches:
    rule_matches[117] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['123']:
    rule_matches[117]['correct_lines'].append(p[0].line)
else:
    rule_matches[117]['other_lines'].append(p[0].line)

@ r118 @
symbol cocci_id;
position p;
@@
 struct kvm_kernel_irq_routing_entry * cocci_id@p ;

@ script:python depends on r118 @
p << r118.p;
@@

if 118 not in rule_matches:
    rule_matches[118] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['79']:
    rule_matches[118]['correct_lines'].append(p[0].line)
else:
    rule_matches[118]['other_lines'].append(p[0].line)

@ finalize:python @
@@
rules = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118]
for i in rules:
    if i not in rule_matches:
        print("FAILED %s: NO MATCHES" % (str(i)))
        continue
    elif rule_matches[i]['correct_lines']:
        if rule_matches[i]['other_lines']:
            print("PASSED %s: CORRECT MATCHES: %s INCORRECT MATCHES: %s" % (str(i), str(rule_matches[i]['correct_lines']), str(rule_matches[i]['other_lines'])))
        else:
            print("PASSED %s: CORRECT MATCHES: %s" % (str(i), str(rule_matches[i]['correct_lines'])))
    elif rule_matches[i]['other_lines']:
        print("FAILED %s: INCORRECT MATCHES: %s" % (str(i), str(rule_matches[i]['other_lines'])))
    else:
        print("UNDEFINED %s" % str(i))

print("Total Number of cases: %s" % str(len(rules)))
