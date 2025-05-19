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
300,
301,
302,
331,
332,
333,
353,
354,
355,
356,
443,
444,
445,
448,
484,
485,
487,
489,
491,
493,
498,
506,
507,
508,
509,
510,
511,
512,
513,
514,
608,
609,
674,
680,
683,
685,
690,
691,
693,
694,
698,
699,
701,
703,
704,
707,
708,
709,
712,
714,
717,
719,
721,
730,
793,
795,
797,
807,
808,
809,
810,
812,
819,
820,
821,
822,
823,
831,
832,
833,
837,
838,
840,
842,
1033,
1211,
1212,
6874,
6875,
6877,
6878,
6879,
6880,
6881,
6883,
6885,
6887,
6888,
6896,
6898,
6903,
6905,
6907,
6909,
6960,
6961,
6963,
6964,
6965,
6966,
6967,
6969,
6971,
7965,
7969,
7971,
7972,
7973,
7974,
8223,
8224,
8225,
8226,
8244,
8245,
8246,
8248,
8291,
8359,
8361,
8363,
8372,
8373,
8374,
8375,
8822,
8827,
8828,
8855,
8874,
8881,
8888,
8899,
8902,
8926,
9005,
9007,
9016,
9018,
9019,
9026,
9040,
9060,
9061,
9069,
9071,
9078,
9079,
9082,
9084,
9089,
9095,
9096,
9103,
9105,
9117,
9120,
9121,
9122,
9133,
9142,
9148,
9149,
9150,
9152,
9153,
9170,
9172,
9186,
9203,
9228,
9233,
9260,
9261,
9750,
9842,
9843,
10045,
10046,
10053,
10054,
10055,
10060,
10134,
10587,
10588,
10968,
10978,
11649,
11670,
11672,
11674,
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
// token 300,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 301,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 302,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 331,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 332,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 333,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 353,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 354,
ves_icall_System_Enum_InternalBoxEnum_raw,
// token 355,
ves_icall_System_Enum_InternalGetCorElementType,
// token 356,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 443,
ves_icall_System_Environment_get_ProcessorCount,
// token 444,
ves_icall_System_Environment_get_TickCount,
// token 445,
ves_icall_System_Environment_get_TickCount64,
// token 448,
ves_icall_System_Environment_FailFast_raw,
// token 484,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 485,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 487,
ves_icall_System_GC_SuppressFinalize_raw,
// token 489,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 491,
ves_icall_System_GC_GetGCMemoryInfo,
// token 493,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 498,
ves_icall_System_Object_MemberwiseClone_raw,
// token 506,
ves_icall_System_Math_Ceiling,
// token 507,
ves_icall_System_Math_Cos,
// token 508,
ves_icall_System_Math_Floor,
// token 509,
ves_icall_System_Math_Log10,
// token 510,
ves_icall_System_Math_Pow,
// token 511,
ves_icall_System_Math_Sin,
// token 512,
ves_icall_System_Math_Sqrt,
// token 513,
ves_icall_System_Math_Tan,
// token 514,
ves_icall_System_Math_ModF,
// token 608,
ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw,
// token 609,
ves_icall_RuntimeMethodHandle_ReboxToNullable_raw,
// token 674,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 680,
ves_icall_RuntimeType_make_array_type_raw,
// token 683,
ves_icall_RuntimeType_make_byref_type_raw,
// token 685,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 690,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 691,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 693,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 694,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 698,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 699,
ves_icall_System_RuntimeType_AllocateValueType_raw,
// token 701,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 703,
ves_icall_System_RuntimeType_getFullName_raw,
// token 704,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 707,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 708,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 709,
ves_icall_RuntimeType_GetFields_native_raw,
// token 712,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 714,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 717,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 719,
ves_icall_RuntimeType_GetName_raw,
// token 721,
ves_icall_RuntimeType_GetNamespace_raw,
// token 730,
ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw,
// token 793,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 795,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 797,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 807,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 808,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 809,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 810,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 812,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 819,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 820,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 821,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 822,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 823,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 831,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 832,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 833,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 837,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 838,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 840,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 842,
ves_icall_System_String_FastAllocateString_raw,
// token 1033,
ves_icall_System_Type_internal_from_handle_raw,
// token 1211,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1212,
ves_icall_System_ValueType_Equals_raw,
// token 6874,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 6875,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 6877,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 6878,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 6879,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 6880,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 6881,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 6883,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 6885,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 6887,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 6888,
ves_icall_System_Threading_Interlocked_Add_Long,
// token 6896,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 6898,
mono_monitor_exit_icall_raw,
// token 6903,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 6905,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 6907,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 6909,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 6960,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 6961,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 6963,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 6964,
ves_icall_System_Threading_Thread_GetState_raw,
// token 6965,
ves_icall_System_Threading_Thread_SetState_raw,
// token 6966,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 6967,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 6969,
ves_icall_System_Threading_Thread_YieldInternal,
// token 6971,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 7965,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 7969,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 7971,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 7972,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 7973,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 7974,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 8223,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 8224,
ves_icall_System_GCHandle_InternalFree_raw,
// token 8225,
ves_icall_System_GCHandle_InternalGet_raw,
// token 8226,
ves_icall_System_GCHandle_InternalSet_raw,
// token 8244,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 8245,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 8246,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 8248,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 8291,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 8359,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
// token 8361,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw,
// token 8363,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 8372,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 8373,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 8374,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
// token 8375,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 8822,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 8827,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 8828,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 8855,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 8874,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 8881,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 8888,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 8899,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 8902,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 8926,
ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
// token 9005,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 9007,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 9016,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 9018,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 9019,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 9026,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 9040,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 9060,
ves_icall_reflection_get_token_raw,
// token 9061,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 9069,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 9071,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 9078,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 9079,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 9082,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 9084,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 9089,
ves_icall_reflection_get_token_raw,
// token 9095,
ves_icall_get_method_info_raw,
// token 9096,
ves_icall_get_method_attributes,
// token 9103,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 9105,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 9117,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 9120,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 9121,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 9122,
ves_icall_reflection_get_token_raw,
// token 9133,
ves_icall_InternalInvoke_raw,
// token 9142,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 9148,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 9149,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 9150,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 9152,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 9153,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 9170,
ves_icall_InvokeClassConstructor_raw,
// token 9172,
ves_icall_InternalInvoke_raw,
// token 9186,
ves_icall_reflection_get_token_raw,
// token 9203,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 9228,
ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw,
// token 9233,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 9260,
ves_icall_reflection_get_token_raw,
// token 9261,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 9750,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 9842,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 9843,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 10045,
ves_icall_ModuleBuilder_basic_init_raw,
// token 10046,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 10053,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 10054,
ves_icall_ModuleBuilder_getToken_raw,
// token 10055,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 10060,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 10134,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 10587,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 10588,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 10968,
ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
// token 10978,
ves_icall_System_Diagnostics_StackTrace_GetTrace,
// token 11649,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 11670,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 11672,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 11674,
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
