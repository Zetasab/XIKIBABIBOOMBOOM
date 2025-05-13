#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
181,
189,
190,
191,
192,
193,
194,
195,
197,
198,
245,
246,
247,
271,
272,
273,
284,
285,
286,
287,
374,
375,
376,
379,
410,
411,
413,
415,
417,
419,
424,
432,
433,
434,
435,
436,
437,
438,
439,
440,
520,
521,
573,
579,
582,
584,
589,
590,
592,
593,
597,
598,
600,
602,
603,
606,
607,
608,
611,
614,
616,
618,
627,
683,
685,
687,
697,
698,
699,
701,
707,
708,
709,
710,
711,
719,
720,
721,
725,
726,
728,
730,
916,
1064,
1065,
6487,
6488,
6490,
6491,
6492,
6493,
6494,
6496,
6498,
6500,
6508,
6510,
6515,
6517,
6519,
6521,
6572,
6573,
6575,
6576,
6577,
6578,
6579,
6581,
6583,
7457,
7461,
7463,
7464,
7465,
7466,
7660,
7661,
7662,
7663,
7679,
7680,
7681,
7683,
7724,
7792,
7794,
7803,
7804,
7805,
7806,
8194,
8198,
8199,
8225,
8242,
8249,
8256,
8267,
8270,
8290,
8361,
8363,
8372,
8374,
8375,
8382,
8396,
8416,
8417,
8425,
8427,
8434,
8435,
8438,
8440,
8445,
8451,
8452,
8459,
8461,
8473,
8476,
8477,
8478,
8489,
8498,
8504,
8505,
8506,
8508,
8509,
8526,
8528,
8542,
8559,
8586,
8611,
8612,
9031,
9114,
9115,
9259,
9260,
9264,
9267,
9329,
9685,
9686,
9902,
9912,
10478,
10499,
10501,
10503,
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
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
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
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
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
// token 181,
ves_icall_System_Array_InternalCreate,
// token 189,
ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal,
// token 190,
ves_icall_System_Array_CanChangePrimitive,
// token 191,
ves_icall_System_Array_FastCopy,
// token 192,
ves_icall_System_Array_GetLengthInternal_raw,
// token 193,
ves_icall_System_Array_GetLowerBoundInternal_raw,
// token 194,
ves_icall_System_Array_GetGenericValue_icall,
// token 195,
ves_icall_System_Array_GetValueImpl_raw,
// token 197,
ves_icall_System_Array_SetValueImpl_raw,
// token 198,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 245,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 246,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 247,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 271,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 272,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 273,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 284,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 285,
ves_icall_System_Enum_InternalBoxEnum_raw,
// token 286,
ves_icall_System_Enum_InternalGetCorElementType,
// token 287,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 374,
ves_icall_System_Environment_get_ProcessorCount,
// token 375,
ves_icall_System_Environment_get_TickCount,
// token 376,
ves_icall_System_Environment_get_TickCount64,
// token 379,
ves_icall_System_Environment_FailFast_raw,
// token 410,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 411,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 413,
ves_icall_System_GC_SuppressFinalize_raw,
// token 415,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 417,
ves_icall_System_GC_GetGCMemoryInfo,
// token 419,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 424,
ves_icall_System_Object_MemberwiseClone_raw,
// token 432,
ves_icall_System_Math_Ceiling,
// token 433,
ves_icall_System_Math_Cos,
// token 434,
ves_icall_System_Math_Floor,
// token 435,
ves_icall_System_Math_Log10,
// token 436,
ves_icall_System_Math_Pow,
// token 437,
ves_icall_System_Math_Sin,
// token 438,
ves_icall_System_Math_Sqrt,
// token 439,
ves_icall_System_Math_Tan,
// token 440,
ves_icall_System_Math_ModF,
// token 520,
ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw,
// token 521,
ves_icall_RuntimeMethodHandle_ReboxToNullable_raw,
// token 573,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 579,
ves_icall_RuntimeType_make_array_type_raw,
// token 582,
ves_icall_RuntimeType_make_byref_type_raw,
// token 584,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 589,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 590,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 592,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 593,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 597,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 598,
ves_icall_System_RuntimeType_AllocateValueType_raw,
// token 600,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 602,
ves_icall_System_RuntimeType_getFullName_raw,
// token 603,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 606,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 607,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 608,
ves_icall_RuntimeType_GetFields_native_raw,
// token 611,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 614,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 616,
ves_icall_RuntimeType_GetName_raw,
// token 618,
ves_icall_RuntimeType_GetNamespace_raw,
// token 627,
ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw,
// token 683,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 685,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 687,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 697,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 698,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 699,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 701,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 707,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 708,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 709,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 710,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 711,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 719,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 720,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 721,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 725,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 726,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 728,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 730,
ves_icall_System_String_FastAllocateString_raw,
// token 916,
ves_icall_System_Type_internal_from_handle_raw,
// token 1064,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1065,
ves_icall_System_ValueType_Equals_raw,
// token 6487,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 6488,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 6490,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 6491,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 6492,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 6493,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 6494,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 6496,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 6498,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 6500,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 6508,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 6510,
mono_monitor_exit_icall_raw,
// token 6515,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 6517,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 6519,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 6521,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 6572,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 6573,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 6575,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 6576,
ves_icall_System_Threading_Thread_GetState_raw,
// token 6577,
ves_icall_System_Threading_Thread_SetState_raw,
// token 6578,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 6579,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 6581,
ves_icall_System_Threading_Thread_YieldInternal,
// token 6583,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 7457,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 7461,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 7463,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 7464,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 7465,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 7466,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 7660,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 7661,
ves_icall_System_GCHandle_InternalFree_raw,
// token 7662,
ves_icall_System_GCHandle_InternalGet_raw,
// token 7663,
ves_icall_System_GCHandle_InternalSet_raw,
// token 7679,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 7680,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 7681,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 7683,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 7724,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 7792,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
// token 7794,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw,
// token 7803,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 7804,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 7805,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
// token 7806,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 8194,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 8198,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 8199,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 8225,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 8242,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 8249,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 8256,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 8267,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 8270,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 8290,
ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
// token 8361,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 8363,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 8372,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 8374,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 8375,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 8382,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 8396,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 8416,
ves_icall_reflection_get_token_raw,
// token 8417,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 8425,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 8427,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 8434,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 8435,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 8438,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 8440,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 8445,
ves_icall_reflection_get_token_raw,
// token 8451,
ves_icall_get_method_info_raw,
// token 8452,
ves_icall_get_method_attributes,
// token 8459,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 8461,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 8473,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 8476,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 8477,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 8478,
ves_icall_reflection_get_token_raw,
// token 8489,
ves_icall_InternalInvoke_raw,
// token 8498,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 8504,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 8505,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 8506,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 8508,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 8509,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 8526,
ves_icall_InvokeClassConstructor_raw,
// token 8528,
ves_icall_InternalInvoke_raw,
// token 8542,
ves_icall_reflection_get_token_raw,
// token 8559,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 8586,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 8611,
ves_icall_reflection_get_token_raw,
// token 8612,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 9031,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 9114,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 9115,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 9259,
ves_icall_ModuleBuilder_basic_init_raw,
// token 9260,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 9264,
ves_icall_ModuleBuilder_getToken_raw,
// token 9267,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 9329,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 9685,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 9686,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 9902,
ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
// token 9912,
ves_icall_System_Diagnostics_StackTrace_GetTrace,
// token 10478,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 10499,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 10501,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 10503,
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
0,
0,
0,
0,
0,
0,
};
