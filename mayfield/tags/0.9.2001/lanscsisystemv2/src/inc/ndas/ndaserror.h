#pragma once

// ------------------------------------------------------------------------
//
// NDAS Helper Service Error Codes
//
// ------------------------------------------------------------------------
#define FACILITY_NDASHLPSVC 0x002
#define FACILITY_NDASHLPSVC_MASK (FACILITY_NDASHLPSVC << 16)

#define NDASHLPSVC_ERROR_CODE(severity, code) \
	( APPLICATION_ERROR_MASK | FACILITY_NDASHLPSVC_MASK | severity | code )

#define NDASHLPSVC_EC_ERROR(code) NDASHLPSVC_ERROR_CODE(ERROR_SEVERITY_ERROR, code)
#define NDASHLPSVC_EC_INFO(code) NDASHLPSVC_ERROR_CODE(ERROR_SEVERITY_ERROR, code)
#define NDASHLPSVC_EC_WARNING(code) NDASHLPSVC_ERROR_CODE(ERROR_SEVERITY_WARNING, code)
#define NDASHLPSVC_EC_SUCCESS() 0L


#define NDASHLPSVC_ERROR_DEVICE_ENTRY_NOT_FOUND				NDASHLPSVC_EC_ERROR(0x21)
#define NDASHLPSVC_ERROR_UNITDEVICE_ENTRY_NOT_FOUND			NDASHLPSVC_EC_ERROR(0x22)
#define NDASHLPSVC_ERROR_LOGICALDEVICE_ENTRY_NOT_FOUND		NDASHLPSVC_EC_ERROR(0x23)

#define NDASHLPSVC_ERROR_CANNOT_UNREGISTER_ENABLED_DEVICE	NDASHLPSVC_EC_ERROR(0x31)
#define NDASHLPSVC_ERROR_INVALID_SLOT_NUMBER				NDASHLPSVC_EC_ERROR(0x32)
#define NDASHLPSVC_ERROR_SLOT_ALREADY_OCCUPIED				NDASHLPSVC_EC_ERROR(0x33)
#define NDASHLPSVC_ERROR_DUPLICATE_DEVICE_ENTRY				NDASHLPSVC_EC_ERROR(0x34)
#define NDASHLPSVC_ERROR_DEVICE_ENTRY_SLOT_FULL				NDASHLPSVC_EC_ERROR(0x35)

#define NDASHLPSVC_ERROR_NDAS_LOGICALDEVICE_NOT_INITIALIZED NDASHLPSVC_EC_ERROR(0x41)
#define NDASHLPSVC_ERROR_NDAS_LOGICALDEVICE_MEMBER_MISSING	NDASHLPSVC_EC_ERROR(0x42)
#define NDASHLPSVC_ERROR_NDAS_LOGICALDEVICE_NOT_MOUNTED		NDASHLPSVC_EC_ERROR(0x43)

#define NDASHLPSVC_ERROR_CONFLICT_LOGICALDEVICE_ENTRY		NDASHLPSVC_EC_ERROR(0x44)
#define NDASHLPSVC_ERROR_DUPLICATE_LOGICALDEVICE_ENTRY		NDASHLPSVC_EC_ERROR(0x45)
#define NDASHLPSVC_ERROR_LOGICALDEVICE_SLOT_FULL			NDASHLPSVC_EC_ERROR(0x46)

#define NDASHLPSVC_ERROR_UNSUPPORTED_LOGICALDEVICE_TYPE		NDASHLPSVC_EC_ERROR(0x47)

// denied by granted access
#define NDASHLPSVC_ERROR_NDAS_LOGICALDEVICE_ACCESS_DENIED	NDASHLPSVC_EC_ERROR(0x50)
// failed by allowing access (runtime value)
#define NDASHLPSVC_ERROR_NDAS_LOGICALDEVICE_ACCESS_FAILED	NDASHLPSVC_EC_ERROR(0x51)

#define NDASHLPSVC_ERROR_COMMAND_VERSION_NOT_SUPPORTED		NDASHLPSVC_EC_ERROR(0xE0)
#define NDASHLPSVC_ERROR_NOT_IMPLEMENTED					NDASHLPSVC_EC_ERROR(0xE1)

#define NDASHLPSVC_ERROR_ROFILTER_VERSION_MISMATCH			NDASHLPSVC_EC_ERROR(0xC0)



// ------------------------------------------------------------------------
//
// NDAS USER API Error Codes
//
// ------------------------------------------------------------------------

#define FACILITY_NDASUSER 0x001
#define FACILITY_NDASUSER_MASK (FACILITY_NDASUSER << 16)

