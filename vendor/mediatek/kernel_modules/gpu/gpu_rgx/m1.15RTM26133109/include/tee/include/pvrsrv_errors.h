/*************************************************************************/ /*!
@File           pvrsrv_errors.h
@Title          services error codes
@Copyright      Copyright (c) Imagination Technologies Ltd. All Rights Reserved
@Description    Defines error codes used by any/all services modules
@License        Dual MIT/GPLv2

The contents of this file are subject to the MIT license as set out below.

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

Alternatively, the contents of this file may be used under the terms of
the GNU General Public License Version 2 ("GPL") in which case the provisions
of GPL are applicable instead of those above.

If you wish to allow use of your version of this file only under the terms of
GPL, and not to allow others to use your version of this file under the terms
of the MIT license, indicate your decision by deleting the provisions above
and replace them with the notice and other provisions required by GPL as set
out in the file called "GPL-COPYING" included in this distribution. If you do
not delete the provisions above, a recipient may use your version of this file
under the terms of either the MIT license or GPL.

This License is also included in this distribution in the file called
"MIT-COPYING".

EXCEPT AS OTHERWISE STATED IN A NEGOTIATED AGREEMENT: (A) THE SOFTWARE IS
PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING
BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR
PURPOSE AND NONINFRINGEMENT; AND (B) IN NO EVENT SHALL THE AUTHORS OR
COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/ /**************************************************************************/

/* Don't add include guards to this file! */

