#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
211,
220,
221,
222,
223,
224,
225,
226,
228,
229,
303,
304,
305,
334,
335,
336,
356,
357,
358,
359,
450,
451,
452,
455,
491,
492,
494,
496,
498,
500,
505,
513,
514,
515,
516,
517,
518,
519,
520,
521,
615,
616,
681,
687,
690,
692,
697,
698,
700,
701,
705,
706,
708,
710,
711,
714,
715,
716,
719,
721,
724,
726,
728,
737,
800,
802,
804,
814,
815,
816,
817,
819,
826,
827,
828,
829,
830,
838,
839,
840,
844,
845,
847,
849,
1042,
1220,
1221,
6876,
6877,
6879,
6880,
6881,
6882,
6883,
6885,
6887,
6889,
6890,
6900,
6902,
6907,
6909,
6911,
6913,
6964,
6965,
6967,
6968,
6969,
6970,
6971,
6973,
6975,
7969,
7973,
7975,
7976,
7977,
7978,
8227,
8228,
8229,
8230,
8248,
8249,
8250,
8252,
8295,
8363,
8365,
8367,
8376,
8377,
8378,
8379,
8826,
8831,
8832,
8859,
8878,
8885,
8892,
8903,
8906,
8930,
9009,
9011,
9020,
9022,
9023,
9030,
9044,
9064,
9065,
9073,
9075,
9082,
9083,
9086,
9088,
9093,
9099,
9100,
9107,
9109,
9121,
9124,
9125,
9126,
9137,
9146,
9152,
9153,
9154,
9156,
9157,
9174,
9176,
9190,
9207,
9232,
9237,
9264,
9265,
9755,
9847,
9848,
10050,
10051,
10058,
10059,
10060,
10065,
10139,
10592,
10593,
10973,
10983,
11653,
11674,
11676,
11678,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal (int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy (int,int,int,int,int);
int ves_icall_System_Array_GetLengthInternal_raw (int,int,int);
int ves_icall_System_Array_GetLowerBoundInternal_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
void ves_icall_System_Array_GetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
void ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
void ves_icall_System_Enum_InternalBoxEnum_raw (int,int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
void ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw (int,int,int);
void ves_icall_RuntimeMethodHandle_ReboxToNullable_raw (int,int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_System_RuntimeType_AllocateValueType_raw (int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsComObject_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
int64_t ves_icall_System_Threading_Interlocked_Add_Long (int,int64_t);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw (int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_LoaderAllocatorScout_Destroy (int);
void ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
void ves_icall_InvokeClassConstructor_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
int ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_StackFrame_GetFrameInfo (int,int,int,int,int,int,int,int);
void ves_icall_System_Diagnostics_StackTrace_GetTrace (int,int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 211,
ves_icall_System_Array_InternalCreate,
// token 220,
ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal,
// token 221,
ves_icall_System_Array_CanChangePrimitive,
// token 222,
ves_icall_System_Array_FastCopy,
// token 223,
ves_icall_System_Array_GetLengthInternal_raw,
// token 224,
ves_icall_System_Array_GetLowerBoundInternal_raw,
// token 225,
ves_icall_System_Array_GetGenericValue_icall,
// token 226,
ves_icall_System_Array_GetValueImpl_raw,
// token 228,
ves_icall_System_Array_SetValueImpl_raw,
// token 229,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 303,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 304,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 305,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 334,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 335,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 336,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 356,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 357,
ves_icall_System_Enum_InternalBoxEnum_raw,
// token 358,
ves_icall_System_Enum_InternalGetCorElementType,
// token 359,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 450,
ves_icall_System_Environment_get_ProcessorCount,
// token 451,
ves_icall_System_Environment_get_TickCount,
// token 452,
ves_icall_System_Environment_get_TickCount64,
// token 455,
ves_icall_System_Environment_FailFast_raw,
// token 491,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 492,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 494,
ves_icall_System_GC_SuppressFinalize_raw,
// token 496,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 498,
ves_icall_System_GC_GetGCMemoryInfo,
// token 500,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 505,
ves_icall_System_Object_MemberwiseClone_raw,
// token 513,
ves_icall_System_Math_Ceiling,
// token 514,
ves_icall_System_Math_Cos,
// token 515,
ves_icall_System_Math_Floor,
// token 516,
ves_icall_System_Math_Log10,
// token 517,
ves_icall_System_Math_Pow,
// token 518,
ves_icall_System_Math_Sin,
// token 519,
ves_icall_System_Math_Sqrt,
// token 520,
ves_icall_System_Math_Tan,
// token 521,
ves_icall_System_Math_ModF,
// token 615,
ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw,
// token 616,
ves_icall_RuntimeMethodHandle_ReboxToNullable_raw,
// token 681,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 687,
ves_icall_RuntimeType_make_array_type_raw,
// token 690,
ves_icall_RuntimeType_make_byref_type_raw,
// token 692,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 697,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 698,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 700,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 701,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 705,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 706,
ves_icall_System_RuntimeType_AllocateValueType_raw,
// token 708,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 710,
ves_icall_System_RuntimeType_getFullName_raw,
// token 711,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 714,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 715,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 716,
ves_icall_RuntimeType_GetFields_native_raw,
// token 719,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 721,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 724,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 726,
ves_icall_RuntimeType_GetName_raw,
// token 728,
ves_icall_RuntimeType_GetNamespace_raw,
// token 737,
ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw,
// token 800,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 802,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 804,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 814,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 815,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 816,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 817,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 819,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 826,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 827,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 828,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 829,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 830,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 838,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 839,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 840,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 844,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 845,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 847,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 849,
ves_icall_System_String_FastAllocateString_raw,
// token 1042,
ves_icall_System_Type_internal_from_handle_raw,
// token 1220,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1221,
ves_icall_System_ValueType_Equals_raw,
// token 6876,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 6877,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 6879,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 6880,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 6881,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 6882,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 6883,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 6885,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 6887,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 6889,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 6890,
ves_icall_System_Threading_Interlocked_Add_Long,
// token 6900,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 6902,
mono_monitor_exit_icall_raw,
// token 6907,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 6909,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 6911,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 6913,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 6964,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 6965,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 6967,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 6968,
ves_icall_System_Threading_Thread_GetState_raw,
// token 6969,
ves_icall_System_Threading_Thread_SetState_raw,
// token 6970,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 6971,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 6973,
ves_icall_System_Threading_Thread_YieldInternal,
// token 6975,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 7969,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 7973,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 7975,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 7976,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 7977,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 7978,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 8227,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 8228,
ves_icall_System_GCHandle_InternalFree_raw,
// token 8229,
ves_icall_System_GCHandle_InternalGet_raw,
// token 8230,
ves_icall_System_GCHandle_InternalSet_raw,
// token 8248,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 8249,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 8250,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 8252,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 8295,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 8363,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
// token 8365,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw,
// token 8367,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 8376,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 8377,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 8378,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
// token 8379,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 8826,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 8831,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 8832,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 8859,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 8878,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 8885,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 8892,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 8903,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 8906,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 8930,
ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
// token 9009,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 9011,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 9020,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 9022,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 9023,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 9030,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 9044,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 9064,
ves_icall_reflection_get_token_raw,
// token 9065,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 9073,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 9075,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 9082,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 9083,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 9086,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 9088,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 9093,
ves_icall_reflection_get_token_raw,
// token 9099,
ves_icall_get_method_info_raw,
// token 9100,
ves_icall_get_method_attributes,
// token 9107,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 9109,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 9121,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 9124,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 9125,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 9126,
ves_icall_reflection_get_token_raw,
// token 9137,
ves_icall_InternalInvoke_raw,
// token 9146,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 9152,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 9153,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 9154,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 9156,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 9157,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 9174,
ves_icall_InvokeClassConstructor_raw,
// token 9176,
ves_icall_InternalInvoke_raw,
// token 9190,
ves_icall_reflection_get_token_raw,
// token 9207,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 9232,
ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw,
// token 9237,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 9264,
ves_icall_reflection_get_token_raw,
// token 9265,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 9755,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 9847,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 9848,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 10050,
ves_icall_ModuleBuilder_basic_init_raw,
// token 10051,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 10058,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 10059,
ves_icall_ModuleBuilder_getToken_raw,
// token 10060,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 10065,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 10139,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 10592,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 10593,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 10973,
ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
// token 10983,
ves_icall_System_Diagnostics_StackTrace_GetTrace,
// token 11653,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 11674,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 11676,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 11678,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_flags [] = {
0,
0,
0,
0,
4,
4,
0,
4,
4,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
};