#define NDASUSER_ERROR_CODE(severity, code) \
	( APPLICATION_ERROR_MASK | FACILITY_NDASUSER_MASK | severity | code )

#define NDASUSER_EC_ERROR(code) NDASUSER_ERROR_CODE(ERROR_SEVERITY_ERROR, code)
#define NDASUSER_EC_INFO(code) NDASUSER_ERROR_CODE(ERROR_SEVERITY_ERROR, code)
#define NDASUSER_EC_WARNING(code) NDASUSER_ERROR_CODE(ERROR_SEVERITY_WARNING, code)
#define NDASUSER_EC_SUCCESS 0L

#define NDASUSER_ERROR_SERVICE_CONNECTION_FAILURE	NDASUSER_EC_ERROR(1)
#define NDASUSER_ERROR_INVALID_DEVICE_STRING_ID_OR_KEY NDASUSER_EC_ERROR(2)
#define NDASUSER_ERROR_INVALID_DEVICE_STRING_ID		NDASUSER_EC_ERROR(3)
#define NDASUSER_ERROR_INVALID_DEVICE_STRING_KEY	NDASUSER_EC_ERROR(4)
#define NDASUSER_ERROR_INVALID_PARAMETER	NDASUSER_EC_ERROR(0xFF)

#define NDASUSER_ERROR_NDAS_LOGICALDEVICE_ACCESS_DENIED	NDASUSER_EC_ERROR(0x50)

#define NDASUSER_ERROR_SERVICE_RETURNED_NOT_IMPLEMENTED NDASUSER_EC_ERROR(0x101)
#define NDASUSER_ERROR_SERVICE_RETURNED_INVALID_REQUEST NDASUSER_EC_ERROR(0x102)
#define NDASUSER_ERROR_SERVICE_RETURNED_TERMINATION		NDASUSER_EC_ERROR(0x103)
#define NDASUSER_ERROR_SERVICE_RETURNED_UNSUPPORTED_VERSION NDASUSER_EC_ERROR(0x1FF)

#define NDASUSER_ERROR_EVENT_VERSION_MISMATCH NDASUSER_EC_ERROR(0x200)
#define NDASUSER_ERROR_EVENT_CALLBACK_FULL NDASUSER_EC_ERROR(0x201)
#define NDASUSER_ERROR_INVALID_EVENT_CALLBACK_HANDLE NDASUSER_EC_ERROR(0x202)

#define NDASUSER_ERROR_NOT_IMPLEMENTED					NDASUSER_EC_ERROR(0xE1)

#define FACILITY_NDASDM 0xF10
#define FACILITY_NDASDM_MASK (FACILITY_NDASDM << 16)

#define NDASDM_ERROR_CODE(severity, code) \
	( APPLICATION_ERROR_MASK | FACILITY_NDASUSER_MASK | severity | code )

#define NDASDM_EC_ERROR(code) NDASDM_ERROR_CODE(ERROR_SEVERITY_ERROR, code)
#define NDASDM_EC_INFO(code) NDASDM_ERROR_CODE(ERROR_SEVERITY_ERROR, code)
#define NDASDM_EC_WARNING(code) NDASDM_ERROR_CODE(ERROR_SEVERITY_WARNING, code)
#define NDASDM_EC_SUCCESS 0L

#define NDASDM_ERROR_NON_SCSI_TYPE_DEVICE NDASDM_EC_ERROR(0x100)
#define NDASDM_ERROR_SRB_IO_CONTROL_ERROR NDASDM_EC_ERROR(0x102)


//
//  Values are 32 bit values layed out as follows:
//
//   3 3 2 2 2 2 2 2 2 2 2 2 1 1 1 1 1 1 1 1 1 1
//   1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
//  +---+-+-+-----------------------+-------------------------------+
//  |Sev|C|R|     Facility          |               Code            |
//  +---+-+-+-----------------------+-------------------------------+
//
//  where
//
//      Sev - is the severity code
//
//          00 - Success
//          01 - Informational
//          10 - Warning
//          11 - Error
//
//      C - is the Customer code flag
//
//      R - is a reserved bit
//
//      Facility - is the facility code
//
//      Code - is the facility's status code
//
//
// Define the facility codes
//

//#define APPLICATION_ERROR_MASK       0x20000000
//#define ERROR_SEVERITY_SUCCESS       0x00000000
//#define ERROR_SEVERITY_INFORMATIONAL 0x40000000
//#define ERROR_SEVERITY_WARNING       0x80000000
//#define ERROR_SEVERITY_ERROR         0xC0000000