PVRE(PVRSRV_ERROR_OUT_OF_MEMORY)
PVRE(PVRSRV_ERROR_TOO_FEW_BUFFERS)
PVRE(PVRSRV_ERROR_INVALID_PARAMS)
PVRE(PVRSRV_ERROR_INIT_FAILURE)
PVRE(PVRSRV_ERROR_CANT_REGISTER_CALLBACK)
PVRE(PVRSRV_ERROR_INVALID_DEVICE)
PVRE(PVRSRV_ERROR_NOT_OWNER)
PVRE(PVRSRV_ERROR_BAD_MAPPING)
PVRE(PVRSRV_ERROR_TIMEOUT)
PVRE(PVRSRV_ERROR_NOT_IMPLEMENTED)
PVRE(PVRSRV_ERROR_FLIP_CHAIN_EXISTS)
PVRE(PVRSRV_ERROR_INVALID_SWAPINTERVAL)
PVRE(PVRSRV_ERROR_SCENE_INVALID)
PVRE(PVRSRV_ERROR_STREAM_ERROR)
PVRE(PVRSRV_ERROR_FAILED_DEPENDENCIES)
PVRE(PVRSRV_ERROR_CMD_NOT_PROCESSED)
PVRE(PVRSRV_ERROR_CMD_TOO_BIG)
PVRE(PVRSRV_ERROR_DEVICE_REGISTER_FAILED)
PVRE(PVRSRV_ERROR_TOOMANYBUFFERS)
PVRE(PVRSRV_ERROR_NOT_SUPPORTED)
PVRE(PVRSRV_ERROR_PROCESSING_BLOCKED)
PVRE(PVRSRV_ERROR_CANNOT_FLUSH_QUEUE)
PVRE(PVRSRV_ERROR_CANNOT_GET_QUEUE_SPACE)
PVRE(PVRSRV_ERROR_CANNOT_GET_RENDERDETAILS)
PVRE(PVRSRV_ERROR_RETRY)
PVRE(PVRSRV_ERROR_DDK_VERSION_MISMATCH)
PVRE(PVRSRV_ERROR_DDK_BUILD_MISMATCH)
PVRE(PVRSRV_ERROR_BUILD_OPTIONS_MISMATCH)
PVRE(PVRSRV_ERROR_BVNC_MISMATCH)
PVRE(PVRSRV_ERROR_FWPROCESSOR_MISMATCH)
PVRE(PVRSRV_ERROR_UPLOAD_TOO_BIG)
PVRE(PVRSRV_ERROR_INVALID_FLAGS)
PVRE(PVRSRV_ERROR_FAILED_TO_REGISTER_PROCESS)
PVRE(PVRSRV_ERROR_UNABLE_TO_LOAD_LIBRARY)
PVRE(PVRSRV_ERROR_UNABLE_GET_FUNC_ADDR)
PVRE(PVRSRV_ERROR_UNLOAD_LIBRARY_FAILED)
PVRE(PVRSRV_ERROR_BRIDGE_CALL_FAILED)
PVRE(PVRSRV_ERROR_IOCTL_CALL_FAILED)
PVRE(PVRSRV_ERROR_MMU_API_PROTOCOL_ERROR)
PVRE(PVRSRV_ERROR_MMU_CONFIG_IS_WRONG)
PVRE(PVRSRV_ERROR_MMU_CONTEXT_NOT_FOUND)
PVRE(PVRSRV_ERROR_MMU_FAILED_TO_ALLOCATE_PAGETABLES)
PVRE(PVRSRV_ERROR_MMU_FAILED_TO_CREATE_HEAP)
PVRE(PVRSRV_ERROR_MMU_FAILED_TO_MAP_PAGE_TABLE)
PVRE(PVRSRV_ERROR_MMU_FAILED_TO_UNMAP_PAGE_TABLE)
PVRE(PVRSRV_ERROR_MMU_INVALID_PAGE_SIZE_FOR_DEVICE)
PVRE(PVRSRV_ERROR_MMU_LIVE_ALLOCATIONS_IN_HEAP)
PVRE(PVRSRV_ERROR_MMU_RESERVATION_NOT_INSIDE_HEAP)
PVRE(PVRSRV_ERROR_PMR_NEW_MEMORY)
PVRE(PVRSRV_ERROR_PMR_STILL_REFERENCED)
PVRE(PVRSRV_ERROR_PMR_CLIENT_NOT_TRUSTED)
PVRE(PVRSRV_ERROR_PMR_FAILED_TO_ALLOC_PAGES)
PVRE(PVRSRV_ERROR_PMR_INCOMPATIBLE_CONTIGUITY)
PVRE(PVRSRV_ERROR_PMR_MISMATCHED_ATTRIBUTES)
PVRE(PVRSRV_ERROR_PMR_NOT_PAGE_MULTIPLE)
PVRE(PVRSRV_ERROR_PMR_NOT_PERMITTED)
PVRE(PVRSRV_ERROR_PMR_ALREADY_OCCUPIED)
PVRE(PVRSRV_ERROR_PMR_UNRECOVERABLE_ERROR)
PVRE(PVRSRV_ERROR_PMR_WRONG_PASSWORD_OR_STALE_PMR)
PVRE(PVRSRV_ERROR_PMR_WRONG_PMR_TYPE)
PVRE(PVRSRV_ERROR_PMR_MAPPING_ALREADY_EXISTS)
PVRE(PVRSRV_ERROR_PMR_BAD_MAPPINGTABLE_SIZE)
PVRE(PVRSRV_ERROR_PMR_BAD_CHUNK_SIZE)
PVRE(PVRSRV_ERROR_PMR_MAPPINGTABLE_MISMATCH)
PVRE(PVRSRV_ERROR_PMR_INVALID_CHUNK)
PVRE(PVRSRV_ERROR_PMR_NO_KERNEL_MAPPING)
PVRE(PVRSRV_ERROR_PMR_EMPTY)
PVRE(PVRSRV_ERROR_PMR_NO_CPU_MAP_FOUND)
PVRE(PVRSRV_ERROR_PMR_CPU_PAGE_UNMAP_FAILED)
PVRE(PVRSRV_ERROR_PMR_CPU_PAGE_MAP_FAILED)
PVRE(PVRSRV_ERROR_PMR_PAGE_POISONING_FAILED)
PVRE(PVRSRV_ERROR_PMR_INVALID_MAP_INDEX_ARRAY)
PVRE(PVRSRV_ERROR_DEVICEMEM_ALLOCATIONS_REMAIN_IN_HEAP)
PVRE(PVRSRV_ERROR_DEVICEMEM_BAD_IMPORT_SIZE)
PVRE(PVRSRV_ERROR_DEVICEMEM_CANT_EXPORT_SUBALLOCATION)
PVRE(PVRSRV_ERROR_DEVICEMEM_INVALID_HEAP_CONFIG_INDEX)
PVRE(PVRSRV_ERROR_DEVICEMEM_INVALID_HEAP_INDEX)
PVRE(PVRSRV_ERROR_DEVICEMEM_MAP_FAILED)
PVRE(PVRSRV_ERROR_DEVICEMEM_NON_ZERO_USAGE_COUNT)
PVRE(PVRSRV_ERROR_DEVICEMEM_OUT_OF_RANGE)
PVRE(PVRSRV_ERROR_DEVICEMEM_VA_ALLOC_FAILED)
PVRE(PVRSRV_ERROR_DEVICEMEM_UNABLE_TO_CREATE_ARENA)
PVRE(PVRSRV_ERROR_DEVICEMEM_OUT_OF_DEVICE_VM)
PVRE(PVRSRV_ERROR_DEVICEMEM_ALREADY_MAPPED)
PVRE(PVRSRV_ERROR_DEVICEMEM_NO_MAPPING)
PVRE(PVRSRV_ERROR_DEVICEMEM_INVALID_PMR_FLAGS)
PVRE(PVRSRV_ERROR_DEVICEMEM_INVALID_LMA_HEAP)
PVRE(PVRSRV_ERROR_INVALID_MMU_TYPE)
PVRE(PVRSRV_ERROR_BUFFER_DEVICE_NOT_FOUND)
PVRE(PVRSRV_ERROR_BUFFER_DEVICE_ALREADY_PRESENT)
PVRE(PVRSRV_ERROR_PCI_DEVICE_NOT_FOUND)
PVRE(PVRSRV_ERROR_PCI_CALL_FAILED)
PVRE(PVRSRV_ERROR_PCI_REGION_TOO_SMALL)
PVRE(PVRSRV_ERROR_PCI_REGION_UNAVAILABLE)
PVRE(PVRSRV_ERROR_BAD_REGION_SIZE_MISMATCH)
PVRE(PVRSRV_ERROR_REGISTER_BASE_NOT_SET)
PVRE(PVRSRV_ERROR_FAILED_TO_ALLOC_USER_MEM)
PVRE(PVRSRV_ERROR_FAILED_TO_ALLOC_VP_MEMORY)
PVRE(PVRSRV_ERROR_FAILED_TO_MAP_SHARED_PBDESC)
PVRE(PVRSRV_ERROR_FAILED_TO_MAP_KERNELVIRTUAL)
PVRE(PVRSRV_ERROR_FAILED_TO_GET_PHYS_ADDR)
PVRE(PVRSRV_ERROR_FAILED_TO_ALLOC_VIRT_MEMORY)
PVRE(PVRSRV_ERROR_FAILED_TO_COPY_VIRT_MEMORY)
PVRE(PVRSRV_ERROR_FAILED_TO_ALLOC_PAGES)
PVRE(PVRSRV_ERROR_FAILED_TO_FREE_PAGES)
PVRE(PVRSRV_ERROR_FAILED_TO_COPY_PAGES)
PVRE(PVRSRV_ERROR_UNABLE_TO_LOCK_PAGES)
PVRE(PVRSRV_ERROR_UNABLE_TO_UNLOCK_PAGES)
PVRE(PVRSRV_ERROR_STILL_MAPPED)
PVRE(PVRSRV_ERROR_MAPPING_NOT_FOUND)
PVRE(PVRSRV_ERROR_PHYS_ADDRESS_EXCEEDS_32BIT)
PVRE(PVRSRV_ERROR_FAILED_TO_MAP_PAGE_TABLE)
PVRE(PVRSRV_ERROR_INVALID_SEGMENT_BLOCK)
PVRE(PVRSRV_ERROR_INVALID_GFXDEVDEVDATA)
PVRE(PVRSRV_ERROR_INVALID_DEVINFO)
PVRE(PVRSRV_ERROR_INVALID_MEMINFO)
PVRE(PVRSRV_ERROR_INVALID_MISCINFO)
PVRE(PVRSRV_ERROR_UNKNOWN_IOCTL)
PVRE(PVRSRV_ERROR_INVALID_CONTEXT)
PVRE(PVRSRV_ERROR_UNABLE_TO_DESTROY_CONTEXT)
PVRE(PVRSRV_ERROR_INVALID_HEAP)
PVRE(PVRSRV_ERROR_INVALID_KERNELINFO)
PVRE(PVRSRV_ERROR_UNKNOWN_POWER_STATE)
PVRE(PVRSRV_ERROR_INVALID_HANDLE_TYPE)
PVRE(PVRSRV_ERROR_INVALID_WRAP_TYPE)
PVRE(PVRSRV_ERROR_INVALID_PHYS_ADDR)
PVRE(PVRSRV_ERROR_INVALID_CPU_ADDR)
PVRE(PVRSRV_ERROR_INVALID_HEAPINFO)
PVRE(PVRSRV_ERROR_INVALID_PERPROC)
PVRE(PVRSRV_ERROR_FAILED_TO_RETRIEVE_HEAPINFO)
PVRE(PVRSRV_ERROR_INVALID_MAP_REQUEST)
PVRE(PVRSRV_ERROR_INVALID_UNMAP_REQUEST)
PVRE(PVRSRV_ERROR_UNABLE_TO_FIND_MAPPING_HEAP)
PVRE(PVRSRV_ERROR_MAPPING_STILL_IN_USE)
PVRE(PVRSRV_ERROR_EXCEEDED_HW_LIMITS)
PVRE(PVRSRV_ERROR_NO_STAGING_BUFFER_ALLOCATED)
PVRE(PVRSRV_ERROR_UNABLE_TO_CREATE_PERPROC_AREA)
PVRE(PVRSRV_ERROR_UNABLE_TO_CREATE_EVENT)
PVRE(PVRSRV_ERROR_UNABLE_TO_ENABLE_EVENT)
PVRE(PVRSRV_ERROR_UNABLE_TO_REGISTER_EVENT)
PVRE(PVRSRV_ERROR_UNABLE_TO_DESTROY_EVENT)
PVRE(PVRSRV_ERROR_UNABLE_TO_CREATE_THREAD)
PVRE(PVRSRV_ERROR_UNABLE_TO_CLOSE_THREAD)
PVRE(PVRSRV_ERROR_THREAD_READ_ERROR)
PVRE(PVRSRV_ERROR_UNABLE_TO_REGISTER_ISR_HANDLER)
PVRE(PVRSRV_ERROR_UNABLE_TO_INSTALL_ISR)
PVRE(PVRSRV_ERROR_UNABLE_TO_UNINSTALL_ISR)
PVRE(PVRSRV_ERROR_ISR_ALREADY_INSTALLED)
PVRE(PVRSRV_ERROR_ISR_NOT_INSTALLED)
PVRE(PVRSRV_ERROR_UNABLE_TO_INITIALISE_INTERRUPT)
PVRE(PVRSRV_ERROR_UNABLE_TO_RETRIEVE_INFO)
PVRE(PVRSRV_ERROR_UNABLE_TO_DO_BACKWARDS_BLIT)
PVRE(PVRSRV_ERROR_UNABLE_TO_CLOSE_SERVICES)
PVRE(PVRSRV_ERROR_UNABLE_TO_REGISTER_CONTEXT)
PVRE(PVRSRV_ERROR_UNABLE_TO_REGISTER_RESOURCE)
PVRE(PVRSRV_ERROR_INVALID_CCB_COMMAND)
PVRE(PVRSRV_ERROR_KERNEL_CCB_FULL)
PVRE(PVRSRV_ERROR_FLIP_FAILED)
PVRE(PVRSRV_ERROR_UNBLANK_DISPLAY_FAILED)
PVRE(PVRSRV_ERROR_TIMEOUT_POLLING_FOR_VALUE)
PVRE(PVRSRV_ERROR_TIMEOUT_WAITING_FOR_CLIENT_CCB)
PVRE(PVRSRV_ERROR_CREATE_RENDER_CONTEXT_FAILED)
PVRE(PVRSRV_ERROR_UNKNOWN_PRIMARY_FRAG)
PVRE(PVRSRV_ERROR_UNEXPECTED_SECONDARY_FRAG)
PVRE(PVRSRV_ERROR_UNEXPECTED_PRIMARY_FRAG)
PVRE(PVRSRV_ERROR_UNABLE_TO_INSERT_FENCE_ID)
PVRE(PVRSRV_ERROR_BLIT_SETUP_FAILED)
PVRE(PVRSRV_ERROR_SUBMIT_NEEDED)
PVRE(PVRSRV_ERROR_PDUMP_NOT_AVAILABLE)
PVRE(PVRSRV_ERROR_PDUMP_BUFFER_FULL)
PVRE(PVRSRV_ERROR_PDUMP_BUF_OVERFLOW)
PVRE(PVRSRV_ERROR_PDUMP_NOT_ACTIVE)
PVRE(PVRSRV_ERROR_INCOMPLETE_LINE_OVERLAPS_PAGES)
PVRE(PVRSRV_ERROR_MUTEX_DESTROY_FAILED)
PVRE(PVRSRV_ERROR_MUTEX_INTERRUPTIBLE_ERROR)
PVRE(PVRSRV_ERROR_INSUFFICIENT_SPACE_FOR_COMMAND)
PVRE(PVRSRV_ERROR_PROCESS_NOT_INITIALISED)
PVRE(PVRSRV_ERROR_PROCESS_NOT_FOUND)
PVRE(PVRSRV_ERROR_SRV_CONNECT_FAILED)
PVRE(PVRSRV_ERROR_SRV_DISCONNECT_FAILED)
PVRE(PVRSRV_ERROR_DEINT_PHASE_FAILED)
PVRE(PVRSRV_ERROR_INIT2_PHASE_FAILED)
PVRE(PVRSRV_ERROR_UNABLE_TO_FIND_RESOURCE)
PVRE(PVRSRV_ERROR_NO_DC_DEVICES_FOUND)
PVRE(PVRSRV_ERROR_DC_DEVICE_INACCESSIBLE)
PVRE(PVRSRV_ERROR_DC_INVALID_MAXDEPTH)
PVRE(PVRSRV_ERROR_UNABLE_TO_OPEN_DC_DEVICE)
PVRE(PVRSRV_ERROR_UNABLE_TO_UNREGISTER_DEVICE)
PVRE(PVRSRV_ERROR_NO_DEVICEDATA_FOUND)
PVRE(PVRSRV_ERROR_NO_DEVICENODE_FOUND)
PVRE(PVRSRV_ERROR_NO_CLIENTNODE_FOUND)
PVRE(PVRSRV_ERROR_FAILED_TO_PROCESS_QUEUE)
PVRE(PVRSRV_ERROR_UNABLE_TO_INIT_TASK)
PVRE(PVRSRV_ERROR_UNABLE_TO_SCHEDULE_TASK)
PVRE(PVRSRV_ERROR_UNABLE_TO_KILL_TASK)
PVRE(PVRSRV_ERROR_UNABLE_TO_ENABLE_TIMER)
PVRE(PVRSRV_ERROR_UNABLE_TO_DISABLE_TIMER)
PVRE(PVRSRV_ERROR_UNABLE_TO_REMOVE_TIMER)
PVRE(PVRSRV_ERROR_UNKNOWN_PIXEL_FORMAT)
PVRE(PVRSRV_ERROR_HANDLE_INDEX_OUT_OF_RANGE)
PVRE(PVRSRV_ERROR_HANDLE_NOT_ALLOCATED)
PVRE(PVRSRV_ERROR_HANDLE_TYPE_MISMATCH)
PVRE(PVRSRV_ERROR_UNABLE_TO_ADD_HANDLE)
PVRE(PVRSRV_ERROR_HANDLE_NOT_SHAREABLE)
PVRE(PVRSRV_ERROR_HANDLE_NOT_FOUND)
PVRE(PVRSRV_ERROR_INVALID_SUBHANDLE)
PVRE(PVRSRV_ERROR_HANDLE_BATCH_IN_USE)
PVRE(PVRSRV_ERROR_HANDLE_BATCH_COMMIT_FAILURE)
PVRE(PVRSRV_ERROR_UNABLE_TO_CREATE_HASH_TABLE)
PVRE(PVRSRV_ERROR_UNABLE_TO_RETRIEVE_HASH_VALUE)
PVRE(PVRSRV_ERROR_UNABLE_TO_REMOVE_HASH_VALUE)
PVRE(PVRSRV_ERROR_UNABLE_TO_INSERT_HASH_VALUE)
PVRE(PVRSRV_ERROR_INSERT_HASH_TABLE_DATA_FAILED)
PVRE(PVRSRV_ERROR_UNSUPPORTED_BACKING_STORE)
PVRE(PVRSRV_ERROR_UNABLE_TO_DESTROY_BM_HEAP)
PVRE(PVRSRV_ERROR_UNKNOWN_INIT_SERVER_STATE)
PVRE(PVRSRV_ERROR_NO_FREE_DEVICEIDS_AVAILABLE)
PVRE(PVRSRV_ERROR_INVALID_DEVICEID)
PVRE(PVRSRV_ERROR_DEVICEID_NOT_FOUND)
PVRE(PVRSRV_ERROR_MEMORY_TEST_FAILED)
PVRE(PVRSRV_ERROR_CPUPADDR_TEST_FAILED)
PVRE(PVRSRV_ERROR_COPY_TEST_FAILED)
PVRE(PVRSRV_ERROR_SEMAPHORE_NOT_INITIALISED)
PVRE(PVRSRV_ERROR_UNABLE_TO_RELEASE_CLOCK)
PVRE(PVRSRV_ERROR_CLOCK_REQUEST_FAILED)
PVRE(PVRSRV_ERROR_DISABLE_CLOCK_FAILURE)
PVRE(PVRSRV_ERROR_UNABLE_TO_SET_CLOCK_RATE)
PVRE(PVRSRV_ERROR_UNABLE_TO_ROUND_CLOCK_RATE)
PVRE(PVRSRV_ERROR_UNABLE_TO_ENABLE_CLOCK)
PVRE(PVRSRV_ERROR_UNABLE_TO_GET_CLOCK)
PVRE(PVRSRV_ERROR_UNABLE_TO_GET_PARENT_CLOCK)
PVRE(PVRSRV_ERROR_UNABLE_TO_GET_SYSTEM_CLOCK)
PVRE(PVRSRV_ERROR_UNKNOWN_SGL_ERROR)
PVRE(PVRSRV_ERROR_SYSTEM_POWER_CHANGE_FAILURE)
PVRE(PVRSRV_ERROR_DEVICE_POWER_CHANGE_FAILURE)
PVRE(PVRSRV_ERROR_DEVICE_POWER_CHANGE_DENIED)
PVRE(PVRSRV_ERROR_BAD_SYNC_STATE)
PVRE(PVRSRV_ERROR_UNABLE_TO_SET_CACHE_MODE)
PVRE(PVRSRV_ERROR_FAILED_TO_ALLOC_MMUCONTEXT_ID)
PVRE(PVRSRV_ERROR_PARAMETER_BUFFER_INVALID_ALIGNMENT)
PVRE(PVRSRV_ERROR_UNABLE_TO_ACQUIRE_CONNECTION)
PVRE(PVRSRV_ERROR_UNABLE_TO_RELEASE_CONNECTION)
PVRE(PVRSRV_ERROR_PHYSHEAP_ID_IN_USE)
PVRE(PVRSRV_ERROR_PHYSHEAP_ID_INVALID)
PVRE(PVRSRV_ERROR_PHYSHEAP_CONFIG)
PVRE(PVRSRV_ERROR_HP_REQUEST_TOO_LONG)
PVRE(PVRSRV_ERROR_INVALID_SYNC_PRIM)
PVRE(PVRSRV_ERROR_INVALID_SYNC_PRIM_OP)
PVRE(PVRSRV_ERROR_INVALID_SYNC_CONTEXT)
PVRE(PVRSRV_ERROR_BP_NOT_SET)
PVRE(PVRSRV_ERROR_BP_ALREADY_SET)
PVRE(PVRSRV_ERROR_FEATURE_DISABLED)
PVRE(PVRSRV_ERROR_REG_CONFIG_ENABLED)
PVRE(PVRSRV_ERROR_REG_CONFIG_FULL)
PVRE(PVRSRV_ERROR_REG_CONFIG_INVALID_TYPE)
PVRE(PVRSRV_ERROR_MEMORY_ACCESS)
PVRE(PVRSRV_ERROR_NO_SYSTEM_BUFFER)
PVRE(PVRSRV_ERROR_DC_INVALID_CONFIG)
PVRE(PVRSRV_ERROR_DC_INVALID_CROP_RECT)
PVRE(PVRSRV_ERROR_DC_INVALID_DISPLAY_RECT)
PVRE(PVRSRV_ERROR_DC_INVALID_BUFFER_DIMS)
PVRE(PVRSRV_ERROR_DC_INVALID_TRANSFORM)
PVRE(PVRSRV_ERROR_DC_INVALID_SCALE)
PVRE(PVRSRV_ERROR_DC_INVALID_CUSTOM)
PVRE(PVRSRV_ERROR_DC_TOO_MANY_PIPES)
PVRE(PVRSRV_ERROR_DC_INVALID_PLANE_ALPHA)
PVRE(PVRSRV_ERROR_NOT_READY)
PVRE(PVRSRV_ERROR_RESOURCE_UNAVAILABLE)
PVRE(PVRSRV_ERROR_UNSUPPORTED_PIXEL_FORMAT)
PVRE(PVRSRV_ERROR_UNSUPPORTED_MEMORY_LAYOUT)
PVRE(PVRSRV_ERROR_UNSUPPORTED_FB_COMPRESSION_MODE)
PVRE(PVRSRV_ERROR_UNSUPPORTED_DIMS)
PVRE(PVRSRV_ERROR_UNSUPPORTED_CACHE_MODE)
PVRE(PVRSRV_ERROR_UNABLE_TO_ADD_TIMER)
PVRE(PVRSRV_ERROR_NOT_FOUND)
PVRE(PVRSRV_ERROR_ALREADY_OPEN)
PVRE(PVRSRV_ERROR_STREAM_MISUSE)
PVRE(PVRSRV_ERROR_STREAM_FULL)
PVRE(PVRSRV_ERROR_STREAM_READLIMIT_REACHED)
PVRE(PVRSRV_ERROR_STREAM_NOT_ENOUGH_SPACE)
PVRE(PVRSRV_ERROR_PHYSMEM_NOT_ALLOCATED)
PVRE(PVRSRV_ERROR_PBSIZE_ALREADY_MAX)
PVRE(PVRSRV_ERROR_PBSIZE_ALREADY_MIN)
PVRE(PVRSRV_ERROR_INVALID_PB_CONFIG)
PVRE(PVRSRV_ERROR_META_THREAD0_NOT_ENABLED)
PVRE(PVRSRV_ERROR_NOT_AUTHENTICATED)
PVRE(PVRSRV_ERROR_REQUEST_TDFWMEM_PAGES_FAIL)
PVRE(PVRSRV_ERROR_INIT_TDFWMEM_PAGES_FAIL)
PVRE(PVRSRV_ERROR_REQUEST_TDSECUREBUF_PAGES_FAIL)
PVRE(PVRSRV_ERROR_INIT_TDSECUREBUF_PAGES_FAIL)
PVRE(PVRSRV_ERROR_MUTEX_ALREADY_CREATED)
PVRE(PVRSRV_ERROR_DBGTABLE_ALREADY_REGISTERED)
PVRE(PVRSRV_ERROR_ALREADY_EXISTS)
PVRE(PVRSRV_ERROR_UNABLE_TO_SEND_PULSE)
PVRE(PVRSRV_ERROR_TASK_FAILED)
PVRE(PVRSRV_ERROR_DEVICE_IDLE_REQUEST_DENIED)
PVRE(PVRSRV_ERROR_INVALID_GPU_ADDR)
PVRE(PVRSRV_ERROR_INVALID_OFFSET)
PVRE(PVRSRV_ERROR_CCCB_STALLED)
PVRE(PVRSRV_ERROR_MIPS_STATUS_UNAVAILABLE)
PVRE(PVRSRV_ERROR_NOT_ENABLED)
PVRE(PVRSRV_ERROR_SYSTEM_LOCAL_MEMORY_INIT_FAIL)
PVRE(PVRSRV_ERROR_FW_IMAGE_MISMATCH)
PVRE(PVRSRV_ERROR_PDUMP_NOT_ALLOWED)
PVRE(PVRSRV_ERROR_BRIDGE_BUFFER_TOO_SMALL)
PVRE(PVRSRV_ERROR_RPM_PBSIZE_ALREADY_MAX)
PVRE(PVRSRV_ERROR_NONZERO_REFCOUNT)
PVRE(PVRSRV_ERROR_SETAFFINITY_FAILED)
PVRE(PVRSRV_ERROR_UNABLE_TO_COMPILE_PDS)
PVRE(PVRSRV_ERROR_INTERNAL_ERROR)
PVRE(PVRSRV_ERROR_BRIDGE_EFAULT)
PVRE(PVRSRV_ERROR_BRIDGE_EINVAL)
PVRE(PVRSRV_ERROR_BRIDGE_ENOMEM)
PVRE(PVRSRV_ERROR_BRIDGE_ERANGE)
PVRE(PVRSRV_ERROR_BRIDGE_EPERM)
PVRE(PVRSRV_ERROR_BRIDGE_ENOTTY)
PVRE(PVRSRV_ERROR_SYNC_NATIVESYNC_NOT_REGISTERED)
PVRE(PVRSRV_ERROR_PROBE_DEFER)
PVRE(PVRSRV_ERROR_INVALID_ALIGNMENT)
PVRE(PVRSRV_ERROR_CLOSE_FAILED)
PVRE(PVRSRV_ERROR_NOT_INITIALISED)
PVRE(PVRSRV_ERROR_CONVERSION_FAILED)
PVRE(PVRSRV_ERROR_RA_REQUEST_ALLOC_FAIL)
PVRE(PVRSRV_ERROR_RA_REQUEST_VIRT_ADDR_FAIL)
PVRE(PVRSRV_ERROR_RA_INSERT_RESOURCE_SPAN_FAILED)
PVRE(PVRSRV_ERROR_RA_ATTEMPT_ALLOC_ALIGNED_FAILED)
PVRE(PVRSRV_ERROR_OBJECT_STILL_REFERENCED)
PVRE(PVRSRV_ERROR_BVNC_UNSUPPORTED)
PVRE(PVRSRV_ERROR_INVALID_BVNC_PARAMS)
PVRE(PVRSRV_ERROR_ALIGNMENT_ARRAY_NOT_AVAILABLE)
PVRE(PVRSRV_ERROR_DEVICEMEM_ADDITIONAL_HEAPS_IN_CONTEXT)
PVRE(PVRSRV_ERROR_PID_ALREADY_REGISTERED)
PVRE(PVRSRV_ERROR_PID_NOT_REGISTERED)
PVRE(PVRSRV_ERROR_SIGNAL_FAILED)
PVRE(PVRSRV_ERROR_INVALID_NOTIF_STREAM)
PVRE(PVRSRV_ERROR_INVALID_SPU_MASK)
PVRE(PVRSRV_ERROR_FREELIST_RECONSTRUCTION_FAILED)
PVRE(PVRSRV_ERROR_INVALID_PVZ_CONFIG)
PVRE(PVRSRV_ERROR_TLPACKET_SIZE_LIMIT_EXCEEDED)
PVRE(PVRSRV_ERROR_NOT_SW_TIMELINE)
PVRE(PVRSRV_ERROR_SW_TIMELINE_AT_LATEST_POINT)
PVRE(PVRSRV_ERROR_INVALID_PVZ_OSID)
PVRE(PVRSRV_ERROR_PVZ_OSID_IS_OFFLINE)
PVRE(PVRSRV_ERROR_BRIDGE_ARRAY_SIZE_TOO_BIG)
PVRE(PVRSRV_ERROR_INTERRUPTED)
PVRE(PVRSRV_ERROR_PWLOCK_RELEASED_REACQ_FAILED)
PVRE(PVRSRV_ERROR_PDUMP_INVALID_BLOCKLEN)
PVRE(PVRSRV_ERROR_SYSTEM_STATE_POWERED_OFF)
PVRE(PVRSRV_ERROR_MULTIPLE_SECURITY_PDUMPS)
PVRE(PVRSRV_ERROR_BAD_PARAM_SIZE)
PVRE(PVRSRV_ERROR_INVALID_REQUEST)
PVRE(PVRSRV_ERROR_FAILED_TO_ACQUIRE_PAGES)
PVRE(PVRSRV_ERROR_TEST_FAILED)
PVRE(PVRSRV_ERROR_SYNC_PRIM_OP_NOT_SUPPORTED)
PVRE(PVRSRV_ERROR_FAILED_TO_GET_VIRT_ADDR)
PVRE(PVRSRV_ERROR_UNABLE_TO_FREE_RESOURCE)
PVRE(PVRSRV_ERROR_UNABLE_TO_CREATE_SEMAPHORE)
PVRE(PVRSRV_ERROR_UNABLE_TO_REGISTER_SEMAPHORE)
PVRE(PVRSRV_ERROR_UNABLE_TO_DESTROY_SEMAPHORE)
PVRE(PVRSRV_ERROR_TOO_MANY_SYNCS)
PVRE(PVRSRV_ERROR_ION_NO_CLIENT)
PVRE(PVRSRV_ERROR_ION_FAILED_TO_ALLOC)
